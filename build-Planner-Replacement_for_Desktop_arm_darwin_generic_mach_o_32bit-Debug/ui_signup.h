/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
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

class Ui_signup
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QFrame *Mainframe;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *Left_side;
    QFrame *signup_frame;
    QVBoxLayout *verticalLayout;
    QLabel *title;
    QVBoxLayout *names;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *fname;
    QLineEdit *lname;
    QVBoxLayout *us;
    QLabel *label_3;
    QLineEdit *username;
    QVBoxLayout *ps;
    QLabel *label_4;
    QLineEdit *password;
    QVBoxLayout *da;
    QLabel *label_6;
    QDateEdit *dob;
    QVBoxLayout *em;
    QLabel *label_5;
    QLineEdit *email;
    QSpacerItem *verticalSpacer_2;
    QPushButton *regbut;
    QLabel *label_7;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(500, 770);
        signup->setMinimumSize(QSize(400, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        signup->setWindowIcon(icon);
        signup->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 37, 42);\n"
"font: 14pt \"Foco\";\n"
"color:black;\n"
"padding:5px;"));
        centralwidget = new QWidget(signup);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        Mainframe = new QFrame(centralwidget);
        Mainframe->setObjectName(QString::fromUtf8("Mainframe"));
        Mainframe->setMinimumSize(QSize(0, 0));
        Mainframe->setStyleSheet(QString::fromUtf8("border-radius:50px;"));
        Mainframe->setFrameShape(QFrame::StyledPanel);
        Mainframe->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(Mainframe);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Left_side = new QVBoxLayout();
        Left_side->setObjectName(QString::fromUtf8("Left_side"));
        signup_frame = new QFrame(Mainframe);
        signup_frame->setObjectName(QString::fromUtf8("signup_frame"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Foco")});
        font.setBold(false);
        font.setItalic(false);
        signup_frame->setFont(font);
        signup_frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font:18px;\n"
""));
        signup_frame->setFrameShape(QFrame::StyledPanel);
        signup_frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(signup_frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title = new QLabel(signup_frame);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMinimumSize(QSize(0, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FONTSPRING DEMO - Pontiac Black")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        title->setFont(font1);
        title->setStyleSheet(QString::fromUtf8("font: 700 25pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"color:#34efa3;"));

        verticalLayout->addWidget(title);

        names = new QVBoxLayout();
        names->setObjectName(QString::fromUtf8("names"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(signup_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setSizeIncrement(QSize(0, 30));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label_2);

        label = new QLabel(signup_frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setSizeIncrement(QSize(0, 30));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(label);


        names->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        fname = new QLineEdit(signup_frame);
        fname->setObjectName(QString::fromUtf8("fname"));
        fname->setMinimumSize(QSize(0, 50));
        fname->setFont(font);
        fname->setStyleSheet(QString::fromUtf8("#fname{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#fname:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        fname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(fname);

        lname = new QLineEdit(signup_frame);
        lname->setObjectName(QString::fromUtf8("lname"));
        lname->setMinimumSize(QSize(0, 50));
        lname->setFont(font);
        lname->setStyleSheet(QString::fromUtf8("#lname{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#lname:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        lname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lname);


        names->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(names);

        us = new QVBoxLayout();
        us->setObjectName(QString::fromUtf8("us"));
        label_3 = new QLabel(signup_frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        us->addWidget(label_3);

        username = new QLineEdit(signup_frame);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 50));
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8("#username{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#username:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        us->addWidget(username);


        verticalLayout->addLayout(us);

        ps = new QVBoxLayout();
        ps->setObjectName(QString::fromUtf8("ps"));
        label_4 = new QLabel(signup_frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        ps->addWidget(label_4);

        password = new QLineEdit(signup_frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 50));
        password->setFont(font);
        password->setStyleSheet(QString::fromUtf8("#password{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#password:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        ps->addWidget(password);


        verticalLayout->addLayout(ps);

        da = new QVBoxLayout();
        da->setObjectName(QString::fromUtf8("da"));
        label_6 = new QLabel(signup_frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        da->addWidget(label_6);

        dob = new QDateEdit(signup_frame);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setStyleSheet(QString::fromUtf8("#dob{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#dob:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        dob->setDateTime(QDateTime(QDate(1980, 1, 1), QTime(0, 0, 0)));

        da->addWidget(dob);


        verticalLayout->addLayout(da);

        em = new QVBoxLayout();
        em->setObjectName(QString::fromUtf8("em"));
        label_5 = new QLabel(signup_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        em->addWidget(label_5);

        email = new QLineEdit(signup_frame);
        email->setObjectName(QString::fromUtf8("email"));
        email->setMinimumSize(QSize(0, 50));
        email->setFont(font);
        email->setStyleSheet(QString::fromUtf8("#email{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#email:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        email->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        em->addWidget(email);


        verticalLayout->addLayout(em);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        regbut = new QPushButton(signup_frame);
        regbut->setObjectName(QString::fromUtf8("regbut"));
        regbut->setMinimumSize(QSize(0, 50));
        regbut->setFont(font);
        regbut->setStyleSheet(QString::fromUtf8("#regbut{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:10px;\n"
"}\n"
"#regbut:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"font:20px;\n"
"}"));

        verticalLayout->addWidget(regbut);

        label_7 = new QLabel(signup_frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("margin-bottom:15px;"));

        verticalLayout->addWidget(label_7);


        Left_side->addWidget(signup_frame);


        verticalLayout_2->addLayout(Left_side);


        horizontalLayout_2->addWidget(Mainframe);

        signup->setCentralWidget(centralwidget);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Sign Up", nullptr));
        title->setText(QCoreApplication::translate("signup", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">Sign up</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "First Name", nullptr));
        label->setText(QCoreApplication::translate("signup", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Password", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Date of Birth", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Email ID", nullptr));
        regbut->setText(QCoreApplication::translate("signup", "Create Account", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
