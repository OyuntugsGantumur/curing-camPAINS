/********************************************************************************
** Form generated from reading UI file 'resourcesgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCESGUI_H
#define UI_RESOURCESGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourcesGui
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_resources;
    QWidget *buttonsPage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_resources;
    QPushButton *pushButton_profileUpdate;
    QPushButton *pushButton_changeColor;
    QPushButton *pushButton_createMessage;
    QPushButton *pushButton_viewMessage;
    QPushButton *pushButton_deleteMessage;
    QLabel *label_2;
    QWidget *createMessagePage;
    QPushButton *pushButton_saveMessage;
    QLineEdit *lineEdit_title;
    QLabel *label_title;
    QLabel *label_text;
    QPushButton *pushButton_back2;
    QTextEdit *lineEdit_text;
    QLabel *label_3;
    QWidget *viewMessagePage;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_view;
    QLabel *label_titleView;
    QComboBox *comboBox_choices;
    QPushButton *pushButton_view;
    QPushButton *pushButton_back;
    QTextEdit *textEdit_textOutput;
    QLabel *label_4;
    QWidget *deleteMessagePage;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_deleteMessage;
    QLabel *label_titleDeleteMessage;
    QComboBox *comboBox_choicesDelete;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_back3;
    QLabel *label_5;
    QWidget *page_editProfile;
    QPushButton *pushButton_picture;
    QLabel *label_image;
    QLabel *label;

    void setupUi(QWidget *ResourcesGui)
    {
        if (ResourcesGui->objectName().isEmpty())
            ResourcesGui->setObjectName(QString::fromUtf8("ResourcesGui"));
        ResourcesGui->resize(638, 580);
        gridLayout = new QGridLayout(ResourcesGui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget_resources = new QStackedWidget(ResourcesGui);
        stackedWidget_resources->setObjectName(QString::fromUtf8("stackedWidget_resources"));
        buttonsPage = new QWidget();
        buttonsPage->setObjectName(QString::fromUtf8("buttonsPage"));
        layoutWidget = new QWidget(buttonsPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 110, 341, 351));
        verticalLayout_resources = new QVBoxLayout(layoutWidget);
        verticalLayout_resources->setObjectName(QString::fromUtf8("verticalLayout_resources"));
        verticalLayout_resources->setContentsMargins(0, 0, 0, 0);
        pushButton_profileUpdate = new QPushButton(layoutWidget);
        pushButton_profileUpdate->setObjectName(QString::fromUtf8("pushButton_profileUpdate"));
        pushButton_profileUpdate->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        verticalLayout_resources->addWidget(pushButton_profileUpdate);

        pushButton_changeColor = new QPushButton(layoutWidget);
        pushButton_changeColor->setObjectName(QString::fromUtf8("pushButton_changeColor"));
        pushButton_changeColor->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        verticalLayout_resources->addWidget(pushButton_changeColor);

        pushButton_createMessage = new QPushButton(layoutWidget);
        pushButton_createMessage->setObjectName(QString::fromUtf8("pushButton_createMessage"));
        pushButton_createMessage->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        verticalLayout_resources->addWidget(pushButton_createMessage);

        pushButton_viewMessage = new QPushButton(layoutWidget);
        pushButton_viewMessage->setObjectName(QString::fromUtf8("pushButton_viewMessage"));
        pushButton_viewMessage->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        verticalLayout_resources->addWidget(pushButton_viewMessage);

        pushButton_deleteMessage = new QPushButton(layoutWidget);
        pushButton_deleteMessage->setObjectName(QString::fromUtf8("pushButton_deleteMessage"));
        pushButton_deleteMessage->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));

        verticalLayout_resources->addWidget(pushButton_deleteMessage);

        label_2 = new QLabel(buttonsPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 30, 491, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \".AppleSystemUIFont\";"));
        stackedWidget_resources->addWidget(buttonsPage);
        createMessagePage = new QWidget();
        createMessagePage->setObjectName(QString::fromUtf8("createMessagePage"));
        pushButton_saveMessage = new QPushButton(createMessagePage);
        pushButton_saveMessage->setObjectName(QString::fromUtf8("pushButton_saveMessage"));
        pushButton_saveMessage->setGeometry(QRect(280, 480, 186, 51));
        pushButton_saveMessage->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;"));
        lineEdit_title = new QLineEdit(createMessagePage);
        lineEdit_title->setObjectName(QString::fromUtf8("lineEdit_title"));
        lineEdit_title->setGeometry(QRect(200, 150, 311, 31));
        label_title = new QLabel(createMessagePage);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(90, 155, 81, 21));
        QFont font;
        font.setPointSize(18);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);
        label_text = new QLabel(createMessagePage);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setGeometry(QRect(96, 213, 71, 31));
        label_text->setFont(font);
        label_text->setAlignment(Qt::AlignCenter);
        pushButton_back2 = new QPushButton(createMessagePage);
        pushButton_back2->setObjectName(QString::fromUtf8("pushButton_back2"));
        pushButton_back2->setGeometry(QRect(40, 490, 101, 31));
        pushButton_back2->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));
        lineEdit_text = new QTextEdit(createMessagePage);
        lineEdit_text->setObjectName(QString::fromUtf8("lineEdit_text"));
        lineEdit_text->setGeometry(QRect(200, 220, 311, 231));
        lineEdit_text->setAutoFillBackground(false);
        label_3 = new QLabel(createMessagePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 80, 311, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \".AppleSystemUIFont\";"));
        stackedWidget_resources->addWidget(createMessagePage);
        viewMessagePage = new QWidget();
        viewMessagePage->setObjectName(QString::fromUtf8("viewMessagePage"));
        layoutWidget_2 = new QWidget(viewMessagePage);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 180, 341, 61));
        horizontalLayout_view = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_view->setObjectName(QString::fromUtf8("horizontalLayout_view"));
        horizontalLayout_view->setContentsMargins(0, 0, 0, 0);
        label_titleView = new QLabel(layoutWidget_2);
        label_titleView->setObjectName(QString::fromUtf8("label_titleView"));
        QFont font1;
        font1.setPointSize(16);
        label_titleView->setFont(font1);
        label_titleView->setAlignment(Qt::AlignCenter);

        horizontalLayout_view->addWidget(label_titleView);

        comboBox_choices = new QComboBox(layoutWidget_2);
        comboBox_choices->setObjectName(QString::fromUtf8("comboBox_choices"));

        horizontalLayout_view->addWidget(comboBox_choices);

        pushButton_view = new QPushButton(layoutWidget_2);
        pushButton_view->setObjectName(QString::fromUtf8("pushButton_view"));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        pushButton_view->setFont(font2);
        pushButton_view->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        horizontalLayout_view->addWidget(pushButton_view);

        pushButton_back = new QPushButton(viewMessagePage);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(40, 490, 101, 31));
        pushButton_back->setFont(font2);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));
        textEdit_textOutput = new QTextEdit(viewMessagePage);
        textEdit_textOutput->setObjectName(QString::fromUtf8("textEdit_textOutput"));
        textEdit_textOutput->setGeometry(QRect(150, 250, 331, 151));
        textEdit_textOutput->setAutoFillBackground(false);
        label_4 = new QLabel(viewMessagePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 100, 281, 61));
        label_4->setStyleSheet(QString::fromUtf8("font: 20pt \".AppleSystemUIFont\";"));
        stackedWidget_resources->addWidget(viewMessagePage);
        deleteMessagePage = new QWidget();
        deleteMessagePage->setObjectName(QString::fromUtf8("deleteMessagePage"));
        layoutWidget_3 = new QWidget(deleteMessagePage);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(143, 240, 411, 61));
        horizontalLayout_deleteMessage = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_deleteMessage->setObjectName(QString::fromUtf8("horizontalLayout_deleteMessage"));
        horizontalLayout_deleteMessage->setContentsMargins(0, 0, 0, 0);
        label_titleDeleteMessage = new QLabel(layoutWidget_3);
        label_titleDeleteMessage->setObjectName(QString::fromUtf8("label_titleDeleteMessage"));
        label_titleDeleteMessage->setFont(font);
        label_titleDeleteMessage->setAlignment(Qt::AlignCenter);

        horizontalLayout_deleteMessage->addWidget(label_titleDeleteMessage);

        comboBox_choicesDelete = new QComboBox(layoutWidget_3);
        comboBox_choicesDelete->setObjectName(QString::fromUtf8("comboBox_choicesDelete"));

        horizontalLayout_deleteMessage->addWidget(comboBox_choicesDelete);

        pushButton_delete = new QPushButton(layoutWidget_3);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setFont(font2);
        pushButton_delete->setStyleSheet(QString::fromUtf8("background-color:rgb(30,144,255);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));

        horizontalLayout_deleteMessage->addWidget(pushButton_delete);

        pushButton_back3 = new QPushButton(deleteMessagePage);
        pushButton_back3->setObjectName(QString::fromUtf8("pushButton_back3"));
        pushButton_back3->setGeometry(QRect(40, 490, 101, 31));
        pushButton_back3->setFont(font2);
        pushButton_back3->setStyleSheet(QString::fromUtf8("background-color:rgb(220,20,60);\n"
"color:rgb(255,255,255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    padding: 6px;"));
        label_5 = new QLabel(deleteMessagePage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 140, 281, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 20pt \".AppleSystemUIFont\";"));
        stackedWidget_resources->addWidget(deleteMessagePage);
        page_editProfile = new QWidget();
        page_editProfile->setObjectName(QString::fromUtf8("page_editProfile"));
        pushButton_picture = new QPushButton(page_editProfile);
        pushButton_picture->setObjectName(QString::fromUtf8("pushButton_picture"));
        pushButton_picture->setGeometry(QRect(200, 260, 181, 24));
        label_image = new QLabel(page_editProfile);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(220, 60, 141, 121));
        label = new QLabel(page_editProfile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 210, 121, 21));
        stackedWidget_resources->addWidget(page_editProfile);

        gridLayout->addWidget(stackedWidget_resources, 0, 0, 1, 1);


        retranslateUi(ResourcesGui);

        stackedWidget_resources->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(ResourcesGui);
    } // setupUi

    void retranslateUi(QWidget *ResourcesGui)
    {
        ResourcesGui->setWindowTitle(QCoreApplication::translate("ResourcesGui", "Form", nullptr));
        pushButton_profileUpdate->setText(QCoreApplication::translate("ResourcesGui", "Update Profile Photo", nullptr));
        pushButton_changeColor->setText(QCoreApplication::translate("ResourcesGui", "Change Color", nullptr));
        pushButton_createMessage->setText(QCoreApplication::translate("ResourcesGui", "Create Message", nullptr));
        pushButton_viewMessage->setText(QCoreApplication::translate("ResourcesGui", "View Message", nullptr));
        pushButton_deleteMessage->setText(QCoreApplication::translate("ResourcesGui", "Delete Message", nullptr));
        label_2->setText(QCoreApplication::translate("ResourcesGui", "Costumize your exprience with the following resources", nullptr));
        pushButton_saveMessage->setText(QCoreApplication::translate("ResourcesGui", "Save Message", nullptr));
        label_title->setText(QCoreApplication::translate("ResourcesGui", "Title:", nullptr));
        label_text->setText(QCoreApplication::translate("ResourcesGui", "Text:", nullptr));
        pushButton_back2->setText(QCoreApplication::translate("ResourcesGui", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("ResourcesGui", "Write and save your message here", nullptr));
        label_titleView->setText(QCoreApplication::translate("ResourcesGui", "Title:", nullptr));
        pushButton_view->setText(QCoreApplication::translate("ResourcesGui", "View", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ResourcesGui", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("ResourcesGui", "Read your saved messages", nullptr));
        label_titleDeleteMessage->setText(QCoreApplication::translate("ResourcesGui", "Title:", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("ResourcesGui", "Delete", nullptr));
        pushButton_back3->setText(QCoreApplication::translate("ResourcesGui", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("ResourcesGui", "Delete undesriable message", nullptr));
        pushButton_picture->setText(QCoreApplication::translate("ResourcesGui", "Uptade Picture", nullptr));
        label_image->setText(QString());
        label->setText(QCoreApplication::translate("ResourcesGui", "Update Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResourcesGui: public Ui_ResourcesGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCESGUI_H
