/********************************************************************************
** Form generated from reading UI file 'dashboardgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDGUI_H
#define UI_DASHBOARDGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardGui
{
public:
    QGroupBox *groupBox_sidebar;
    QPushButton *pushButton_dashboard;
    QPushButton *pushButton_contacts;
    QLabel *label_title;
    QLabel *label_name;
    QPushButton *pushButton_logout;
    QPushButton *pushButton_resources;
    QLabel *label_image;
    QStackedWidget *stackedWidget_main;
    QWidget *page;
    QScrollArea *scrollArea_dashboard;
    QWidget *scrollAreaWidgetContents_dashboard;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *DashboardGui)
    {
        if (DashboardGui->objectName().isEmpty())
            DashboardGui->setObjectName(QString::fromUtf8("DashboardGui"));
        DashboardGui->resize(832, 580);
        groupBox_sidebar = new QGroupBox(DashboardGui);
        groupBox_sidebar->setObjectName(QString::fromUtf8("groupBox_sidebar"));
        groupBox_sidebar->setGeometry(QRect(0, 0, 184, 581));
        pushButton_dashboard = new QPushButton(groupBox_sidebar);
        pushButton_dashboard->setObjectName(QString::fromUtf8("pushButton_dashboard"));
        pushButton_dashboard->setGeometry(QRect(0, 230, 184, 61));
        QFont font;
        font.setPointSize(22);
        pushButton_dashboard->setFont(font);
        pushButton_dashboard->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        pushButton_contacts = new QPushButton(groupBox_sidebar);
        pushButton_contacts->setObjectName(QString::fromUtf8("pushButton_contacts"));
        pushButton_contacts->setGeometry(QRect(0, 290, 184, 61));
        pushButton_contacts->setFont(font);
        pushButton_contacts->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        label_title = new QLabel(groupBox_sidebar);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(10, 10, 161, 41));
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
        font3.setBold(true);
        font3.setItalic(false);
        pushButton_logout->setFont(font3);
        pushButton_logout->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        pushButton_resources = new QPushButton(groupBox_sidebar);
        pushButton_resources->setObjectName(QString::fromUtf8("pushButton_resources"));
        pushButton_resources->setGeometry(QRect(0, 350, 184, 61));
        pushButton_resources->setFont(font);
        pushButton_resources->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    padding: 6px;"));
        label_image = new QLabel(groupBox_sidebar);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(38, 60, 111, 121));
        stackedWidget_main = new QStackedWidget(DashboardGui);
        stackedWidget_main->setObjectName(QString::fromUtf8("stackedWidget_main"));
        stackedWidget_main->setGeometry(QRect(184, 0, 648, 580));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        scrollArea_dashboard = new QScrollArea(page);
        scrollArea_dashboard->setObjectName(QString::fromUtf8("scrollArea_dashboard"));
        scrollArea_dashboard->setGeometry(QRect(39, 49, 571, 521));
        scrollArea_dashboard->setWidgetResizable(true);
        scrollAreaWidgetContents_dashboard = new QWidget();
        scrollAreaWidgetContents_dashboard->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_dashboard"));
        scrollAreaWidgetContents_dashboard->setGeometry(QRect(0, 0, 569, 519));
        scrollArea_dashboard->setWidget(scrollAreaWidgetContents_dashboard);
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(51, 20, 58, 16));
        QFont font4;
        font4.setPointSize(18);
        label->setFont(font4);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(186, 20, 58, 16));
        label_2->setFont(font4);
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(382, 20, 58, 16));
        label_3->setFont(font4);
        stackedWidget_main->addWidget(page);

        retranslateUi(DashboardGui);

        QMetaObject::connectSlotsByName(DashboardGui);
    } // setupUi

    void retranslateUi(QWidget *DashboardGui)
    {
        DashboardGui->setWindowTitle(QCoreApplication::translate("DashboardGui", "Form", nullptr));
        groupBox_sidebar->setTitle(QString());
        pushButton_dashboard->setText(QCoreApplication::translate("DashboardGui", "Dashboard", nullptr));
        pushButton_contacts->setText(QCoreApplication::translate("DashboardGui", "Contacts", nullptr));
        label_title->setText(QString());
        label_name->setText(QString());
        pushButton_logout->setText(QCoreApplication::translate("DashboardGui", "Logout", nullptr));
        pushButton_resources->setText(QCoreApplication::translate("DashboardGui", "Resources", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("DashboardGui", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("DashboardGui", "E-mail", nullptr));
        label_3->setText(QCoreApplication::translate("DashboardGui", "Phone", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardGui: public Ui_DashboardGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDGUI_H
