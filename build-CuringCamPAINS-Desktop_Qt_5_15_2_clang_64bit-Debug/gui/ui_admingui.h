/********************************************************************************
** Form generated from reading UI file 'admingui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINGUI_H
#define UI_ADMINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminGui
{
public:
    QGroupBox *groupBox_sidebar;
    QPushButton *pushButton_logs;
    QLabel *label_title;
    QLabel *label_name;
    QPushButton *pushButton_logout;
    QLabel *label_image;
    QLabel *label;
    QPushButton *pushButton_contacts;
    QLabel *label_rectuiterName;
    QLabel *label_contactName;
    QLabel *label_group;
    QLabel *label_logCount;
    QScrollArea *scrollArea_main;
    QWidget *scrollAreaWidgetContents_main;

    void setupUi(QWidget *AdminGui)
    {
        if (AdminGui->objectName().isEmpty())
            AdminGui->setObjectName(QString::fromUtf8("AdminGui"));
        AdminGui->resize(832, 580);
        groupBox_sidebar = new QGroupBox(AdminGui);
        groupBox_sidebar->setObjectName(QString::fromUtf8("groupBox_sidebar"));
        groupBox_sidebar->setGeometry(QRect(0, -10, 184, 581));
        pushButton_logs = new QPushButton(groupBox_sidebar);
        pushButton_logs->setObjectName(QString::fromUtf8("pushButton_logs"));
        pushButton_logs->setGeometry(QRect(0, 300, 184, 61));
        QFont font;
        font.setPointSize(22);
        pushButton_logs->setFont(font);
        pushButton_logs->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        label_title = new QLabel(groupBox_sidebar);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(0, 10, 181, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        label_title->setFont(font1);
        label_title->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        label_title->setAlignment(Qt::AlignCenter);
        label_name = new QLabel(groupBox_sidebar);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(0, 190, 181, 20));
        QFont font2;
        font2.setPointSize(20);
        label_name->setFont(font2);
        label_name->setAlignment(Qt::AlignCenter);
        pushButton_logout = new QPushButton(groupBox_sidebar);
        pushButton_logout->setObjectName(QString::fromUtf8("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(0, 530, 184, 41));
        QFont font3;
        font3.setPointSize(18);
        pushButton_logout->setFont(font3);
        pushButton_logout->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        label_image = new QLabel(groupBox_sidebar);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(30, 60, 121, 121));
        label = new QLabel(groupBox_sidebar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 260, 151, 31));
        QFont font4;
        font4.setPointSize(30);
        font4.setBold(false);
        font4.setItalic(false);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("font: 30pt \"Baskerville\";"));
        pushButton_contacts = new QPushButton(groupBox_sidebar);
        pushButton_contacts->setObjectName(QString::fromUtf8("pushButton_contacts"));
        pushButton_contacts->setGeometry(QRect(0, 360, 184, 61));
        pushButton_contacts->setFont(font);
        pushButton_contacts->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        label_rectuiterName = new QLabel(AdminGui);
        label_rectuiterName->setObjectName(QString::fromUtf8("label_rectuiterName"));
        label_rectuiterName->setGeometry(QRect(240, 20, 131, 21));
        label_rectuiterName->setFont(font1);
        label_rectuiterName->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        label_contactName = new QLabel(AdminGui);
        label_contactName->setObjectName(QString::fromUtf8("label_contactName"));
        label_contactName->setGeometry(QRect(377, 20, 121, 21));
        label_contactName->setFont(font1);
        label_contactName->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        label_group = new QLabel(AdminGui);
        label_group->setObjectName(QString::fromUtf8("label_group"));
        label_group->setGeometry(QRect(559, 20, 71, 21));
        label_group->setFont(font1);
        label_group->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        label_logCount = new QLabel(AdminGui);
        label_logCount->setObjectName(QString::fromUtf8("label_logCount"));
        label_logCount->setGeometry(QRect(700, 20, 91, 21));
        label_logCount->setFont(font1);
        label_logCount->setStyleSheet(QString::fromUtf8("font: 20pt \"Baskerville\";"));
        scrollArea_main = new QScrollArea(AdminGui);
        scrollArea_main->setObjectName(QString::fromUtf8("scrollArea_main"));
        scrollArea_main->setGeometry(QRect(230, 50, 551, 511));
        scrollArea_main->setWidgetResizable(true);
        scrollAreaWidgetContents_main = new QWidget();
        scrollAreaWidgetContents_main->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_main"));
        scrollAreaWidgetContents_main->setGeometry(QRect(0, 0, 549, 509));
        scrollArea_main->setWidget(scrollAreaWidgetContents_main);

        retranslateUi(AdminGui);

        QMetaObject::connectSlotsByName(AdminGui);
    } // setupUi

    void retranslateUi(QWidget *AdminGui)
    {
        AdminGui->setWindowTitle(QCoreApplication::translate("AdminGui", "Form", nullptr));
        groupBox_sidebar->setTitle(QString());
        pushButton_logs->setText(QCoreApplication::translate("AdminGui", "Logs", nullptr));
        label_title->setText(QString());
        label_name->setText(QString());
        pushButton_logout->setText(QCoreApplication::translate("AdminGui", "Logout", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("AdminGui", "Downloads", nullptr));
        pushButton_contacts->setText(QCoreApplication::translate("AdminGui", "Contacts", nullptr));
        label_rectuiterName->setText(QCoreApplication::translate("AdminGui", "Recruiter", nullptr));
        label_contactName->setText(QCoreApplication::translate("AdminGui", "Contact", nullptr));
        label_group->setText(QCoreApplication::translate("AdminGui", "Method", nullptr));
        label_logCount->setText(QCoreApplication::translate("AdminGui", "Attempts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminGui: public Ui_AdminGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINGUI_H
