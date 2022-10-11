/********************************************************************************
** Form generated from reading UI file 'logingui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINGUI_H
#define UI_LOGINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginGUI
{
public:
    QGroupBox *groupBox;
    QPushButton *submission;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_usr;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_pwd;
    QPushButton *registration;
    QLabel *logo;

    void setupUi(QDialog *LoginGUI)
    {
        if (LoginGUI->objectName().isEmpty())
            LoginGUI->setObjectName(QString::fromUtf8("LoginGUI"));
        LoginGUI->resize(840, 580);
        LoginGUI->setStyleSheet(QString::fromUtf8("background-color:rgb(137 143 156);"));
        groupBox = new QGroupBox(LoginGUI);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(490, 120, 301, 341));
        submission = new QPushButton(groupBox);
        submission->setObjectName(QString::fromUtf8("submission"));
        submission->setGeometry(QRect(60, 170, 186, 41));
        submission->setAutoFillBackground(false);
        submission->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 211, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_usr = new QLineEdit(layoutWidget);
        lineEdit_usr->setObjectName(QString::fromUtf8("lineEdit_usr"));

        horizontalLayout->addWidget(lineEdit_usr);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 100, 211, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_pwd = new QLineEdit(layoutWidget1);
        lineEdit_pwd->setObjectName(QString::fromUtf8("lineEdit_pwd"));
        lineEdit_pwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_pwd);

        registration = new QPushButton(groupBox);
        registration->setObjectName(QString::fromUtf8("registration"));
        registration->setGeometry(QRect(90, 240, 131, 41));
        registration->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"  border-color: beige;\n"
""));
        logo = new QLabel(LoginGUI);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(20, 130, 421, 291));

        retranslateUi(LoginGUI);

        QMetaObject::connectSlotsByName(LoginGUI);
    } // setupUi

    void retranslateUi(QDialog *LoginGUI)
    {
        LoginGUI->setWindowTitle(QCoreApplication::translate("LoginGUI", "Dialog", nullptr));
        groupBox->setTitle(QString());
        submission->setText(QCoreApplication::translate("LoginGUI", "Log In", nullptr));
        label->setText(QCoreApplication::translate("LoginGUI", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginGUI", "Password", nullptr));
        registration->setText(QCoreApplication::translate("LoginGUI", "Create new account", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginGUI: public Ui_LoginGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINGUI_H
