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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *loginframe;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *usr;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_2;
    QLabel *pass;
    QLineEdit *password;
    QPushButton *loginbutt;
    QPushButton *signupbut;
    QSpacerItem *verticalSpacer_2;
    QLabel *textdis;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(1463, 914);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-color:rgb(128, 85, 255)\n"
"}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loginframe = new QFrame(centralwidget);
        loginframe->setObjectName(QString::fromUtf8("loginframe"));
        loginframe->setStyleSheet(QString::fromUtf8("#loginframe{\n"
"background-color:rgb(235, 235, 235);\n"
"border-radius:40px;\n"
"max-width:440px;\n"
"max-height:440px;\n"
"}\n"
"\n"
""));
        loginframe->setFrameShape(QFrame::StyledPanel);
        loginframe->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(loginframe);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        usr = new QLabel(loginframe);
        usr->setObjectName(QString::fromUtf8("usr"));
        usr->setStyleSheet(QString::fromUtf8("#usr{\n"
"font-weight:bold;\n"
"color:rgb(128, 85, 255);\n"
"font-size:30px;\n"
"}"));

        verticalLayout->addWidget(usr);

        username = new QLineEdit(loginframe);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("#username{\n"
"border:1px solid transparent;\n"
"border-radius:10px;\n"
"padding:12px;\n"
"margin-bottom:12px;\n"
"}"));

        verticalLayout->addWidget(username);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pass = new QLabel(loginframe);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setStyleSheet(QString::fromUtf8("#pass{\n"
"\n"
"font-weight:bold;\n"
"color:rgb(128, 85, 255);\n"
"font-size:30px;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(pass);

        password = new QLineEdit(loginframe);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("#password{\n"
"border:1px solid transparent;\n"
"border-radius:10px;\n"
"padding:12px;\n"
"}"));

        verticalLayout_2->addWidget(password);


        verticalLayout_3->addLayout(verticalLayout_2);

        loginbutt = new QPushButton(loginframe);
        loginbutt->setObjectName(QString::fromUtf8("loginbutt"));
        loginbutt->setStyleSheet(QString::fromUtf8("#loginbutt{\n"
"border-radius:10px;\n"
"border:1px solid rgb(173, 173, 173);\n"
"padding:6px;\n"
"margin-top:15px;\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"color:rgb(128, 85, 255);\n"
"}\n"
"\n"
"#loginbutt:hover{\n"
"background-color:rgb(128, 85, 255);\n"
"color:white;\n"
"}"));

        verticalLayout_3->addWidget(loginbutt);

        signupbut = new QPushButton(loginframe);
        signupbut->setObjectName(QString::fromUtf8("signupbut"));
        signupbut->setStyleSheet(QString::fromUtf8("#signupbut{\n"
"padding-top:20px;\n"
"color:rgb(128, 85, 255);\n"
"font-weight:bold;\n"
"font-size:20px;\n"
"border:1px solid transparent;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(signupbut);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        textdis = new QLabel(loginframe);
        textdis->setObjectName(QString::fromUtf8("textdis"));
        textdis->setStyleSheet(QString::fromUtf8("margin-bottom:30px;"));

        verticalLayout_3->addWidget(textdis, 0, Qt::AlignHCenter);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout->addWidget(loginframe);

        login->setCentralWidget(centralwidget);

        retranslateUi(login);
        QObject::connect(password, &QLineEdit::returnPressed, loginbutt, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Kaizen", nullptr));
        usr->setText(QCoreApplication::translate("login", "Username", nullptr));
        pass->setText(QCoreApplication::translate("login", "Password", nullptr));
        loginbutt->setText(QCoreApplication::translate("login", "Login", nullptr));
        signupbut->setText(QCoreApplication::translate("login", "Sign up from here", nullptr));
        textdis->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
