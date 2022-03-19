/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *loginframe;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QWidget *widget;
    QWidget *widget_5;
    QWidget *widget_2;
    QWidget *widget_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1132, 752);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        loginframe = new QFrame(centralwidget);
        loginframe->setObjectName(QString::fromUtf8("loginframe"));
        loginframe->setStyleSheet(QString::fromUtf8("#loginframe{\n"
"background-color:rgb(205, 255, 218);\n"
"border-radius:10px;\n"
"}"));
        loginframe->setFrameShape(QFrame::StyledPanel);
        loginframe->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(loginframe);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_3 = new QWidget(loginframe);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"background-color:blue;\n"
"border-radius:30px;\n"
"}"));

        gridLayout_2->addWidget(widget_3, 1, 0, 2, 1);

        widget = new QWidget(loginframe);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"background-color:black;\n"
"border-radius:30px;\n"
"}"));

        gridLayout_2->addWidget(widget, 0, 1, 1, 1);

        widget_5 = new QWidget(loginframe);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5{\n"
"background-color:red;\n"
"border-radius:30px;\n"
"}"));

        gridLayout_2->addWidget(widget_5, 0, 0, 1, 1);

        widget_2 = new QWidget(loginframe);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"background-color:red;\n"
"border-radius:30px;\n"
"}"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(70, 90, 401, 271));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4{\n"
"background-color:pink;\n"
"border-radius:30px;\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_2, 1, 1, 2, 1);


        gridLayout->addWidget(loginframe, 0, 1, 1, 1);

        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
