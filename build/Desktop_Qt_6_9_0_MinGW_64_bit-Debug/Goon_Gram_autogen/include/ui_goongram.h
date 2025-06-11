/********************************************************************************
** Form generated from reading UI file 'goongram.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOONGRAM_H
#define UI_GOONGRAM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GOONGRAM
{
public:
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QLabel *piclable;
    QLabel *label_2;
    QPushButton *pushButton_7;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_6;
    QTextBrowser *textBrowser_5;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_3;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QTextBrowser *textBrowser_4;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QPushButton *pushButton_10;
    QTextBrowser *textBrowser_6;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_9;
    QTextBrowser *textBrowser_7;
    QWidget *tab_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLabel *label_12;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuLog_Out;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GOONGRAM)
    {
        if (GOONGRAM->objectName().isEmpty())
            GOONGRAM->setObjectName("GOONGRAM");
        GOONGRAM->resize(1061, 761);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GOONGRAM->sizePolicy().hasHeightForWidth());
        GOONGRAM->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        GOONGRAM->setFont(font);
        actionLog_Out = new QAction(GOONGRAM);
        actionLog_Out->setObjectName("actionLog_Out");
        centralwidget = new QWidget(GOONGRAM);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setUnderline(false);
        tabWidget->setFont(font1);
        tabWidget->setTabPosition(QTabWidget::TabPosition::South);
        tabWidget->setTabShape(QTabWidget::TabShape::Triangular);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(tab);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setUnderline(false);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setUnderline(false);
        lineEdit->setFont(font3);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(lineEdit, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setFont(font3);

        horizontalLayout_2->addWidget(pushButton_2);

        piclable = new QLabel(tab);
        piclable->setObjectName("piclable");
        piclable->setFont(font1);
        piclable->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(piclable);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Franklin Gothic")});
        font4.setPointSize(39);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(true);
        label_2->setFont(font4);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName("pushButton_7");
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setUnderline(false);
        pushButton_7->setFont(font5);

        gridLayout->addWidget(pushButton_7, 9, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setUnderline(false);
        pushButton_4->setFont(font6);

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setFont(font6);

        verticalLayout_2->addWidget(pushButton_8);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_3 = new QLabel(tab_3);
        label_3->setObjectName("label_3");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Cascadia Code")});
        font7.setPointSize(40);
        font7.setBold(true);
        font7.setUnderline(true);
        label_3->setFont(font7);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_3);

        textBrowser = new QTextBrowser(tab_3);
        textBrowser->setObjectName("textBrowser");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setFont(font1);

        verticalLayout_7->addWidget(textBrowser);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(tab_4);
        label_4->setObjectName("label_4");
        QFont font8;
        font8.setPointSize(22);
        font8.setBold(true);
        font8.setUnderline(true);
        label_4->setFont(font8);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        lineEdit_2 = new QLineEdit(tab_4);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font9;
        font9.setPointSize(18);
        font9.setBold(true);
        font9.setUnderline(false);
        lineEdit_2->setFont(font9);
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_2);

        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font1);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(tab_4);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font1);

        verticalLayout_3->addWidget(pushButton);

        textBrowser_2 = new QTextBrowser(tab_4);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setFont(font1);

        verticalLayout_3->addWidget(textBrowser_2);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_9 = new QLabel(tab_5);
        label_9->setObjectName("label_9");
        QFont font10;
        font10.setPointSize(24);
        font10.setBold(true);
        font10.setUnderline(true);
        label_9->setFont(font10);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_9);

        lineEdit_5 = new QLineEdit(tab_5);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setFont(font1);
        lineEdit_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_5);

        pushButton_6 = new QPushButton(tab_5);
        pushButton_6->setObjectName("pushButton_6");
        QFont font11;
        font11.setPointSize(15);
        font11.setBold(true);
        font11.setUnderline(false);
        pushButton_6->setFont(font11);

        verticalLayout_6->addWidget(pushButton_6);

        textBrowser_5 = new QTextBrowser(tab_5);
        textBrowser_5->setObjectName("textBrowser_5");
        textBrowser_5->setFont(font1);

        verticalLayout_6->addWidget(textBrowser_5);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_4 = new QVBoxLayout(tab_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_5 = new QLabel(tab_6);
        label_5->setObjectName("label_5");
        QFont font12;
        font12.setPointSize(37);
        font12.setBold(true);
        font12.setUnderline(true);
        label_5->setFont(font12);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        textBrowser_3 = new QTextBrowser(tab_6);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setFont(font1);

        verticalLayout_4->addWidget(textBrowser_3);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        verticalLayout_5 = new QVBoxLayout(tab_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(tab_7);
        label_6->setObjectName("label_6");
        label_6->setFont(font12);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(label_6);

        textBrowser_4 = new QTextBrowser(tab_7);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setFont(font1);

        verticalLayout_5->addWidget(textBrowser_4);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayout_8 = new QVBoxLayout(tab_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_7 = new QLabel(tab_8);
        label_7->setObjectName("label_7");
        label_7->setFont(font12);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        pushButton_10 = new QPushButton(tab_8);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_10);


        verticalLayout_8->addLayout(horizontalLayout_5);

        textBrowser_6 = new QTextBrowser(tab_8);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setFont(font1);

        verticalLayout_8->addWidget(textBrowser_6);

        tabWidget->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName("tab_9");
        verticalLayout_10 = new QVBoxLayout(tab_9);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_8 = new QLabel(tab_9);
        label_8->setObjectName("label_8");
        QFont font13;
        font13.setPointSize(30);
        font13.setBold(false);
        font13.setUnderline(true);
        label_8->setFont(font13);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(tab_9);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        lineEdit_3 = new QLineEdit(tab_9);
        lineEdit_3->setObjectName("lineEdit_3");
        QFont font14;
        font14.setPointSize(14);
        font14.setBold(false);
        font14.setUnderline(false);
        lineEdit_3->setFont(font14);

        verticalLayout_9->addWidget(lineEdit_3);

        pushButton_9 = new QPushButton(tab_9);
        pushButton_9->setObjectName("pushButton_9");
        QFont font15;
        font15.setPointSize(12);
        font15.setBold(false);
        font15.setUnderline(false);
        pushButton_9->setFont(font15);

        verticalLayout_9->addWidget(pushButton_9);


        horizontalLayout->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout);

        textBrowser_7 = new QTextBrowser(tab_9);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setFont(font11);

        verticalLayout_10->addWidget(textBrowser_7);

        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName("tab_10");
        verticalLayout_11 = new QVBoxLayout(tab_10);
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_11 = new QLabel(tab_10);
        label_11->setObjectName("label_11");
        QFont font16;
        font16.setPointSize(33);
        font16.setBold(true);
        font16.setUnderline(true);
        label_11->setFont(font16);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        label_12 = new QLabel(tab_10);
        label_12->setObjectName("label_12");
        label_12->setFont(font6);

        verticalLayout_11->addWidget(label_12);

        textEdit = new QTextEdit(tab_10);
        textEdit->setObjectName("textEdit");
        textEdit->setFont(font1);

        verticalLayout_11->addWidget(textEdit);

        pushButton_5 = new QPushButton(tab_10);
        pushButton_5->setObjectName("pushButton_5");
        QFont font17;
        font17.setPointSize(20);
        font17.setBold(true);
        font17.setUnderline(false);
        pushButton_5->setFont(font17);

        verticalLayout_11->addWidget(pushButton_5);

        tabWidget->addTab(tab_10, QString());

        verticalLayout->addWidget(tabWidget);

        GOONGRAM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GOONGRAM);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1061, 26));
        menuLog_Out = new QMenu(menubar);
        menuLog_Out->setObjectName("menuLog_Out");
        GOONGRAM->setMenuBar(menubar);
        statusbar = new QStatusBar(GOONGRAM);
        statusbar->setObjectName("statusbar");
        GOONGRAM->setStatusBar(statusbar);

        menubar->addAction(menuLog_Out->menuAction());
        menuLog_Out->addAction(actionLog_Out);

        retranslateUi(GOONGRAM);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GOONGRAM);
    } // setupUi

    void retranslateUi(QMainWindow *GOONGRAM)
    {
        GOONGRAM->setWindowTitle(QCoreApplication::translate("GOONGRAM", "GOONGRAM", nullptr));
        actionLog_Out->setText(QCoreApplication::translate("GOONGRAM", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("GOONGRAM", "ENTER YOUR ID NUMBER:", nullptr));
        lineEdit->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("GOONGRAM", "DARK/LIGHT", nullptr));
        piclable->setText(QString());
        label_2->setText(QCoreApplication::translate("GOONGRAM", "WELCOME TO GOON GRAM", nullptr));
        pushButton_7->setText(QCoreApplication::translate("GOONGRAM", "SET CURRENT USER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("GOONGRAM", "Login", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GOONGRAM", "LIKE A POST", nullptr));
        pushButton_8->setText(QCoreApplication::translate("GOONGRAM", "COMMENT ON A POST", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("GOONGRAM", "Functions", nullptr));
        label_3->setText(QCoreApplication::translate("GOONGRAM", "HOMEPAGE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("GOONGRAM", "Homepage", nullptr));
        label_4->setText(QCoreApplication::translate("GOONGRAM", "ENTER THE POST_ID", nullptr));
        pushButton_3->setText(QCoreApplication::translate("GOONGRAM", "LOAD LIKES ONLY", nullptr));
        pushButton->setText(QCoreApplication::translate("GOONGRAM", "LOAD WHOLE POST", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("GOONGRAM", "View Post", nullptr));
        label_9->setText(QCoreApplication::translate("GOONGRAM", "ENTER PAGE_ID", nullptr));
        pushButton_6->setText(QCoreApplication::translate("GOONGRAM", "LOAD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("GOONGRAM", "View Page", nullptr));
        label_5->setText(QCoreApplication::translate("GOONGRAM", "FRIEND LIST", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("GOONGRAM", "Friend List", nullptr));
        label_6->setText(QCoreApplication::translate("GOONGRAM", "LIKED PAGES", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("GOONGRAM", "Liked Pages", nullptr));
        label_7->setText(QCoreApplication::translate("GOONGRAM", "PROFILE (TIMELINE)", nullptr));
        pushButton_10->setText(QCoreApplication::translate("GOONGRAM", "BOOST A POST( RUN AN AD)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("GOONGRAM", "Profile", nullptr));
        label_8->setText(QCoreApplication::translate("GOONGRAM", "MEMORIES", nullptr));
        label_10->setText(QCoreApplication::translate("GOONGRAM", "ENTER POST ID TO UPLOAD IT AS A MEMORY", nullptr));
        pushButton_9->setText(QCoreApplication::translate("GOONGRAM", "UPLOAD", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("GOONGRAM", "Memories", nullptr));
        label_11->setText(QCoreApplication::translate("GOONGRAM", "Report a bug", nullptr));
        label_12->setText(QCoreApplication::translate("GOONGRAM", "Enter some brief information about the issue you're facing and submit, so that the developers can fix that.", nullptr));
        pushButton_5->setText(QCoreApplication::translate("GOONGRAM", "SUMBIT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("GOONGRAM", "Bug", nullptr));
        menuLog_Out->setTitle(QCoreApplication::translate("GOONGRAM", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GOONGRAM: public Ui_GOONGRAM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOONGRAM_H
