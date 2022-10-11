/********************************************************************************
** Form generated from reading UI file 'contacts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTS_H
#define UI_CONTACTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Contacts
{
public:
    QPushButton *uploadFile;
    QPushButton *cancelButton;
    QLineEdit *lineEditFirstName;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditLastName;
    QLabel *label_3;
    QLineEdit *lineEditPhone;
    QLabel *label_4;
    QLineEdit *lineEditEmail;
    QLabel *label_5;
    QLineEdit *lineEditAddress;
    QPushButton *saveButton;
    QLabel *label_6;
    QLineEdit *lineEditAge;

    void setupUi(QDialog *Contacts)
    {
        if (Contacts->objectName().isEmpty())
            Contacts->setObjectName(QString::fromUtf8("Contacts"));
        Contacts->resize(417, 387);
        uploadFile = new QPushButton(Contacts);
        uploadFile->setObjectName(QString::fromUtf8("uploadFile"));
        uploadFile->setGeometry(QRect(120, 350, 100, 32));
        cancelButton = new QPushButton(Contacts);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(10, 350, 100, 32));
        lineEditFirstName = new QLineEdit(Contacts);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));
        lineEditFirstName->setGeometry(QRect(200, 80, 113, 21));
        label = new QLabel(Contacts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 80, 71, 16));
        label_2 = new QLabel(Contacts);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 110, 71, 16));
        lineEditLastName = new QLineEdit(Contacts);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));
        lineEditLastName->setGeometry(QRect(200, 110, 113, 21));
        label_3 = new QLabel(Contacts);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 140, 91, 16));
        lineEditPhone = new QLineEdit(Contacts);
        lineEditPhone->setObjectName(QString::fromUtf8("lineEditPhone"));
        lineEditPhone->setGeometry(QRect(200, 140, 113, 21));
        label_4 = new QLabel(Contacts);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 170, 91, 16));
        lineEditEmail = new QLineEdit(Contacts);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(200, 170, 113, 21));
        label_5 = new QLabel(Contacts);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 230, 91, 16));
        lineEditAddress = new QLineEdit(Contacts);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setGeometry(QRect(200, 200, 113, 21));
        saveButton = new QPushButton(Contacts);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(310, 350, 100, 32));
        label_6 = new QLabel(Contacts);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 200, 91, 16));
        lineEditAge = new QLineEdit(Contacts);
        lineEditAge->setObjectName(QString::fromUtf8("lineEditAge"));
        lineEditAge->setGeometry(QRect(200, 230, 113, 21));

        retranslateUi(Contacts);

        QMetaObject::connectSlotsByName(Contacts);
    } // setupUi

    void retranslateUi(QDialog *Contacts)
    {
        Contacts->setWindowTitle(QCoreApplication::translate("Contacts", "Dialog", nullptr));
        uploadFile->setText(QCoreApplication::translate("Contacts", "Upload File", nullptr));
        cancelButton->setText(QCoreApplication::translate("Contacts", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Contacts", "First Name:", nullptr));
        label_2->setText(QCoreApplication::translate("Contacts", "Last Name:", nullptr));
        label_3->setText(QCoreApplication::translate("Contacts", "Phone Number:", nullptr));
        label_4->setText(QCoreApplication::translate("Contacts", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("Contacts", "Age:", nullptr));
        saveButton->setText(QCoreApplication::translate("Contacts", "Save", nullptr));
        label_6->setText(QCoreApplication::translate("Contacts", "Address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Contacts: public Ui_Contacts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTS_H
