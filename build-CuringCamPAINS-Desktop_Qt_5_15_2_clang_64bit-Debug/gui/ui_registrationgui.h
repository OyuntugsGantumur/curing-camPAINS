/********************************************************************************
** Form generated from reading UI file 'registrationgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONGUI_H
#define UI_REGISTRATIONGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registrationGUI
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_5;
    QLineEdit *name;
    QLabel *label_6;
    QPushButton *uploadPhoto;
    QLabel *logo;
    QComboBox *isResearcher;

    void setupUi(QDialog *registrationGUI)
    {
        if (registrationGUI->objectName().isEmpty())
            registrationGUI->setObjectName(QString::fromUtf8("registrationGUI"));
        registrationGUI->resize(711, 519);
        buttonBox = new QDialogButtonBox(registrationGUI);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 460, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(registrationGUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 230, 58, 16));
        label_2 = new QLabel(registrationGUI);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 270, 81, 21));
        label_3 = new QLabel(registrationGUI);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 320, 58, 16));
        label_4 = new QLabel(registrationGUI);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(180, 370, 58, 16));
        username = new QLineEdit(registrationGUI);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(320, 270, 113, 21));
        password = new QLineEdit(registrationGUI);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(320, 310, 113, 21));
        label_5 = new QLabel(registrationGUI);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 140, 251, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        name = new QLineEdit(registrationGUI);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(320, 220, 113, 21));
        label_6 = new QLabel(registrationGUI);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(177, 420, 81, 20));
        uploadPhoto = new QPushButton(registrationGUI);
        uploadPhoto->setObjectName(QString::fromUtf8("uploadPhoto"));
        uploadPhoto->setGeometry(QRect(330, 410, 100, 32));
        uploadPhoto->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-width: 2px;\n"
"    border-radius: 10px;"));
        logo = new QLabel(registrationGUI);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(250, 20, 241, 121));
        isResearcher = new QComboBox(registrationGUI);
        isResearcher->addItem(QString());
        isResearcher->addItem(QString());
        isResearcher->setObjectName(QString::fromUtf8("isResearcher"));
        isResearcher->setGeometry(QRect(330, 360, 103, 32));

        retranslateUi(registrationGUI);
        QObject::connect(buttonBox, SIGNAL(accepted()), registrationGUI, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), registrationGUI, SLOT(reject()));

        QMetaObject::connectSlotsByName(registrationGUI);
    } // setupUi

    void retranslateUi(QDialog *registrationGUI)
    {
        registrationGUI->setWindowTitle(QCoreApplication::translate("registrationGUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registrationGUI", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("registrationGUI", "username", nullptr));
        label_3->setText(QCoreApplication::translate("registrationGUI", "password", nullptr));
        label_4->setText(QCoreApplication::translate("registrationGUI", "user type", nullptr));
        label_5->setText(QCoreApplication::translate("registrationGUI", "Enter your information here ", nullptr));
        label_6->setText(QCoreApplication::translate("registrationGUI", "profile photo", nullptr));
        uploadPhoto->setText(QCoreApplication::translate("registrationGUI", "choose file", nullptr));
        logo->setText(QString());
        isResearcher->setItemText(0, QCoreApplication::translate("registrationGUI", "volunteer", nullptr));
        isResearcher->setItemText(1, QCoreApplication::translate("registrationGUI", "researcher", nullptr));

    } // retranslateUi

};

namespace Ui {
    class registrationGUI: public Ui_registrationGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONGUI_H
