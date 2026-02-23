#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <ctime>

using namespace std;

struct BookNode {
    string title;
    string author;
    string id;
    string borrower;
    string dueDate;
    time_t rawDueDate;
    bool available;
    BookNode *next, *prev;

    BookNode(string t, string a, string i)
        : title(t), author(a), id(i), borrower(""), dueDate("-"),
        rawDueDate(0), available(true), next(nullptr), prev(nullptr) {}
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showDashboard();
    void refreshTable();
    void updateSmallTable();
    void on_generatecode_clicked();
    void on_addBook_clicked();
    void on_deleteabook_clicked();
    void on_deleteallsamebooks_clicked();
    void on_assignbookbutton_clicked();
    void on_returnbookb_clicked();
    void on_SearchPushButton_clicked();
    void on_goto_addbookpage_clicked();
    void on_goto_viewpage_clicked();
    void on_assignreturnpage_clicked();
    void on_deletepagenavigate_clicked();
    void on_mainlogo_clicked();
    void on_aExit_clicked();

private:
    Ui::MainWindow *ui;

    BookNode* head = nullptr;
    BookNode* tail = nullptr;

    string formatDate(time_t r);
    int calculateFine(time_t d);
};

#endif
