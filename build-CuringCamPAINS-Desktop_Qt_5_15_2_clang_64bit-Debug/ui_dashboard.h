/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_4;
    QLabel *label_7;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1289, 729);
        groupBox = new QGroupBox(Dashboard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 701));
        groupBox->setAutoFillBackground(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 250, 301, 61));
        QFont font;
        font.setPointSize(22);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 310, 301, 61));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 370, 301, 61));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 430, 301, 61));
        pushButton_4->setFont(font);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 9, 301, 31));
        QFont font1;
        font1.setPointSize(26);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(groupBox);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(75, 60, 151, 121));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 190, 301, 31));
        QFont font2;
        font2.setPointSize(21);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(Dashboard);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(330, 10, 631, 701));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 629, 699));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 611, 80));
        groupBox_2->setAutoFillBackground(true);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 81, 31));
        QFont font3;
        font3.setPointSize(18);
        label_3->setFont(font3);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 50, 191, 16));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 40, 80, 24));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 100, 611, 80));
        groupBox_3->setAutoFillBackground(true);
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 121, 31));
        label_5->setFont(font3);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 50, 191, 16));
        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(520, 40, 80, 24));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_4 = new QGroupBox(Dashboard);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(980, 10, 301, 80));
        groupBox_4->setAutoFillBackground(true);
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 30, 191, 31));
        label_7->setFont(font3);
        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(520, 40, 80, 24));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dashboard", "Contacts", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dashboard", "Resources", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dashboard", "Data", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Curing CamPAINs", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Max Turkot", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("Dashboard", "John Doe", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "Last Reached Out: 03/12/2022", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
        groupBox_3->setTitle(QString());
        label_5->setText(QCoreApplication::translate("Dashboard", "Harry Jones", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "Last Reached Out: 03/12/2022", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
        groupBox_4->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Dashboard", "This Week's Goal: 4/25", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
