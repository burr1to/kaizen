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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *foodex;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QLabel *tot;
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
    QLabel *label_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_7;
    QLabel *label_8;
    QTableView *expta;

    void setupUi(QMainWindow *Budget)
    {
        if (Budget->objectName().isEmpty())
            Budget->setObjectName(QString::fromUtf8("Budget"));
        Budget->resize(1280, 720);
        Budget->setMinimumSize(QSize(1280, 720));
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
"border-radius: 25px;\n"
"background-color:#B1ccf2;"));
        MainFrame->setFrameShape(QFrame::StyledPanel);
        MainFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(MainFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_3 = new QFrame(MainFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"background-color:#B1ccf2;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 151, 271));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"padding: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 171, 255);\n"
"}"));

        verticalLayout_5->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"padding: 20px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(0, 171, 255);\n"
"}"));

        verticalLayout_5->addWidget(pushButton_2);


        horizontalLayout->addWidget(frame_3);

        frame = new QFrame(MainFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color:#DDE6F4;"));
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
        frame_2->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);\n"
"border: none;\n"
"color: black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(30, -1, -1, -1);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font2;
        font2.setPointSize(22);
        font2.setBold(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;\n"
""));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        label_9->setFont(font3);

        horizontalLayout_8->addWidget(label_9);

        foodex = new QLabel(frame_2);
        foodex->setObjectName(QString::fromUtf8("foodex"));
        QFont font4;
        font4.setBold(true);
        foodex->setFont(font4);

        horizontalLayout_8->addWidget(foodex);

        horizontalLayout_8->setStretch(0, 2);
        horizontalLayout_8->setStretch(1, 5);

        gridLayout_8->addLayout(horizontalLayout_8, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);

        horizontalLayout_9->addWidget(label_11);

        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font4);

        horizontalLayout_9->addWidget(label_14);

        horizontalLayout_9->setStretch(0, 2);
        horizontalLayout_9->setStretch(1, 5);

        gridLayout_8->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_10->addWidget(label_12);

        label_15 = new QLabel(frame_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font4);

        horizontalLayout_10->addWidget(label_15);

        horizontalLayout_10->setStretch(0, 2);
        horizontalLayout_10->setStretch(1, 5);

        gridLayout_8->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        horizontalLayout_11->addWidget(label_13);

        label_16 = new QLabel(frame_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font4);

        horizontalLayout_11->addWidget(label_16);

        horizontalLayout_11->setStretch(0, 2);
        horizontalLayout_11->setStretch(1, 5);

        gridLayout_8->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_17 = new QLabel(frame_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        label_17->setFont(font5);
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_17);

        tot = new QLabel(frame_2);
        tot->setObjectName(QString::fromUtf8("tot"));
        tot->setFont(font3);

        horizontalLayout_12->addWidget(tot);

        horizontalLayout_12->setStretch(0, 10);
        horizontalLayout_12->setStretch(1, 2);

        gridLayout_8->addLayout(horizontalLayout_12, 5, 0, 1, 1);


        gridLayout->addWidget(frame_2, 1, 0, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("background: rgb(248, 248, 248);\n"
"border: none;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 50, -1, 50);
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(frame_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font6;
        font6.setPointSize(25);
        label_3->setFont(font6);
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
        QFont font7;
        font7.setPointSize(50);
        pushButton_1->setFont(font7);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255)\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/Image/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_1->setIcon(icon);
        pushButton_1->setIconSize(QSize(50, 50));

        horizontalLayout_4->addWidget(pushButton_1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_9 = new QPushButton(frame_7);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/Image/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon1);
        pushButton_9->setIconSize(QSize(40, 40));

        horizontalLayout_4->addWidget(pushButton_9);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_7);

        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        gridLayout_5 = new QGridLayout(frame_8);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font6);
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
        pushButton_3->setFont(font7);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(209, 243, 255);\n"
"}\n"
""));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(50, 50));

        horizontalLayout_5->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_6 = new QPushButton(frame_8);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}"));
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(40, 40));

        horizontalLayout_5->addWidget(pushButton_6);


        verticalLayout_3->addLayout(horizontalLayout_5);


        gridLayout_5->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_8);

        frame_9 = new QFrame(frame_5);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_9);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font6);
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
        pushButton_5->setFont(font7);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}\n"
""));
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(50, 50));

        horizontalLayout_6->addWidget(pushButton_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButton_8 = new QPushButton(frame_9);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}"));
        pushButton_8->setIcon(icon1);
        pushButton_8->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButton_8);


        verticalLayout_4->addLayout(horizontalLayout_6);


        gridLayout_6->addLayout(verticalLayout_4, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_9);

        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("background: white;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font6);
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
        pushButton_7->setFont(font7);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}\n"
""));
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(50, 50));

        horizontalLayout_3->addWidget(pushButton_7);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_10 = new QPushButton(frame_6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(209, 243, 255);\n"
"}"));
        pushButton_10->setIcon(icon1);
        pushButton_10->setIconSize(QSize(40, 40));

        horizontalLayout_3->addWidget(pushButton_10);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_6);


        gridLayout->addWidget(frame_5, 2, 0, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: none;"));
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

        label_6 = new QLabel(frame_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font8;
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setItalic(false);
        label_6->setFont(font8);
        label_6->setStyleSheet(QString::fromUtf8("color: Black;\n"
"border: none;"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_6);


        gridLayout->addWidget(frame_4, 0, 0, 1, 2);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background: white;\n"
"border: none;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 330, 597));
        gridLayout_7 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: black;"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_8, 0, 0, 1, 1);

        expta = new QTableView(scrollAreaWidgetContents);
        expta->setObjectName(QString::fromUtf8("expta"));

        gridLayout_7->addWidget(expta, 1, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 1, 2, 1);

        gridLayout->setRowStretch(0, 3);
        gridLayout->setRowStretch(1, 15);
        gridLayout->setRowStretch(2, 15);
        gridLayout->setColumnStretch(0, 11);
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
        pushButton->setText(QCoreApplication::translate("Budget", "Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Budget", "About", nullptr));
        label_7->setText(QCoreApplication::translate("Budget", "Expenses   ", nullptr));
        label_9->setText(QCoreApplication::translate("Budget", "Total Food Expense:", nullptr));
        foodex->setText(QString());
        label_11->setText(QCoreApplication::translate("Budget", "Total Rent Expense:", nullptr));
        label_14->setText(QString());
        label_12->setText(QCoreApplication::translate("Budget", "Total Stationery Expense:", nullptr));
        label_15->setText(QString());
        label_13->setText(QCoreApplication::translate("Budget", "Total Other Expense:", nullptr));
        label_16->setText(QString());
        label_17->setText(QCoreApplication::translate("Budget", "Total Expenses: ", nullptr));
        tot->setText(QCoreApplication::translate("Budget", "2000", nullptr));
        label_3->setText(QCoreApplication::translate("Budget", "Food", nullptr));
        pushButton_1->setText(QString());
        pushButton_9->setText(QString());
        label_4->setText(QCoreApplication::translate("Budget", "Rent", nullptr));
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        label_5->setText(QCoreApplication::translate("Budget", "Stationery", nullptr));
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        label_2->setText(QCoreApplication::translate("Budget", "Other", nullptr));
        pushButton_7->setText(QString());
        pushButton_10->setText(QString());
        label->setText(QCoreApplication::translate("Budget", "Expense Tracker", nullptr));
        label_6->setText(QCoreApplication::translate("Budget", "Hello Stranger!", nullptr));
        label_8->setText(QCoreApplication::translate("Budget", "Recent Expenses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Budget: public Ui_Budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
