/********************************************************************************
** Form generated from reading UI file 'loggui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGGUI_H
#define UI_LOGGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogGui
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_log;
    QWidget *page;
    QLineEdit *lineEdit_numOfAttempts;
    QLineEdit *lineEdit_reaction;
    QLabel *label_name;
    QLabel *label_age;
    QPushButton *pushButton_enter;
    QLabel *label_committed;
    QLabel *label_date;
    QLineEdit *lineEdit_name;
    QLabel *label_reaction;
    QLabel *label_phoneNumber;
    QLineEdit *lineEdit_methodOfContact;
    QLabel *label_numOfAttempts;
    QLineEdit *lineEdit_committed;
    QLineEdit *lineEdit_phoneNumber;
    QLineEdit *lineEdit_age;
    QLineEdit *lineEdit_date;
    QLabel *label_methodOfContact;
    QWidget *page_2;

    void setupUi(QWidget *LogGui)
    {
        if (LogGui->objectName().isEmpty())
            LogGui->setObjectName(QString::fromUtf8("LogGui"));
        LogGui->resize(648, 580);
        gridLayout = new QGridLayout(LogGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget_log = new QStackedWidget(LogGui);
        stackedWidget_log->setObjectName(QString::fromUtf8("stackedWidget_log"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lineEdit_numOfAttempts = new QLineEdit(page);
        lineEdit_numOfAttempts->setObjectName(QString::fromUtf8("lineEdit_numOfAttempts"));
        lineEdit_numOfAttempts->setGeometry(QRect(270, 210, 113, 21));
        lineEdit_reaction = new QLineEdit(page);
        lineEdit_reaction->setObjectName(QString::fromUtf8("lineEdit_reaction"));
        lineEdit_reaction->setGeometry(QRect(270, 320, 113, 21));
        label_name = new QLabel(page);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(220, 30, 41, 16));
        label_age = new QLabel(page);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(100, 90, 161, 20));
        pushButton_enter = new QPushButton(page);
        pushButton_enter->setObjectName(QString::fromUtf8("pushButton_enter"));
        pushButton_enter->setGeometry(QRect(280, 480, 100, 32));
        pushButton_enter->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"\n"
""));
        label_committed = new QLabel(page);
        label_committed->setObjectName(QString::fromUtf8("label_committed"));
        label_committed->setGeometry(QRect(20, 420, 241, 20));
        label_date = new QLabel(page);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        label_date->setGeometry(QRect(140, 370, 121, 20));
        lineEdit_name = new QLineEdit(page);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(270, 30, 113, 21));
        label_reaction = new QLabel(page);
        label_reaction->setObjectName(QString::fromUtf8("label_reaction"));
        label_reaction->setGeometry(QRect(100, 320, 161, 20));
        label_phoneNumber = new QLabel(page);
        label_phoneNumber->setObjectName(QString::fromUtf8("label_phoneNumber"));
        label_phoneNumber->setGeometry(QRect(70, 150, 201, 20));
        lineEdit_methodOfContact = new QLineEdit(page);
        lineEdit_methodOfContact->setObjectName(QString::fromUtf8("lineEdit_methodOfContact"));
        lineEdit_methodOfContact->setGeometry(QRect(270, 260, 113, 21));
        label_numOfAttempts = new QLabel(page);
        label_numOfAttempts->setObjectName(QString::fromUtf8("label_numOfAttempts"));
        label_numOfAttempts->setGeometry(QRect(80, 210, 181, 20));
        lineEdit_committed = new QLineEdit(page);
        lineEdit_committed->setObjectName(QString::fromUtf8("lineEdit_committed"));
        lineEdit_committed->setGeometry(QRect(270, 420, 113, 21));
        lineEdit_phoneNumber = new QLineEdit(page);
        lineEdit_phoneNumber->setObjectName(QString::fromUtf8("lineEdit_phoneNumber"));
        lineEdit_phoneNumber->setGeometry(QRect(270, 150, 113, 21));
        lineEdit_age = new QLineEdit(page);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(270, 90, 113, 21));
        lineEdit_date = new QLineEdit(page);
        lineEdit_date->setObjectName(QString::fromUtf8("lineEdit_date"));
        lineEdit_date->setGeometry(QRect(270, 370, 113, 21));
        label_methodOfContact = new QLabel(page);
        label_methodOfContact->setObjectName(QString::fromUtf8("label_methodOfContact"));
        label_methodOfContact->setGeometry(QRect(20, 260, 241, 20));
        stackedWidget_log->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget_log->addWidget(page_2);

        gridLayout->addWidget(stackedWidget_log, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_name, lineEdit_age);
        QWidget::setTabOrder(lineEdit_age, lineEdit_phoneNumber);
        QWidget::setTabOrder(lineEdit_phoneNumber, lineEdit_numOfAttempts);
        QWidget::setTabOrder(lineEdit_numOfAttempts, lineEdit_methodOfContact);
        QWidget::setTabOrder(lineEdit_methodOfContact, lineEdit_reaction);
        QWidget::setTabOrder(lineEdit_reaction, lineEdit_date);
        QWidget::setTabOrder(lineEdit_date, lineEdit_committed);
        QWidget::setTabOrder(lineEdit_committed, pushButton_enter);

        retranslateUi(LogGui);

        stackedWidget_log->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogGui);
    } // setupUi

    void retranslateUi(QWidget *LogGui)
    {
        LogGui->setWindowTitle(QCoreApplication::translate("LogGui", "Form", nullptr));
        label_name->setText(QCoreApplication::translate("LogGui", "Name", nullptr));
        label_age->setText(QCoreApplication::translate("LogGui", "Age (Must be 18 or older)", nullptr));
        pushButton_enter->setText(QCoreApplication::translate("LogGui", "Enter", nullptr));
        label_committed->setText(QCoreApplication::translate("LogGui", "Commit to volunteering? (true or false)", nullptr));
        label_date->setText(QCoreApplication::translate("LogGui", "Date (mm/dd/yyyy)", nullptr));
        label_reaction->setText(QCoreApplication::translate("LogGui", "Reaction to the interaction", nullptr));
        label_phoneNumber->setText(QCoreApplication::translate("LogGui", "Phone Number (XXXXXXXXXX)", nullptr));
        label_numOfAttempts->setText(QCoreApplication::translate("LogGui", "Number of outreach attempts", nullptr));
        label_methodOfContact->setText(QCoreApplication::translate("LogGui", "Method of contact (eg. text, phone call)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogGui: public Ui_LogGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGGUI_H
