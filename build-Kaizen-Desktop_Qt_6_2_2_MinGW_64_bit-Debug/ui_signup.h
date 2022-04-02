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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QGridLayout *gridLayout;
    QFrame *mainframe;
    QGridLayout *gridLayout_2;
    QFrame *photobox;
    QGridLayout *gridLayout_3;
    QFrame *text;
    QFrame *photo;
    QFrame *detailsbox;
    QHBoxLayout *horizontalLayout_2;
    QFrame *details;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout;
    QLabel *usr;
    QLineEdit *user;
    QVBoxLayout *verticalLayout_10;
    QLabel *ps;
    QLineEdit *pass;
    QVBoxLayout *verticalLayout_12;
    QLabel *fn;
    QLineEdit *fname;
    QVBoxLayout *verticalLayout_11;
    QLabel *ln;
    QLineEdit *lname;
    QVBoxLayout *verticalLayout_14;
    QLabel *db;
    QDateEdit *DOB;
    QVBoxLayout *verticalLayout_13;
    QLabel *em;
    QLineEdit *emailID;
    QPushButton *regBut;
    QFrame *frame_2;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(1098, 763);
        gridLayout = new QGridLayout(signup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mainframe = new QFrame(signup);
        mainframe->setObjectName(QString::fromUtf8("mainframe"));
        mainframe->setStyleSheet(QString::fromUtf8("#mainframe{\n"
"\n"
"background-color:rgb(141, 96, 255);\n"
"border-radius:20px;\n"
"\n"
"}\n"
"\n"
"#photobox{\n"
"padding:20px;\n"
"background-color:rgb(114, 71, 255);\n"
"border-radius:20px;\n"
"}\n"
"\n"
"#detailsbox{\n"
"padding:20px;\n"
"}\n"
"\n"
"#details{\n"
"border-radius:20px;\n"
"background-color:white;\n"
"\n"
"}\n"
"\n"
"#frame{\n"
"padding:30px;\n"
"}\n"
"\n"
"#usr,#db,#ps,#ln,#fn,#em{\n"
"font-size:20px;\n"
"font-weight:bold;\n"
"margin-top:15px;\n"
"}\n"
"\n"
"#regBut{\n"
"border:1px solid black;\n"
"padding:7px;\n"
"font-size:16px;\n"
"margin-top:30px;\n"
"}\n"
""));
        mainframe->setFrameShape(QFrame::StyledPanel);
        mainframe->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(mainframe);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        photobox = new QFrame(mainframe);
        photobox->setObjectName(QString::fromUtf8("photobox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(photobox->sizePolicy().hasHeightForWidth());
        photobox->setSizePolicy(sizePolicy);
        photobox->setFrameShape(QFrame::StyledPanel);
        photobox->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(photobox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        text = new QFrame(photobox);
        text->setObjectName(QString::fromUtf8("text"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(text->sizePolicy().hasHeightForWidth());
        text->setSizePolicy(sizePolicy1);
        text->setFrameShape(QFrame::StyledPanel);
        text->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(text, 0, 0, 1, 1);

        photo = new QFrame(photobox);
        photo->setObjectName(QString::fromUtf8("photo"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(photo->sizePolicy().hasHeightForWidth());
        photo->setSizePolicy(sizePolicy2);
        photo->setFrameShape(QFrame::StyledPanel);
        photo->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(photo, 1, 0, 1, 1);


        gridLayout_2->addWidget(photobox, 0, 0, 1, 1);

        detailsbox = new QFrame(mainframe);
        detailsbox->setObjectName(QString::fromUtf8("detailsbox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(detailsbox->sizePolicy().hasHeightForWidth());
        detailsbox->setSizePolicy(sizePolicy3);
        detailsbox->setFrameShape(QFrame::StyledPanel);
        detailsbox->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(detailsbox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        details = new QFrame(detailsbox);
        details->setObjectName(QString::fromUtf8("details"));
        details->setFrameShape(QFrame::StyledPanel);
        details->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(details);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(details);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(4);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usr = new QLabel(frame);
        usr->setObjectName(QString::fromUtf8("usr"));

        verticalLayout->addWidget(usr);

        user = new QLineEdit(frame);
        user->setObjectName(QString::fromUtf8("user"));

        verticalLayout->addWidget(user);


        verticalLayout_15->addLayout(verticalLayout);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        ps = new QLabel(frame);
        ps->setObjectName(QString::fromUtf8("ps"));

        verticalLayout_10->addWidget(ps);

        pass = new QLineEdit(frame);
        pass->setObjectName(QString::fromUtf8("pass"));

        verticalLayout_10->addWidget(pass);


        verticalLayout_15->addLayout(verticalLayout_10);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        fn = new QLabel(frame);
        fn->setObjectName(QString::fromUtf8("fn"));

        verticalLayout_12->addWidget(fn);

        fname = new QLineEdit(frame);
        fname->setObjectName(QString::fromUtf8("fname"));

        verticalLayout_12->addWidget(fname);


        verticalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        ln = new QLabel(frame);
        ln->setObjectName(QString::fromUtf8("ln"));

        verticalLayout_11->addWidget(ln);

        lname = new QLineEdit(frame);
        lname->setObjectName(QString::fromUtf8("lname"));

        verticalLayout_11->addWidget(lname);


        verticalLayout_15->addLayout(verticalLayout_11);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        db = new QLabel(frame);
        db->setObjectName(QString::fromUtf8("db"));

        verticalLayout_14->addWidget(db);

        DOB = new QDateEdit(frame);
        DOB->setObjectName(QString::fromUtf8("DOB"));
        DOB->setStyleSheet(QString::fromUtf8("padding:10px;\n"
"font-size:16px;"));

        verticalLayout_14->addWidget(DOB);


        verticalLayout_15->addLayout(verticalLayout_14);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        em = new QLabel(frame);
        em->setObjectName(QString::fromUtf8("em"));

        verticalLayout_13->addWidget(em);

        emailID = new QLineEdit(frame);
        emailID->setObjectName(QString::fromUtf8("emailID"));

        verticalLayout_13->addWidget(emailID);


        verticalLayout_15->addLayout(verticalLayout_13);

        regBut = new QPushButton(frame);
        regBut->setObjectName(QString::fromUtf8("regBut"));

        verticalLayout_15->addWidget(regBut);


        gridLayout_5->addLayout(verticalLayout_15, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 1, 0, 1, 1);

        frame_2 = new QFrame(details);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(frame_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(details);


        gridLayout_2->addWidget(detailsbox, 0, 1, 1, 1);


        gridLayout->addWidget(mainframe, 0, 0, 1, 1);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        usr->setText(QCoreApplication::translate("signup", "Username", nullptr));
        ps->setText(QCoreApplication::translate("signup", "Password", nullptr));
        fn->setText(QCoreApplication::translate("signup", "First Name", nullptr));
        ln->setText(QCoreApplication::translate("signup", "Last Name", nullptr));
        db->setText(QCoreApplication::translate("signup", "Date of Birth", nullptr));
        em->setText(QCoreApplication::translate("signup", "Email ID", nullptr));
        regBut->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
