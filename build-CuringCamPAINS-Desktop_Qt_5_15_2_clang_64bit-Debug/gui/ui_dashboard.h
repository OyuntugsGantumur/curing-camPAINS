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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QGroupBox *groupBox;
    QPushButton *dashboardButton;
    QPushButton *contactsButton;
    QPushButton *resourcesButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QLabel *label_7;
    QPushButton *pushButton_7;
    QStackedWidget *stackedWidget;
    QWidget *page;
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
    QWidget *resources;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *changeColor;
    QPushButton *createMessage;
    QPushButton *viewMessage;
    QPushButton *deleteMessage;
    QWidget *createMessagePage;
    QLabel *titleLabel;
    QLabel *textLabel;
    QLineEdit *inputTitle;
    QLineEdit *inputText;
    QPushButton *saveMessage;
    QWidget *viewMessagePage;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel_2;
    QLineEdit *inputTitle_2;
    QPushButton *viewButton;
    QLabel *displayText;
    QPushButton *backButton;
    QLabel *titlesOutput;
    QWidget *deleteMessagePage;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleLabel_3;
    QLineEdit *inputTitle_3;
    QPushButton *deleteButton;
    QLabel *allTitles;
    QWidget *page_2;
    QLineEdit *nameLineEdit;
    QLabel *label_8;
    QPushButton *nameButton;
    QLineEdit *ageLineEdit;
    QLineEdit *pnLineEdit;
    QLineEdit *numAttemptsLineEdit;
    QLineEdit *methodOfContactLineEdit;
    QLineEdit *reactionLineEdit;
    QLineEdit *dateContactedLineEdit;
    QLineEdit *isCommittedLineEdit;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QWidget *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1289, 729);
        groupBox = new QGroupBox(Dashboard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 301, 701));
        groupBox->setAutoFillBackground(true);
        dashboardButton = new QPushButton(groupBox);
        dashboardButton->setObjectName(QString::fromUtf8("dashboardButton"));
        dashboardButton->setGeometry(QRect(0, 250, 301, 61));
        QFont font;
        font.setPointSize(22);
        dashboardButton->setFont(font);
        contactsButton = new QPushButton(groupBox);
        contactsButton->setObjectName(QString::fromUtf8("contactsButton"));
        contactsButton->setGeometry(QRect(0, 310, 301, 61));
        contactsButton->setFont(font);
        resourcesButton = new QPushButton(groupBox);
        resourcesButton->setObjectName(QString::fromUtf8("resourcesButton"));
        resourcesButton->setGeometry(QRect(0, 370, 301, 61));
        resourcesButton->setFont(font);
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
        groupBox_4 = new QGroupBox(Dashboard);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(980, 10, 301, 80));
        groupBox_4->setAutoFillBackground(true);
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 30, 191, 31));
        QFont font3;
        font3.setPointSize(18);
        label_7->setFont(font3);
        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(520, 40, 80, 24));
        stackedWidget = new QStackedWidget(Dashboard);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(330, 10, 631, 701));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 631, 701));
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
        stackedWidget->addWidget(page);
        resources = new QWidget();
        resources->setObjectName(QString::fromUtf8("resources"));
        layoutWidget = new QWidget(resources);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 100, 341, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        changeColor = new QPushButton(layoutWidget);
        changeColor->setObjectName(QString::fromUtf8("changeColor"));

        verticalLayout->addWidget(changeColor);

        createMessage = new QPushButton(layoutWidget);
        createMessage->setObjectName(QString::fromUtf8("createMessage"));

        verticalLayout->addWidget(createMessage);

        viewMessage = new QPushButton(layoutWidget);
        viewMessage->setObjectName(QString::fromUtf8("viewMessage"));

        verticalLayout->addWidget(viewMessage);

        deleteMessage = new QPushButton(layoutWidget);
        deleteMessage->setObjectName(QString::fromUtf8("deleteMessage"));

        verticalLayout->addWidget(deleteMessage);

        stackedWidget->addWidget(resources);
        createMessagePage = new QWidget();
        createMessagePage->setObjectName(QString::fromUtf8("createMessagePage"));
        titleLabel = new QLabel(createMessagePage);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(130, 130, 58, 16));
        textLabel = new QLabel(createMessagePage);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setGeometry(QRect(130, 200, 58, 16));
        inputTitle = new QLineEdit(createMessagePage);
        inputTitle->setObjectName(QString::fromUtf8("inputTitle"));
        inputTitle->setGeometry(QRect(180, 130, 131, 21));
        inputText = new QLineEdit(createMessagePage);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setGeometry(QRect(180, 200, 131, 21));
        saveMessage = new QPushButton(createMessagePage);
        saveMessage->setObjectName(QString::fromUtf8("saveMessage"));
        saveMessage->setGeometry(QRect(170, 250, 141, 31));
        stackedWidget->addWidget(createMessagePage);
        viewMessagePage = new QWidget();
        viewMessagePage->setObjectName(QString::fromUtf8("viewMessagePage"));
        layoutWidget1 = new QWidget(viewMessagePage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 120, 331, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel_2 = new QLabel(layoutWidget1);
        titleLabel_2->setObjectName(QString::fromUtf8("titleLabel_2"));

        horizontalLayout->addWidget(titleLabel_2);

        inputTitle_2 = new QLineEdit(layoutWidget1);
        inputTitle_2->setObjectName(QString::fromUtf8("inputTitle_2"));

        horizontalLayout->addWidget(inputTitle_2);

        viewButton = new QPushButton(layoutWidget1);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));

        horizontalLayout->addWidget(viewButton);

        displayText = new QLabel(viewMessagePage);
        displayText->setObjectName(QString::fromUtf8("displayText"));
        displayText->setGeometry(QRect(210, 160, 191, 21));
        backButton = new QPushButton(viewMessagePage);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(260, 200, 100, 32));
        titlesOutput = new QLabel(viewMessagePage);
        titlesOutput->setObjectName(QString::fromUtf8("titlesOutput"));
        titlesOutput->setGeometry(QRect(140, 80, 331, 21));
        stackedWidget->addWidget(viewMessagePage);
        deleteMessagePage = new QWidget();
        deleteMessagePage->setObjectName(QString::fromUtf8("deleteMessagePage"));
        layoutWidget2 = new QWidget(deleteMessagePage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(160, 190, 331, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleLabel_3 = new QLabel(layoutWidget2);
        titleLabel_3->setObjectName(QString::fromUtf8("titleLabel_3"));

        horizontalLayout_2->addWidget(titleLabel_3);

        inputTitle_3 = new QLineEdit(layoutWidget2);
        inputTitle_3->setObjectName(QString::fromUtf8("inputTitle_3"));

        horizontalLayout_2->addWidget(inputTitle_3);

        deleteButton = new QPushButton(layoutWidget2);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);

        allTitles = new QLabel(deleteMessagePage);
        allTitles->setObjectName(QString::fromUtf8("allTitles"));
        allTitles->setGeometry(QRect(167, 150, 311, 21));
        stackedWidget->addWidget(deleteMessagePage);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        nameLineEdit = new QLineEdit(page_2);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(260, 100, 113, 21));
        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(190, 100, 58, 16));
        nameButton = new QPushButton(page_2);
        nameButton->setObjectName(QString::fromUtf8("nameButton"));
        nameButton->setGeometry(QRect(270, 550, 100, 32));
        ageLineEdit = new QLineEdit(page_2);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));
        ageLineEdit->setGeometry(QRect(260, 160, 113, 21));
        pnLineEdit = new QLineEdit(page_2);
        pnLineEdit->setObjectName(QString::fromUtf8("pnLineEdit"));
        pnLineEdit->setGeometry(QRect(260, 220, 113, 21));
        numAttemptsLineEdit = new QLineEdit(page_2);
        numAttemptsLineEdit->setObjectName(QString::fromUtf8("numAttemptsLineEdit"));
        numAttemptsLineEdit->setGeometry(QRect(260, 280, 113, 21));
        methodOfContactLineEdit = new QLineEdit(page_2);
        methodOfContactLineEdit->setObjectName(QString::fromUtf8("methodOfContactLineEdit"));
        methodOfContactLineEdit->setGeometry(QRect(260, 330, 113, 21));
        reactionLineEdit = new QLineEdit(page_2);
        reactionLineEdit->setObjectName(QString::fromUtf8("reactionLineEdit"));
        reactionLineEdit->setGeometry(QRect(260, 390, 113, 21));
        dateContactedLineEdit = new QLineEdit(page_2);
        dateContactedLineEdit->setObjectName(QString::fromUtf8("dateContactedLineEdit"));
        dateContactedLineEdit->setGeometry(QRect(260, 440, 113, 21));
        isCommittedLineEdit = new QLineEdit(page_2);
        isCommittedLineEdit->setObjectName(QString::fromUtf8("isCommittedLineEdit"));
        isCommittedLineEdit->setGeometry(QRect(260, 490, 113, 21));
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(190, 160, 58, 16));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(157, 220, 91, 20));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(117, 280, 121, 20));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(117, 340, 121, 20));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(147, 390, 91, 20));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(180, 450, 58, 16));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(157, 490, 71, 20));
        stackedWidget->addWidget(page_2);

        retranslateUi(Dashboard);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QWidget *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        groupBox->setTitle(QString());
        dashboardButton->setText(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        contactsButton->setText(QCoreApplication::translate("Dashboard", "Contacts", nullptr));
        resourcesButton->setText(QCoreApplication::translate("Dashboard", "Resources", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dashboard", "Data", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Curing CamPAINs", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Max Turkot", nullptr));
        groupBox_4->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Dashboard", "This Week's Goal: 4/25", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("Dashboard", "John Doe", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "Last Reached Out: 03/12/2022", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
        groupBox_3->setTitle(QString());
        label_5->setText(QCoreApplication::translate("Dashboard", "Harry Jones", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "Last Reached Out: 03/12/2022", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dashboard", "Log", nullptr));
        changeColor->setText(QCoreApplication::translate("Dashboard", "Change Color", nullptr));
        createMessage->setText(QCoreApplication::translate("Dashboard", "Create Message", nullptr));
        viewMessage->setText(QCoreApplication::translate("Dashboard", "View Message", nullptr));
        deleteMessage->setText(QCoreApplication::translate("Dashboard", "Delete Message", nullptr));
        titleLabel->setText(QCoreApplication::translate("Dashboard", "Title:", nullptr));
        textLabel->setText(QCoreApplication::translate("Dashboard", "Text:", nullptr));
        saveMessage->setText(QCoreApplication::translate("Dashboard", "Save Message", nullptr));
        titleLabel_2->setText(QCoreApplication::translate("Dashboard", "Title:", nullptr));
        viewButton->setText(QCoreApplication::translate("Dashboard", "View", nullptr));
        displayText->setText(QString());
        backButton->setText(QCoreApplication::translate("Dashboard", "Back", nullptr));
        titlesOutput->setText(QString());
        titleLabel_3->setText(QCoreApplication::translate("Dashboard", "Title:", nullptr));
        deleteButton->setText(QCoreApplication::translate("Dashboard", "Delete", nullptr));
        allTitles->setText(QString());
        label_8->setText(QCoreApplication::translate("Dashboard", "Name:", nullptr));
        nameButton->setText(QCoreApplication::translate("Dashboard", "Enter", nullptr));
        label_9->setText(QCoreApplication::translate("Dashboard", "Age", nullptr));
        label_10->setText(QCoreApplication::translate("Dashboard", "Phone Number", nullptr));
        label_11->setText(QCoreApplication::translate("Dashboard", "number of attempts", nullptr));
        label_12->setText(QCoreApplication::translate("Dashboard", "method of contact", nullptr));
        label_13->setText(QCoreApplication::translate("Dashboard", "reaction", nullptr));
        label_14->setText(QCoreApplication::translate("Dashboard", "date", nullptr));
        label_15->setText(QCoreApplication::translate("Dashboard", "committed?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
