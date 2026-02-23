#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iomanip>
#include <sstream>
#include <QDate>
#include <map>
#include <set>
#include <QStackedWidget>
#include <QMainWindow>

const int MAX_SHELF_CAPACITY = 20;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    ui->locationcode->setReadOnly(true);
    ui->dateTimeEdit->setDate(QDate::currentDate());
    ui->dateTimeEdit_2->setDate(QDate::currentDate().addMonths(1));

    ui->bookTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->showbookidtable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->showbookidtable->setColumnCount(5);
    ui->showbookidtable->setHorizontalHeaderLabels({"Title", "Author", "Location", "Qty", "Code"});

    ui->bookTable->setColumnCount(6);
    ui->bookTable->setHorizontalHeaderLabels({"Title", "ID", "Borrower", "Due", "Fine", "Status"});

    showDashboard();
}

MainWindow::~MainWindow() {
    BookNode* curr = head;
    while (curr) {
        BookNode* next = curr->next;
        delete curr;
        curr = next;
    }
    delete ui;
}



string MainWindow::formatDate(time_t r) {
    if (r == 0) return "-";
    tm* t = localtime(&r);
    stringstream ss;
    ss << (1900 + t->tm_year) << "-" << (1 + t->tm_mon) << "-" << t->tm_mday;
    return ss.str();
}

//inorder to calculate fine

int MainWindow::calculateFine(time_t d) {
    if (d == 0) return 0;
    time_t n = time(nullptr);
    if (n <= d) return 0;
    double diff = difftime(n, d);
    int days = (int)(diff / 86400);
    return (days > 0) ? days * 10 : 0;
}

// TO Show number of total books, borrowed books, books available in library
void MainWindow::showDashboard() {
    int tot = 0, brw = 0;
    BookNode* curr = head;

    while (curr) {
        tot++;
        if (!curr->available) brw++;
        curr = curr->next;
    }

    ui->label_22->setText(QString::number(tot));
    ui->label_23->setText(QString::number(brw));
    ui->label_24->setText(QString::number(tot - brw));

    refreshTable();
    updateSmallTable();

    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWindow::on_generatecode_clicked() {
    QString bc = ui->bookcode->text().trimmed().toUpper();

    if(bc.isEmpty() || bc.contains("-")) {
        QMessageBox::warning(this, "Input Error", "Code cannot be empty or contain hyphens.");
        return;
    }

    QString generated = QString("F%1-%2-%3-%4")
                            .arg(QString::number(ui->comboBox_4->currentIndex()),
                                 ui->comboBox_5->currentText(),
                                 ui->comboBox->currentText(),
                                 bc);

    ui->locationcode->setText(generated);
}

//Adding a book
void MainWindow::on_addBook_clicked() {
    string t = ui->titleInput->text().trimmed().toStdString();
    string a = ui->authorInput->text().trimmed().toStdString();
    string loc = ui->locationcode->text().toStdString();
    int qty = ui->quantityInput->text().toInt();

    if (t.empty() || a.empty() || loc.empty() || qty <= 0) {
        QMessageBox::warning(this, "Error", "All fields must be filled correctly.");
        return;
    }

    int currentCount = 0, maxS = 0;
    BookNode* temp = head;
    while(temp) {
        if(temp->id.find(loc) == 0) {
            currentCount++;
            size_t lastDash = temp->id.find_last_of('-');
            if(lastDash != string::npos) {
                int s = stoi(temp->id.substr(lastDash + 1));
                if(s > maxS) maxS = s;
            }
        }
        temp = temp->next;
    }

    if (currentCount + qty > MAX_SHELF_CAPACITY) {
        QMessageBox::warning(this, "Full", "Shelf limit (20) reached at this location.");
        return;
    }

    if (QMessageBox::question(this, "Confirm", "Add " + QString::number(qty) + " books?") == QMessageBox::No) return;

    for (int i = 0; i < qty; i++) {
        stringstream ss; ss << loc << "-" << setfill('0') << setw(3) << (++maxS);
        string finalId = ss.str();

        bool exists = false;
        BookNode* check = head;
        while(check) {
            if(check->id == finalId) {
                exists = true;
                break;
            }
            check = check->next;
        }

        if(!exists) {
            BookNode* n = new BookNode(t, a, finalId);
            if (!head) {
                head = tail = n;
            } else {
                tail->next = n;
                n->prev = tail;
                tail = n;
            }
        }
    }
    QMessageBox::information(this, "Success", "Books Added Successfully.");
    showDashboard();
}



//Table for infrormation of each copy of book
void MainWindow::refreshTable() {
    ui->bookTable->setRowCount(0);
    BookNode* curr = head;
    while(curr) {
        int r = ui->bookTable->rowCount();
        ui->bookTable->insertRow(r);
        ui->bookTable->setItem(r, 0, new QTableWidgetItem(QString::fromStdString(curr->title)));
        ui->bookTable->setItem(r, 1, new QTableWidgetItem(QString::fromStdString(curr->id)));
        ui->bookTable->setItem(r, 2, new QTableWidgetItem(curr->available ? "N/A" : QString::fromStdString(curr->borrower)));
        ui->bookTable->setItem(r, 3, new QTableWidgetItem(QString::fromStdString(curr->dueDate)));
        ui->bookTable->setItem(r, 4, new QTableWidgetItem(QString::number(calculateFine(curr->rawDueDate))));
        ui->bookTable->setItem(r, 5, new QTableWidgetItem(curr->available ? "Available" : "Borrowed"));
        curr = curr->next;
    }
}


// Code required for assigning a book to student

void MainWindow::on_assignbookbutton_clicked() {
    string id = ui->RA_bookid->text().trimmed().toUpper().toStdString();
    if(id.empty()) {
        QMessageBox::warning(this, "Error", "Enter Book ID.");
        return;
    }

    BookNode* curr = head;
    while(curr) {
        if(curr->id == id) {
            if(!curr->available) {
                QMessageBox::warning(this, "Fail", "Book is already borrowed.");
                return;
            }
            if (QMessageBox::question(this, "Confirm", "Assign Book to Student?") == QMessageBox::No) return;

            curr->available = false;
            curr->borrower = ui->RA_studentid->text().toStdString();


            QDateTime selectedDate = ui->dateTimeEdit_2->dateTime();
            curr->rawDueDate = selectedDate.toSecsSinceEpoch();

            curr->dueDate = formatDate(curr->rawDueDate);

            QMessageBox::information(this, "Done", "Book Assigned.");
            showDashboard();
            return;
        }
        curr = curr->next;
    }
    QMessageBox::warning(this, "Fail", "ID not found.");
}


//Return book logic
void MainWindow::on_returnbookb_clicked() {
    string id = ui->RA_bookid_2->text().trimmed().toUpper().toStdString();
    if(id.empty()) return;

    BookNode* curr = head;
    while(curr) {
        if(curr->id == id) {
            if(curr->available) {
                QMessageBox::warning(this, "Error", "Book is already in library.");
                return;
            }

            int fine = calculateFine(curr->rawDueDate);
            if(fine > 0) {
                QMessageBox::warning(this, "Fine", "Overdue! Fine: " + QString::number(fine));
            }

            if (QMessageBox::question(this, "Confirm", "Return this Book?") == QMessageBox::No) return;
            curr->available = true;
            curr->borrower = "";
            curr->rawDueDate = 0;
            curr->dueDate = "-";
            QMessageBox::information(this, "Done", "Book Returned.");
            showDashboard();
            return;
        }
        curr = curr->next;
    }
    QMessageBox::warning(this, "Fail", "ID not found.");
}


//Table that shows a book title , its book code and how many its copies are available and in which which locations they can be found
void MainWindow::updateSmallTable() {
    ui->showbookidtable->setRowCount(0);

    struct BookGroup {
        string title;
        string author;
        set<string> locations;
        int available = 0;
        int total = 0;
    };

    map<string, BookGroup> summary;

    BookNode* curr = head;
    while (curr) {
        QStringList p = QString::fromStdString(curr->id).split("-");
        if (p.size() >= 4) {
            string loc = p[0].toStdString() + "-" + p[1].toStdString() + "-" + p[2].toStdString();
            string code = p[3].toStdString();

            summary[code].title = curr->title;
            summary[code].author = curr->author;
            summary[code].locations.insert(loc);
            summary[code].total++;
            if (curr->available) summary[code].available++;
        }
        curr = curr->next;
    }

    for (auto const& [code, data] : summary) {
        int r = ui->showbookidtable->rowCount();
        ui->showbookidtable->insertRow(r);

        string allLocs;
        for (const string& l : data.locations) {
            if (!allLocs.empty()) allLocs += ", ";
            allLocs += l;
        }

        ui->showbookidtable->setItem(r, 0, new QTableWidgetItem(QString::fromStdString(data.title)));
        ui->showbookidtable->setItem(r, 1, new QTableWidgetItem(QString::fromStdString(data.author)));
        ui->showbookidtable->setItem(r, 2, new QTableWidgetItem(QString::fromStdString(allLocs)));
        ui->showbookidtable->setItem(r, 3, new QTableWidgetItem(QString("%1/%2").arg(data.available).arg(data.total)));
        ui->showbookidtable->setItem(r, 4, new QTableWidgetItem(QString::fromStdString(code)));
    }
}

//deleting a single copy of a book  by its book id

void MainWindow::on_deleteabook_clicked() {
    string id = ui->del_bookid_2->text().trimmed().toUpper().toStdString();
    if(id.empty()) return;

    BookNode* curr = head;
    while(curr) {
        if(curr->id == id) {
            if(!curr->available) {
                QMessageBox::warning(this, "Error", "Cannot delete a borrowed book.");
                return;
            }
            if (QMessageBox::question(this, "Confirm", "Delete this specific book ID?") == QMessageBox::No) return;
            if(curr->prev) curr->prev->next = curr->next; else head = curr->next;
            if(curr->next) curr->next->prev = curr->prev; else tail = curr->prev;
            delete curr;
            QMessageBox::information(this, "Done", "Book Deleted.");
            showDashboard();
            return;
        }
        curr = curr->next;
    }
    QMessageBox::warning(this, "Fail", "ID not found.");
}


// deleting all copies of book by using book code
void MainWindow::on_deleteallsamebooks_clicked() {
    string bc = ui->del_bookcode->text().trimmed().toUpper().toStdString();
    if(bc.empty()) return;

    if (QMessageBox::question(this, "Confirm", "Delete all available copies of this code?") == QMessageBox::No) return;

    BookNode* curr = head;
    bool deleted = false;
    while(curr) {
        BookNode* nxt = curr->next;
        if(curr->id.find("-" + bc + "-") != string::npos && curr->available) {
            if(curr->prev) curr->prev->next = curr->next; else head = curr->next;
            if(curr->next) curr->next->prev = curr->prev; else tail = curr->prev;
            delete curr;
            deleted = true;
        }
        curr = nxt;
    }
    if(deleted) QMessageBox::information(this, "Done", "All available copies removed.");
    else QMessageBox::warning(this, "Fail", "No available copies found for this code.");
    showDashboard();
}

//Searching logic

void MainWindow::on_SearchPushButton_clicked() {
    QString f = ui->SearchlineEdit->text().trimmed().toLower();
    for(int i=0; i<ui->bookTable->rowCount(); ++i) {
        bool m = false;
        for(int j=0; j<ui->bookTable->columnCount(); ++j)
            if(ui->bookTable->item(i,j)->text().toLower().contains(f)) m = true;
        ui->bookTable->setRowHidden(i, !m);
    }
}

//for navigation purpose
void MainWindow::on_goto_addbookpage_clicked() {
    ui->stackedWidget->setCurrentWidget(ui->page);
}
void MainWindow::on_goto_viewpage_clicked() {
    refreshTable(); ui->stackedWidget->setCurrentWidget(ui->ViewBookS);
}
void MainWindow::on_assignreturnpage_clicked() {
    updateSmallTable(); ui->stackedWidget->setCurrentWidget(ui->ReturnBooks);
}
void MainWindow::on_deletepagenavigate_clicked() {
    ui->stackedWidget->setCurrentWidget(ui->deletebookpage);
}
void MainWindow::on_mainlogo_clicked() {
    showDashboard();
}

void MainWindow::on_aExit_clicked() {
    close();
}
