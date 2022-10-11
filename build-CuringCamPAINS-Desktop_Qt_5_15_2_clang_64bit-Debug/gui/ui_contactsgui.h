/********************************************************************************
** Form generated from reading UI file 'contactsgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTSGUI_H
#define UI_CONTACTSGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactsGui
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget_contacts;
    QWidget *page;
    QLineEdit *lineEdit_age;
    QLabel *label_age;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton_save;
    QLabel *label_lastName;
    QLineEdit *lineEdit_firstName;
    QPushButton *pushButton_uploadFile;
    QLineEdit *lineEdit_lastName;
    QLineEdit *lineEdit_phone;
    QLabel *label_email;
    QLineEdit *lineEdit_address;
    QLabel *label_address;
    QLabel *label_phone;
    QLabel *label_firstName;
    QLabel *label_phoneErrorMessage;
    QLabel *label_ageErrorMessage;
    QLabel *label;
    QWidget *page_2;

    void setupUi(QWidget *ContactsGui)
    {
        if (ContactsGui->objectName().isEmpty())
            ContactsGui->setObjectName(QString::fromUtf8("ContactsGui"));
        ContactsGui->resize(648, 580);
        horizontalLayout = new QHBoxLayout(ContactsGui);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget_contacts = new QStackedWidget(ContactsGui);
        stackedWidget_contacts->setObjectName(QString::fromUtf8("stackedWidget_contacts"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lineEdit_age = new QLineEdit(page);
        lineEdit_age->setObjectName(QString::fromUtf8("lineEdit_age"));
        lineEdit_age->setGeometry(QRect(300, 340, 131, 31));
        label_age = new QLabel(page);
        label_age->setObjectName(QString::fromUtf8("label_age"));
        label_age->setGeometry(QRect(180, 340, 101, 21));
        lineEdit_email = new QLineEdit(page);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(300, 240, 131, 31));
        pushButton_save = new QPushButton(page);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(200, 410, 221, 41));
        pushButton_save->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
""));
        label_lastName = new QLabel(page);
        label_lastName->setObjectName(QString::fromUtf8("label_lastName"));
        label_lastName->setGeometry(QRect(180, 140, 81, 21));
        lineEdit_firstName = new QLineEdit(page);
        lineEdit_firstName->setObjectName(QString::fromUtf8("lineEdit_firstName"));
        lineEdit_firstName->setGeometry(QRect(300, 80, 131, 31));
        pushButton_uploadFile = new QPushButton(page);
        pushButton_uploadFile->setObjectName(QString::fromUtf8("pushButton_uploadFile"));
        pushButton_uploadFile->setGeometry(QRect(200, 470, 221, 41));
        pushButton_uploadFile->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
""));
        lineEdit_lastName = new QLineEdit(page);
        lineEdit_lastName->setObjectName(QString::fromUtf8("lineEdit_lastName"));
        lineEdit_lastName->setGeometry(QRect(300, 130, 131, 31));
        lineEdit_phone = new QLineEdit(page);
        lineEdit_phone->setObjectName(QString::fromUtf8("lineEdit_phone"));
        lineEdit_phone->setGeometry(QRect(300, 180, 131, 31));
        label_email = new QLabel(page);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setGeometry(QRect(180, 240, 91, 21));
        lineEdit_address = new QLineEdit(page);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));
        lineEdit_address->setGeometry(QRect(300, 290, 131, 31));
        label_address = new QLabel(page);
        label_address->setObjectName(QString::fromUtf8("label_address"));
        label_address->setGeometry(QRect(180, 290, 111, 31));
        label_phone = new QLabel(page);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setGeometry(QRect(180, 180, 101, 21));
        label_firstName = new QLabel(page);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setGeometry(QRect(180, 80, 91, 31));
        label_phoneErrorMessage = new QLabel(page);
        label_phoneErrorMessage->setObjectName(QString::fromUtf8("label_phoneErrorMessage"));
        label_phoneErrorMessage->setGeometry(QRect(190, 210, 251, 20));
        label_phoneErrorMessage->setAlignment(Qt::AlignCenter);
        label_ageErrorMessage = new QLabel(page);
        label_ageErrorMessage->setObjectName(QString::fromUtf8("label_ageErrorMessage"));
        label_ageErrorMessage->setGeometry(QRect(180, 370, 251, 31));
        label_ageErrorMessage->setAlignment(Qt::AlignCenter);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 30, 211, 31));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \".AppleSystemUIFont\";"));
        stackedWidget_contacts->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget_contacts->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget_contacts);

        QWidget::setTabOrder(lineEdit_firstName, lineEdit_lastName);
        QWidget::setTabOrder(lineEdit_lastName, lineEdit_phone);
        QWidget::setTabOrder(lineEdit_phone, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, lineEdit_address);
        QWidget::setTabOrder(lineEdit_address, lineEdit_age);
        QWidget::setTabOrder(lineEdit_age, pushButton_save);
        QWidget::setTabOrder(pushButton_save, pushButton_uploadFile);

        retranslateUi(ContactsGui);

        stackedWidget_contacts->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ContactsGui);
    } // setupUi

    void retranslateUi(QWidget *ContactsGui)
    {
        ContactsGui->setWindowTitle(QCoreApplication::translate("ContactsGui", "Form", nullptr));
        label_age->setText(QCoreApplication::translate("ContactsGui", "Age:", nullptr));
        pushButton_save->setText(QCoreApplication::translate("ContactsGui", "Save", nullptr));
        label_lastName->setText(QCoreApplication::translate("ContactsGui", "Last Name:", nullptr));
        pushButton_uploadFile->setText(QCoreApplication::translate("ContactsGui", "Upload File", nullptr));
        label_email->setText(QCoreApplication::translate("ContactsGui", "Email:", nullptr));
        label_address->setText(QCoreApplication::translate("ContactsGui", "Address:", nullptr));
        label_phone->setText(QCoreApplication::translate("ContactsGui", "Phone Number:", nullptr));
        label_firstName->setText(QCoreApplication::translate("ContactsGui", "First Name:", nullptr));
        label_phoneErrorMessage->setText(QString());
        label_ageErrorMessage->setText(QString());
        label->setText(QCoreApplication::translate("ContactsGui", "Enter your contact here ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactsGui: public Ui_ContactsGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTSGUI_H
