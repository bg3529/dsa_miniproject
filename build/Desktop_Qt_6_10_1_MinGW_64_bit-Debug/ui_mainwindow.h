/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mainlogo;
    QSpacerItem *horizontalSpacer;
    QPushButton *goto_addbookpage;
    QPushButton *goto_viewpage;
    QPushButton *assignreturnpage;
    QPushButton *deletepagenavigate;
    QPushButton *aExit;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_16;
    QSpacerItem *verticalSpacer_10;
    QFrame *cardframe;
    QHBoxLayout *horizontalLayout_12;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_2;
    QLabel *label_22;
    QFrame *frame_16;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_16;
    QLabel *label_23;
    QFrame *frame_20;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_21;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_18;
    QWidget *ViewBookS;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *frame;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *SearchlineEdit;
    QPushButton *SearchPushButton;
    QTableWidget *bookTable;
    QWidget *Updatebooks;
    QVBoxLayout *verticalLayout_5;
    QWidget *ReturnBooks;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_10;
    QFrame *assignbookpart;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_17;
    QSpacerItem *verticalSpacer_8;
    QFrame *frame_12;
    QFormLayout *formLayout_4;
    QLabel *label_30;
    QLineEdit *RA_bookid;
    QLabel *label_9;
    QLineEdit *RA_studentid;
    QLabel *label_19;
    QLabel *label_20;
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *assignbookbutton;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_12;
    QFrame *returnbookpart;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_9;
    QFrame *frame_14;
    QFormLayout *formLayout_6;
    QLabel *label_31;
    QLineEdit *RA_bookid_2;
    QSpacerItem *verticalSpacer_7;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *returnbookb;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *searchbutton;
    QTableWidget *showbookidtable;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_6;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_18;
    QFormLayout *formLayout_5;
    QLabel *label_35;
    QLineEdit *titleInput;
    QLabel *label_36;
    QLineEdit *authorInput;
    QLabel *label_12;
    QLineEdit *locationcode;
    QLabel *label_13;
    QLineEdit *quantityInput;
    QSpacerItem *verticalSpacer_6;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_6;
    QPushButton *addBook;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_40;
    QComboBox *comboBox_4;
    QLabel *label_41;
    QComboBox *comboBox_5;
    QLabel *label_8;
    QComboBox *comboBox;
    QLabel *label_10;
    QLineEdit *bookcode;
    QSpacerItem *verticalSpacer_2;
    QPushButton *generatecode;
    QWidget *deletebookpage;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_24;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *del_bookid_2;
    QSpacerItem *verticalSpacer;
    QPushButton *deleteabook;
    QSpacerItem *verticalSpacer_17;
    QSpacerItem *verticalSpacer_15;
    QSpacerItem *verticalSpacer_16;
    QFrame *deletewholecopiespart;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *del_bookcode;
    QSpacerItem *verticalSpacer_5;
    QPushButton *deleteallsamebooks;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(993, 717);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName("verticalLayout_11");
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("FreeMono")});
        font.setBold(true);
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(160, 182, 255);\n"
"\n"
"QPushButton{\n"
"background-color:rgb(160, 255, 215)\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_3);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, 10, 10, 10);
        mainlogo = new QPushButton(frame_3);
        mainlogo->setObjectName("mainlogo");
        mainlogo->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";\n"
"background-color: rgb(179, 255, 175);\n"
"background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(mainlogo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        goto_addbookpage = new QPushButton(frame_3);
        goto_addbookpage->setObjectName("goto_addbookpage");
        goto_addbookpage->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 10pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(goto_addbookpage);

        goto_viewpage = new QPushButton(frame_3);
        goto_viewpage->setObjectName("goto_viewpage");
        goto_viewpage->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 10pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(goto_viewpage);

        assignreturnpage = new QPushButton(frame_3);
        assignreturnpage->setObjectName("assignreturnpage");
        assignreturnpage->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 10pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(assignreturnpage);

        deletepagenavigate = new QPushButton(frame_3);
        deletepagenavigate->setObjectName("deletepagenavigate");
        deletepagenavigate->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 10pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(deletepagenavigate);

        aExit = new QPushButton(frame_3);
        aExit->setObjectName("aExit");
        aExit->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 199, 197);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 10pt \"Segoe UI\";"));

        horizontalLayout_5->addWidget(aExit);


        verticalLayout_11->addWidget(frame_3);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 255, 251);\n"
"color: rgb(0, 0, 0);"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_16 = new QVBoxLayout(page_2);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_10);

        cardframe = new QFrame(page_2);
        cardframe->setObjectName("cardframe");
        cardframe->setStyleSheet(QString::fromUtf8("QFrame#frame_22 {\n"
"    background-color: #c6fffb;\n"
"    border: 1px solid #008b8b;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QLabel#label_25 {\n"
"    color: #000000;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 32px;\n"
"    font-weight: bold;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QFrame#cardframe {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"}\n"
"\n"
"QFrame#frame_8, QFrame#frame_16, QFrame#frame_20 {\n"
"    background-color: #e0ffff;\n"
"    border: 1px solid #008b8b;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QLabel#label_2, QLabel#label_16, QLabel#label_21 {\n"
"    background-color: #80b9ff;\n"
"    color: #000000;\n"
"    font-family: \"Segoe UI\";\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    padding-left: 10px;\n"
"    border-bottom: 1px solid #008b8b;\n"
"}\n"
"\n"
"QLabel#label_22, QLabel#label_23, QLabel#label_24 {\n"
"    font-size: 26px;\n"
"    font-weight: bold;\n"
"    color: #333333;\n"
"    background: transparent;\n"
"    q"
                        "property-alignment: 'AlignCenter';\n"
"}"));
        cardframe->setFrameShape(QFrame::Shape::StyledPanel);
        cardframe->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_12 = new QHBoxLayout(cardframe);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        frame_8 = new QFrame(cardframe);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_8);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_2 = new QLabel(frame_8);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 0);\n"
"background-color: rgb(128, 185, 255);"));

        verticalLayout_18->addWidget(label_2);

        label_22 = new QLabel(frame_8);
        label_22->setObjectName("label_22");

        verticalLayout_18->addWidget(label_22);


        horizontalLayout_12->addWidget(frame_8);

        frame_16 = new QFrame(cardframe);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::Shape::StyledPanel);
        frame_16->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_16);
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_16 = new QLabel(frame_16);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(16777215, 50));

        verticalLayout_17->addWidget(label_16);

        label_23 = new QLabel(frame_16);
        label_23->setObjectName("label_23");

        verticalLayout_17->addWidget(label_23);


        horizontalLayout_12->addWidget(frame_16);

        frame_20 = new QFrame(cardframe);
        frame_20->setObjectName("frame_20");
        frame_20->setFrameShape(QFrame::Shape::StyledPanel);
        frame_20->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_19 = new QVBoxLayout(frame_20);
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_21 = new QLabel(frame_20);
        label_21->setObjectName("label_21");
        label_21->setMaximumSize(QSize(16777215, 50));

        verticalLayout_19->addWidget(label_21);

        label_24 = new QLabel(frame_20);
        label_24->setObjectName("label_24");

        verticalLayout_19->addWidget(label_24);


        horizontalLayout_12->addWidget(frame_20);


        verticalLayout_16->addWidget(cardframe);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_18);

        stackedWidget->addWidget(page_2);
        ViewBookS = new QWidget();
        ViewBookS->setObjectName("ViewBookS");
        verticalLayout_2 = new QVBoxLayout(ViewBookS);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(ViewBookS);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FreeMono")});
        font1.setPointSize(30);
        font1.setBold(true);
        label->setFont(font1);

        verticalLayout_2->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        frame = new QFrame(ViewBookS);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_12 = new QVBoxLayout(frame);
        verticalLayout_12->setObjectName("verticalLayout_12");
        frame_21 = new QFrame(frame);
        frame_21->setObjectName("frame_21");
        frame_21->setMinimumSize(QSize(0, 50));
        frame_21->setFrameShape(QFrame::Shape::StyledPanel);
        frame_21->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_21);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        SearchlineEdit = new QLineEdit(frame_21);
        SearchlineEdit->setObjectName("SearchlineEdit");

        horizontalLayout_7->addWidget(SearchlineEdit);

        SearchPushButton = new QPushButton(frame_21);
        SearchPushButton->setObjectName("SearchPushButton");

        horizontalLayout_7->addWidget(SearchPushButton);


        verticalLayout_12->addWidget(frame_21);

        bookTable = new QTableWidget(frame);
        if (bookTable->columnCount() < 7)
            bookTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        bookTable->setObjectName("bookTable");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookTable->sizePolicy().hasHeightForWidth());
        bookTable->setSizePolicy(sizePolicy2);
        bookTable->setMinimumSize(QSize(590, 0));

        verticalLayout_12->addWidget(bookTable);


        verticalLayout_2->addWidget(frame);

        stackedWidget->addWidget(ViewBookS);
        Updatebooks = new QWidget();
        Updatebooks->setObjectName("Updatebooks");
        verticalLayout_5 = new QVBoxLayout(Updatebooks);
        verticalLayout_5->setObjectName("verticalLayout_5");
        stackedWidget->addWidget(Updatebooks);
        ReturnBooks = new QWidget();
        ReturnBooks->setObjectName("ReturnBooks");
        verticalLayout_14 = new QVBoxLayout(ReturnBooks);
        verticalLayout_14->setObjectName("verticalLayout_14");
        frame_11 = new QFrame(ReturnBooks);
        frame_11->setObjectName("frame_11");
        sizePolicy1.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy1);
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        assignbookpart = new QFrame(frame_11);
        assignbookpart->setObjectName("assignbookpart");
        assignbookpart->setStyleSheet(QString::fromUtf8(".QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        assignbookpart->setFrameShape(QFrame::Shape::StyledPanel);
        assignbookpart->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(assignbookpart);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_17 = new QLabel(assignbookpart);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"background-color: rgb(226, 250, 255);"));

        verticalLayout_3->addWidget(label_17);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_8);

        frame_12 = new QFrame(assignbookpart);
        frame_12->setObjectName("frame_12");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("FreeMono")});
        font2.setPointSize(15);
        font2.setBold(true);
        frame_12->setFont(font2);
        frame_12->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        formLayout_4 = new QFormLayout(frame_12);
        formLayout_4->setObjectName("formLayout_4");
        label_30 = new QLabel(frame_12);
        label_30->setObjectName("label_30");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::LabelRole, label_30);

        RA_bookid = new QLineEdit(frame_12);
        RA_bookid->setObjectName("RA_bookid");

        formLayout_4->setWidget(0, QFormLayout::ItemRole::FieldRole, RA_bookid);

        label_9 = new QLabel(frame_12);
        label_9->setObjectName("label_9");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::LabelRole, label_9);

        RA_studentid = new QLineEdit(frame_12);
        RA_studentid->setObjectName("RA_studentid");

        formLayout_4->setWidget(1, QFormLayout::ItemRole::FieldRole, RA_studentid);

        label_19 = new QLabel(frame_12);
        label_19->setObjectName("label_19");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::LabelRole, label_19);

        label_20 = new QLabel(frame_12);
        label_20->setObjectName("label_20");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::LabelRole, label_20);

        dateTimeEdit = new QDateTimeEdit(frame_12);
        dateTimeEdit->setObjectName("dateTimeEdit");

        formLayout_4->setWidget(2, QFormLayout::ItemRole::FieldRole, dateTimeEdit);

        dateTimeEdit_2 = new QDateTimeEdit(frame_12);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");

        formLayout_4->setWidget(3, QFormLayout::ItemRole::FieldRole, dateTimeEdit_2);


        verticalLayout_3->addWidget(frame_12);

        frame_13 = new QFrame(assignbookpart);
        frame_13->setObjectName("frame_13");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("FreeMono")});
        font3.setPointSize(20);
        font3.setBold(true);
        frame_13->setFont(font3);
        frame_13->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_13);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        assignbookbutton = new QPushButton(frame_13);
        assignbookbutton->setObjectName("assignbookbutton");

        horizontalLayout_4->addWidget(assignbookbutton);


        verticalLayout_3->addWidget(frame_13);


        horizontalLayout_10->addWidget(assignbookpart);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_14);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_13);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_11);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_10->addItem(verticalSpacer_12);

        returnbookpart = new QFrame(frame_11);
        returnbookpart->setObjectName("returnbookpart");
        returnbookpart->setStyleSheet(QString::fromUtf8(".QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        returnbookpart->setFrameShape(QFrame::Shape::StyledPanel);
        returnbookpart->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(returnbookpart);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_18 = new QLabel(returnbookpart);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Segoe UI\";\n"
"background-color: rgb(226, 250, 255);"));

        verticalLayout_8->addWidget(label_18);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_9);

        frame_14 = new QFrame(returnbookpart);
        frame_14->setObjectName("frame_14");
        sizePolicy3.setHeightForWidth(frame_14->sizePolicy().hasHeightForWidth());
        frame_14->setSizePolicy(sizePolicy3);
        frame_14->setFont(font2);
        frame_14->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_14->setFrameShape(QFrame::Shape::StyledPanel);
        frame_14->setFrameShadow(QFrame::Shadow::Raised);
        formLayout_6 = new QFormLayout(frame_14);
        formLayout_6->setObjectName("formLayout_6");
        label_31 = new QLabel(frame_14);
        label_31->setObjectName("label_31");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::LabelRole, label_31);

        RA_bookid_2 = new QLineEdit(frame_14);
        RA_bookid_2->setObjectName("RA_bookid_2");

        formLayout_6->setWidget(0, QFormLayout::ItemRole::FieldRole, RA_bookid_2);


        verticalLayout_8->addWidget(frame_14);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        frame_15 = new QFrame(returnbookpart);
        frame_15->setObjectName("frame_15");
        frame_15->setFont(font3);
        frame_15->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_15->setFrameShape(QFrame::Shape::StyledPanel);
        frame_15->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_15);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        returnbookb = new QPushButton(frame_15);
        returnbookb->setObjectName("returnbookb");

        horizontalLayout_9->addWidget(returnbookb);


        verticalLayout_8->addWidget(frame_15);


        horizontalLayout_10->addWidget(returnbookpart);


        verticalLayout_14->addWidget(frame_11);

        frame_10 = new QFrame(ReturnBooks);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_10);
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(frame_10);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 600 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(label_4);

        lineEdit = new QLineEdit(frame_10);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        searchbutton = new QPushButton(frame_10);
        searchbutton->setObjectName("searchbutton");

        horizontalLayout->addWidget(searchbutton);


        verticalLayout_14->addWidget(frame_10);

        showbookidtable = new QTableWidget(ReturnBooks);
        showbookidtable->setObjectName("showbookidtable");

        verticalLayout_14->addWidget(showbookidtable);

        stackedWidget->addWidget(ReturnBooks);
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("FreeMono")});
        font4.setPointSize(40);
        font4.setBold(true);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(76, 255, 189);"));

        verticalLayout_10->addWidget(label_6, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        frame_17 = new QFrame(page);
        frame_17->setObjectName("frame_17");
        sizePolicy1.setHeightForWidth(frame_17->sizePolicy().hasHeightForWidth());
        frame_17->setSizePolicy(sizePolicy1);
        frame_17->setStyleSheet(QString::fromUtf8(""));
        frame_17->setFrameShape(QFrame::Shape::StyledPanel);
        frame_17->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_17);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_4 = new QFrame(frame_17);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame_18 = new QFrame(frame_4);
        frame_18->setObjectName("frame_18");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_18->sizePolicy().hasHeightForWidth());
        frame_18->setSizePolicy(sizePolicy4);
        frame_18->setFont(font2);
        frame_18->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_18->setFrameShape(QFrame::Shape::StyledPanel);
        frame_18->setFrameShadow(QFrame::Shadow::Raised);
        formLayout_5 = new QFormLayout(frame_18);
        formLayout_5->setObjectName("formLayout_5");
        label_35 = new QLabel(frame_18);
        label_35->setObjectName("label_35");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::LabelRole, label_35);

        titleInput = new QLineEdit(frame_18);
        titleInput->setObjectName("titleInput");

        formLayout_5->setWidget(0, QFormLayout::ItemRole::FieldRole, titleInput);

        label_36 = new QLabel(frame_18);
        label_36->setObjectName("label_36");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::LabelRole, label_36);

        authorInput = new QLineEdit(frame_18);
        authorInput->setObjectName("authorInput");

        formLayout_5->setWidget(1, QFormLayout::ItemRole::FieldRole, authorInput);

        label_12 = new QLabel(frame_18);
        label_12->setObjectName("label_12");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::LabelRole, label_12);

        locationcode = new QLineEdit(frame_18);
        locationcode->setObjectName("locationcode");

        formLayout_5->setWidget(2, QFormLayout::ItemRole::FieldRole, locationcode);

        label_13 = new QLabel(frame_18);
        label_13->setObjectName("label_13");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::LabelRole, label_13);

        quantityInput = new QLineEdit(frame_18);
        quantityInput->setObjectName("quantityInput");

        formLayout_5->setWidget(3, QFormLayout::ItemRole::FieldRole, quantityInput);


        verticalLayout_4->addWidget(frame_18);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        frame_19 = new QFrame(frame_4);
        frame_19->setObjectName("frame_19");
        frame_19->setFont(font3);
        frame_19->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        frame_19->setFrameShape(QFrame::Shape::StyledPanel);
        frame_19->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_19);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_6 = new QPushButton(frame_19);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton_6, 0, Qt::AlignmentFlag::AlignHCenter);

        addBook = new QPushButton(frame_19);
        addBook->setObjectName("addBook");
        addBook->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:black;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_6->addWidget(addBook, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_4->addWidget(frame_19);


        horizontalLayout_2->addWidget(frame_4);

        frame_7 = new QFrame(frame_17);
        frame_7->setObjectName("frame_7");
        frame_7->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_5 = new QLabel(frame_7);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));

        verticalLayout_6->addWidget(label_5);

        textBrowser = new QTextBrowser(frame_7);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_6->addWidget(textBrowser);

        widget_8 = new QWidget(frame_7);
        widget_8->setObjectName("widget_8");
        widget_8->setStyleSheet(QString::fromUtf8("QFrame {\n"
"   \n"
"    border:none;\n"
"    border-radius: 5px;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(widget_8);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_40 = new QLabel(widget_8);
        label_40->setObjectName("label_40");

        verticalLayout_7->addWidget(label_40);

        comboBox_4 = new QComboBox(widget_8);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        verticalLayout_7->addWidget(comboBox_4);

        label_41 = new QLabel(widget_8);
        label_41->setObjectName("label_41");

        verticalLayout_7->addWidget(label_41);

        comboBox_5 = new QComboBox(widget_8);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName("comboBox_5");

        verticalLayout_7->addWidget(comboBox_5);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName("label_8");

        verticalLayout_7->addWidget(label_8);

        comboBox = new QComboBox(widget_8);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout_7->addWidget(comboBox);

        label_10 = new QLabel(widget_8);
        label_10->setObjectName("label_10");

        verticalLayout_7->addWidget(label_10);

        bookcode = new QLineEdit(widget_8);
        bookcode->setObjectName("bookcode");

        verticalLayout_7->addWidget(bookcode);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        generatecode = new QPushButton(widget_8);
        generatecode->setObjectName("generatecode");

        verticalLayout_7->addWidget(generatecode);


        verticalLayout_6->addWidget(widget_8);


        horizontalLayout_2->addWidget(frame_7);


        verticalLayout_10->addWidget(frame_17);

        stackedWidget->addWidget(page);
        deletebookpage = new QWidget();
        deletebookpage->setObjectName("deletebookpage");
        verticalLayout_9 = new QVBoxLayout(deletebookpage);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_11 = new QLabel(deletebookpage);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 125, 153);\n"
"font: 600 24pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_9->addWidget(label_11);

        frame_9 = new QFrame(deletebookpage);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_9);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame_24 = new QFrame(frame_9);
        frame_24->setObjectName("frame_24");
        sizePolicy.setHeightForWidth(frame_24->sizePolicy().hasHeightForWidth());
        frame_24->setSizePolicy(sizePolicy);
        frame_24->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        frame_24->setFrameShape(QFrame::Shape::StyledPanel);
        frame_24->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_24);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_15 = new QLabel(frame_24);
        label_15->setObjectName("label_15");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI")});
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("font: 600 8pt \"Segoe UI\";\n"
"font: 20pt \"Segoe UI\";"));

        verticalLayout_15->addWidget(label_15);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_3);

        del_bookid_2 = new QLineEdit(frame_24);
        del_bookid_2->setObjectName("del_bookid_2");

        verticalLayout_15->addWidget(del_bookid_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_15->addItem(verticalSpacer);

        deleteabook = new QPushButton(frame_24);
        deleteabook->setObjectName("deleteabook");
        deleteabook->setStyleSheet(QString::fromUtf8("color: rgb(255, 143, 186);\n"
"background-color: rgb(255, 28, 43);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 16pt \"Segoe UI\";"));

        verticalLayout_15->addWidget(deleteabook);


        horizontalLayout_3->addWidget(frame_24);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_17);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_15);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_16);

        deletewholecopiespart = new QFrame(frame_9);
        deletewholecopiespart->setObjectName("deletewholecopiespart");
        sizePolicy.setHeightForWidth(deletewholecopiespart->sizePolicy().hasHeightForWidth());
        deletewholecopiespart->setSizePolicy(sizePolicy);
        deletewholecopiespart->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    border: 2px solid;\n"
"    border-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"                                  stop:0 #7289da, stop:1 #424549);\n"
"    border-radius: 5px;\n"
"}"));
        deletewholecopiespart->setFrameShape(QFrame::Shape::StyledPanel);
        deletewholecopiespart->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(deletewholecopiespart);
        verticalLayout->setObjectName("verticalLayout");
        label_14 = new QLabel(deletewholecopiespart);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 14pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_14);

        label_7 = new QLabel(deletewholecopiespart);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 74, 83);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(label_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        del_bookcode = new QLineEdit(deletewholecopiespart);
        del_bookcode->setObjectName("del_bookcode");

        verticalLayout->addWidget(del_bookcode);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        deleteallsamebooks = new QPushButton(deletewholecopiespart);
        deleteallsamebooks->setObjectName("deleteallsamebooks");
        deleteallsamebooks->setStyleSheet(QString::fromUtf8("color: rgb(255, 143, 186);\n"
"background-color: rgb(255, 15, 19);\n"
"color: rgb(0, 0, 0);\n"
"font: 600 16pt \"Segoe UI\";"));

        verticalLayout->addWidget(deleteallsamebooks);


        horizontalLayout_3->addWidget(deletewholecopiespart);


        verticalLayout_9->addWidget(frame_9);

        stackedWidget->addWidget(deletebookpage);

        verticalLayout_11->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        mainlogo->setText(QCoreApplication::translate("MainWindow", "Library", nullptr));
        goto_addbookpage->setText(QCoreApplication::translate("MainWindow", "Add Books", nullptr));
        goto_viewpage->setText(QCoreApplication::translate("MainWindow", "View-Books", nullptr));
        assignreturnpage->setText(QCoreApplication::translate("MainWindow", "Assign/Return Book", nullptr));
        deletepagenavigate->setText(QCoreApplication::translate("MainWindow", "Delete Book", nullptr));
        aExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Total Books", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Total Borrowed", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Total Available", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "View Books Lists", nullptr));
        SearchlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        SearchPushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bookTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "BookID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bookTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Available", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = bookTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Date Borrowed", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = bookTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Deadline", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = bookTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "FIne", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Assign a Book", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Book ID :", nullptr));
        RA_bookid->setPlaceholderText(QCoreApplication::translate("MainWindow", "1001", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ID-CARD :", nullptr));
        RA_studentid->setPlaceholderText(QCoreApplication::translate("MainWindow", "CE-2024-58", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Borrowed Date", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Due Date", nullptr));
        assignbookbutton->setText(QCoreApplication::translate("MainWindow", "Assign", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Return a Book", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Book ID :", nullptr));
        RA_bookid_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "1001", nullptr));
        returnbookb->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Search By Book Id", nullptr));
        searchbutton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Add Books", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "Title :", nullptr));
        titleInput->setText(QString());
        titleInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Atomic Habits", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Author:", nullptr));
        authorInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "James Clear", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Location Code:", nullptr));
        locationcode->setPlaceholderText(QCoreApplication::translate("MainWindow", "F1-S11-R5- MATH90-001", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Quantity :", nullptr));
#if QT_CONFIG(whatsthis)
        quantityInput->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>In each single row quantity cant be greater than 50</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        quantityInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "10", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        addBook->setText(QCoreApplication::translate("MainWindow", "Add Books", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Remember :</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The location Code should be in given format</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">For example: <span style=\" font-weight:700;\">F1-S11-R5- MATH90-001</span></p>\n"
"<p styl"
                        "e=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The bookcode is the code for all copies of a book .</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "Floor: ", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "Ground FLoor", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "First FLoor", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "Second Floor", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "Third Floor", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("MainWindow", "Fourth Floor", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("MainWindow", "Fifth Floor", nullptr));

        label_41->setText(QCoreApplication::translate("MainWindow", "Shelf No:", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "S1", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "S2", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "S3", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "S4", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("MainWindow", "S5", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("MainWindow", "S6", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("MainWindow", "S7", nullptr));
        comboBox_5->setItemText(7, QCoreApplication::translate("MainWindow", "S8", nullptr));
        comboBox_5->setItemText(8, QCoreApplication::translate("MainWindow", "S9", nullptr));
        comboBox_5->setItemText(9, QCoreApplication::translate("MainWindow", "S10", nullptr));
        comboBox_5->setItemText(10, QCoreApplication::translate("MainWindow", "S11", nullptr));
        comboBox_5->setItemText(11, QCoreApplication::translate("MainWindow", "S12", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Row No:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "R1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "R2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "R3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "R4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "R5", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "R6", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "R7", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "R8", nullptr));

        label_10->setText(QCoreApplication::translate("MainWindow", "Book Code", nullptr));
        bookcode->setText(QString());
        bookcode->setPlaceholderText(QCoreApplication::translate("MainWindow", "BookCode Eg:Math22", nullptr));
        generatecode->setText(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Danger Zone", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Delete a Single Book", nullptr));
        del_bookid_2->setText(QString());
        del_bookid_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Book ID", nullptr));
        deleteabook->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Delete whole copies of a book", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter Book Code Only", nullptr));
        del_bookcode->setText(QString());
        del_bookcode->setPlaceholderText(QCoreApplication::translate("MainWindow", "Book Code", nullptr));
        deleteallsamebooks->setText(QCoreApplication::translate("MainWindow", " Delete all Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
