/********************************************************************************
** Form generated from reading UI file 'allplans.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLPLANS_H
#define UI_ALLPLANS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_allplans
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QListView *listView;
    QVBoxLayout *verticalLayout;
    QLineEdit *editingPlan;
    QHBoxLayout *horizontalLayout;
    QDateEdit *datecome;
    QTimeEdit *timecome;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *txterr;

    void setupUi(QDialog *allplans)
    {
        if (allplans->objectName().isEmpty())
            allplans->setObjectName(QString::fromUtf8("allplans"));
        allplans->resize(500, 720);
        allplans->setMinimumSize(QSize(400, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        allplans->setWindowIcon(icon);
        allplans->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 37, 42);\n"
"color:black;\n"
"padding:5px;\n"
"font: 12pt \"Foco\";"));
        verticalLayout_3 = new QVBoxLayout(allplans);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(allplans);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border:0px;\n"
"border-radius:40px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listView = new QListView(frame_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:40px;\n"
"font:24px;"));

        verticalLayout_2->addWidget(listView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editingPlan = new QLineEdit(frame_2);
        editingPlan->setObjectName(QString::fromUtf8("editingPlan"));
        editingPlan->setMinimumSize(QSize(0, 40));
        editingPlan->setBaseSize(QSize(0, 40));
        editingPlan->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;"));

        verticalLayout->addWidget(editingPlan);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        datecome = new QDateEdit(frame_2);
        datecome->setObjectName(QString::fromUtf8("datecome"));
        datecome->setMinimumSize(QSize(0, 40));
        datecome->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;"));

        horizontalLayout->addWidget(datecome);

        timecome = new QTimeEdit(frame_2);
        timecome->setObjectName(QString::fromUtf8("timecome"));
        timecome->setMinimumSize(QSize(0, 40));
        timecome->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;"));

        horizontalLayout->addWidget(timecome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"#pushButton{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#pushButton:hover{\n"
"background-color:#22252a;\n"
"font:18px;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#pushButton_3:hover{\n"
"background-color:#22252a;\n"
"font:18px;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_2);

        txterr = new QLabel(frame_2);
        txterr->setObjectName(QString::fromUtf8("txterr"));
        txterr->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(txterr, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame_2);


        retranslateUi(allplans);

        QMetaObject::connectSlotsByName(allplans);
    } // setupUi

    void retranslateUi(QDialog *allplans)
    {
        allplans->setWindowTitle(QCoreApplication::translate("allplans", "All Plans", nullptr));
        pushButton->setText(QCoreApplication::translate("allplans", "Update", nullptr));
        pushButton_3->setText(QCoreApplication::translate("allplans", "Delete", nullptr));
        txterr->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class allplans: public Ui_allplans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLPLANS_H
