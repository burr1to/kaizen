/********************************************************************************
** Form generated from reading UI file 'budget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_H
#define UI_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Budget
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QFrame *MainFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QLabel *label_7;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QDateEdit *da;
    QPushButton *but;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_7;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_1;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_9;
    QFrame *frame_8;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_6;
    QFrame *frame_9;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_8;
    QFrame *frame_6;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_10;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_8;

    void setupUi(QMainWindow *Budget)
    {
        if (Budget->objectName().isEmpty())
            Budget->setObjectName(QString::fromUtf8("Budget"));
        Budget->resize(1238, 830);
        Budget->setMinimumSize(QSize(992, 640));
        Budget->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 30px;\n"
"background:white;"));
        centralwidget = new QWidget(Budget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: none;"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        MainFrame = new QFrame(centralwidget);
        MainFrame->setObjectName(QString::fromUtf8("MainFrame"));
        MainFrame->setStyleSheet(QString::fromUtf8("border: 1px solid black; \n"
"border-radius: 30px;"));
        MainFrame->setFrameShape(QFrame::StyledPanel);
        MainFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(MainFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_3 = new QFrame(MainFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color: rgb(255, 255, 255);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 142, 301));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;\n"
""));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;\n"
""));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;\n"
""));

        verticalLayout_5->addWidget(label_11);


        horizontalLayout->addWidget(frame_3);

        frame = new QFrame(MainFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QFont font1;
        font1.setPointSize(80);
        font1.setBold(false);
        frame_2->setFont(font1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(29, 20, 131, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;\n"
""));
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(150, 140, 241, 141));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        da = new QDateEdit(layoutWidget1);
        da->setObjectName(QString::fromUtf8("da"));

        verticalLayout_6->addWidget(da);

        but = new QPushButton(layoutWidget1);
        but->setObjectName(QString::fromUtf8("but"));

        verticalLayout_6->addWidget(but);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 50, -1, 50);
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(frame_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setPointSize(25);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: black;\n"
"border: none;\n"
"\n"
""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_1 = new QPushButton(frame_7);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setMinimumSize(QSize(61, 61));
        pushButton_1->setMaximumSize(QSize(61, 61));
        QFont font3;
        font3.setPointSize(50);
        pushButton_1->setFont(font3);
        pushButton_1->setStyleSheet(QString::fromUtf8("border-radius: 30%;\n"
"padding: 0,8;\n"
"color: black;"));

        horizontalLayout_4->addWidget(pushButton_1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_9 = new QPushButton(frame_7);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:  black;\n"
""));

        horizontalLayout_4->addWidget(pushButton_9);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_7);

        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        gridLayout_5 = new QGridLayout(frame_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: black;\n"
"border: none;\n"
"\n"
""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_3 = new QPushButton(frame_8);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(61, 61));
        pushButton_3->setMaximumSize(QSize(61, 61));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 30%;\n"
"padding: 0,8;\n"
"color: black;"));

        horizontalLayout_5->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_6 = new QPushButton(frame_8);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:  black;\n"
""));

        horizontalLayout_5->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_8);

        frame_9 = new QFrame(frame_5);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: black;\n"
"border: none;\n"
"\n"
""));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_5 = new QPushButton(frame_9);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(61, 61));
        pushButton_5->setMaximumSize(QSize(61, 61));
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-radius: 30%;\n"
"padding: 0,8;\n"
"color: black"));

        horizontalLayout_6->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButton_8 = new QPushButton(frame_9);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:  black;\n"
""));

        horizontalLayout_6->addWidget(pushButton_8);


        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_9);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("text-align: center;\n"
"color: black;\n"
"border: none;\n"
"\n"
""));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_7 = new QPushButton(frame_6);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(61, 61));
        pushButton_7->setMaximumSize(QSize(61, 61));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius: 30%;\n"
"padding: 0,8;\n"
"color: black;"));

        horizontalLayout_3->addWidget(pushButton_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_10 = new QPushButton(frame_6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("border: none;\n"
"color:  black;\n"
""));

        horizontalLayout_3->addWidget(pushButton_10);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_6);


        gridLayout->addWidget(frame_5, 2, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color: none;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(25, -1, 40, -1);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
"border: none;\n"
""));

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(368, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(false);
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: Black;\n"
"border: none;"));

        horizontalLayout_7->addWidget(label_6);


        gridLayout->addWidget(frame_4, 0, 0, 1, 2);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 338, 675));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 30, 231, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 1, 2, 1);

        gridLayout->setRowStretch(0, 4);
        gridLayout->setRowStretch(1, 15);
        gridLayout->setRowStretch(2, 15);
        gridLayout->setColumnStretch(0, 10);
        gridLayout->setColumnStretch(1, 5);

        horizontalLayout->addWidget(frame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);

        gridLayout_2->addWidget(MainFrame, 0, 0, 1, 1);

        Budget->setCentralWidget(centralwidget);

        retranslateUi(Budget);

        QMetaObject::connectSlotsByName(Budget);
    } // setupUi

    void retranslateUi(QMainWindow *Budget)
    {
        Budget->setWindowTitle(QCoreApplication::translate("Budget", "Budget", nullptr));
        label_9->setText(QCoreApplication::translate("Budget", "Dashboard", nullptr));
        label_10->setText(QCoreApplication::translate("Budget", "Home", nullptr));
        label_11->setText(QCoreApplication::translate("Budget", "About", nullptr));
        label_7->setText(QCoreApplication::translate("Budget", "Expenses", nullptr));
        but->setText(QCoreApplication::translate("Budget", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("Budget", "Food", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Budget", "+", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Budget", "More", nullptr));
        label_4->setText(QCoreApplication::translate("Budget", "Rent", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Budget", "+", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Budget", "More", nullptr));
        label_5->setText(QCoreApplication::translate("Budget", "Stationery", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Budget", "+", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Budget", "More", nullptr));
        label_2->setText(QCoreApplication::translate("Budget", "Other", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Budget", "+", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Budget", "More", nullptr));
        label->setText(QCoreApplication::translate("Budget", "Dashboard", nullptr));
        label_6->setText(QCoreApplication::translate("Budget", "Hello Stranger!", nullptr));
        label_8->setText(QCoreApplication::translate("Budget", "Recent Expenses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Budget: public Ui_Budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
