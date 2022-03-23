/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *signupframe;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QDateEdit *dob;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *l_name;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QLineEdit *email;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *f_name;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QLineEdit *phone;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *password;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(626, 768);
        horizontalLayout = new QHBoxLayout(signup);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        signupframe = new QFrame(signup);
        signupframe->setObjectName(QString::fromUtf8("signupframe"));
        signupframe->setStyleSheet(QString::fromUtf8("#signupframe{\n"
"background-color:rgb(192, 243, 198)\n"
"}"));
        signupframe->setFrameShape(QFrame::StyledPanel);
        signupframe->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(signupframe);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 610, 75, 24));
        layoutWidget = new QWidget(signupframe);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 440, 83, 44));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        dob = new QDateEdit(layoutWidget);
        dob->setObjectName(QString::fromUtf8("dob"));

        verticalLayout_5->addWidget(dob);

        layoutWidget1 = new QWidget(signupframe);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(310, 70, 135, 46));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        l_name = new QLineEdit(layoutWidget1);
        l_name->setObjectName(QString::fromUtf8("l_name"));

        verticalLayout_2->addWidget(l_name);

        layoutWidget2 = new QWidget(signupframe);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(390, 170, 135, 46));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);

        email = new QLineEdit(layoutWidget2);
        email->setObjectName(QString::fromUtf8("email"));

        verticalLayout_8->addWidget(email);

        layoutWidget3 = new QWidget(signupframe);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 180, 135, 46));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        f_name = new QLineEdit(layoutWidget3);
        f_name->setObjectName(QString::fromUtf8("f_name"));

        verticalLayout->addWidget(f_name);

        layoutWidget4 = new QWidget(signupframe);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(60, 330, 135, 46));
        verticalLayout_9 = new QVBoxLayout(layoutWidget4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_9->addWidget(label_9);

        phone = new QLineEdit(layoutWidget4);
        phone->setObjectName(QString::fromUtf8("phone"));

        verticalLayout_9->addWidget(phone);

        layoutWidget5 = new QWidget(signupframe);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(330, 450, 137, 100));
        verticalLayout_10 = new QVBoxLayout(layoutWidget5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        username = new QLineEdit(layoutWidget5);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout_3->addWidget(username);


        verticalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        password = new QLineEdit(layoutWidget5);
        password->setObjectName(QString::fromUtf8("password"));

        verticalLayout_4->addWidget(password);


        verticalLayout_10->addLayout(verticalLayout_4);


        horizontalLayout->addWidget(signupframe);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "Register", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Date of Birth", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Last Name", nullptr));
        label_8->setText(QCoreApplication::translate("signup", "Email ID", nullptr));
        label->setText(QCoreApplication::translate("signup", "First Name", nullptr));
        label_9->setText(QCoreApplication::translate("signup", "Phone number", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
