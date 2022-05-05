/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *loginwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QFrame *loginframe;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *bigtxt;
    QLabel *usr;
    QLineEdit *username;
    QLabel *pswd;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QPushButton *loginbutt;
    QPushButton *signupbut;
    QSpacerItem *verticalSpacer_2;
    QLabel *textdis;
    QFrame *frame;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(1280, 720);
        Login->setMinimumSize(QSize(1280, 720));
        Login->setBaseSize(QSize(1920, 1080));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"color:black;\n"
"padding:15px"));
        loginwidget = new QWidget(Login);
        loginwidget->setObjectName(QString::fromUtf8("loginwidget"));
        loginwidget->setMinimumSize(QSize(500, 500));
        loginwidget->setMaximumSize(QSize(1920, 1080));
        loginwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 37, 42);"));
        horizontalLayout = new QHBoxLayout(loginwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_3 = new QFrame(loginwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(7);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setStyleSheet(QString::fromUtf8("border-image:url(:/img sr/log.png);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        horizontalLayout->addWidget(frame_3);

        loginframe = new QFrame(loginwidget);
        loginframe->setObjectName(QString::fromUtf8("loginframe"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(5);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginframe->sizePolicy().hasHeightForWidth());
        loginframe->setSizePolicy(sizePolicy1);
        loginframe->setMinimumSize(QSize(400, 500));
        loginframe->setMaximumSize(QSize(16777215, 16777215));
        loginframe->setBaseSize(QSize(400, 500));
        loginframe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Foco\";\n"
"border-radius:50px;\n"
"border:0px;\n"
""));
        loginframe->setFrameShape(QFrame::StyledPanel);
        loginframe->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(loginframe);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        bigtxt = new QLabel(loginframe);
        bigtxt->setObjectName(QString::fromUtf8("bigtxt"));
        bigtxt->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"border:0px;\n"
"font: 700 20pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"color: #34efa3;"));

        verticalLayout_3->addWidget(bigtxt);

        usr = new QLabel(loginframe);
        usr->setObjectName(QString::fromUtf8("usr"));
        usr->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"border:0px;"));

        verticalLayout_3->addWidget(usr);

        username = new QLineEdit(loginframe);
        username->setObjectName(QString::fromUtf8("username"));
        username->setStyleSheet(QString::fromUtf8("#username{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#username:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_3->addWidget(username);

        pswd = new QLabel(loginframe);
        pswd->setObjectName(QString::fromUtf8("pswd"));
        pswd->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"border:0px;"));

        verticalLayout_3->addWidget(pswd);

        password = new QLineEdit(loginframe);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("#password{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#password:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(password);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        loginbutt = new QPushButton(loginframe);
        loginbutt->setObjectName(QString::fromUtf8("loginbutt"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Foco")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        loginbutt->setFont(font);
        loginbutt->setStyleSheet(QString::fromUtf8("#loginbutt{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#loginbutt:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"font:20px;\n"
"}"));

        verticalLayout_3->addWidget(loginbutt);

        signupbut = new QPushButton(loginframe);
        signupbut->setObjectName(QString::fromUtf8("signupbut"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Foco")});
        font1.setBold(false);
        font1.setItalic(false);
        signupbut->setFont(font1);
        signupbut->setStyleSheet(QString::fromUtf8("border:0px;\n"
"font:16px;\n"
""));

        verticalLayout_3->addWidget(signupbut);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        textdis = new QLabel(loginframe);
        textdis->setObjectName(QString::fromUtf8("textdis"));

        verticalLayout_3->addWidget(textdis, 0, Qt::AlignHCenter);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(loginframe);

        frame = new QFrame(loginwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        Login->setCentralWidget(loginwidget);

        retranslateUi(Login);
        QObject::connect(password, &QLineEdit::returnPressed, loginbutt, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Kaizen", nullptr));
        bigtxt->setText(QCoreApplication::translate("Login", "Login", nullptr));
        usr->setText(QCoreApplication::translate("Login", "Username", nullptr));
        pswd->setText(QCoreApplication::translate("Login", "Password", nullptr));
        loginbutt->setText(QCoreApplication::translate("Login", "Login", nullptr));
        signupbut->setText(QCoreApplication::translate("Login", "Sign up from here", nullptr));
        textdis->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
