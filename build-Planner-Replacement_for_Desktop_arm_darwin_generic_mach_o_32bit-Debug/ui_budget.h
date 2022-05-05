/********************************************************************************
** Form generated from reading UI file 'budget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGET_H
#define UI_BUDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Budget
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_24;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *logo;
    QPushButton *planner;
    QPushButton *fit_butt;
    QPushButton *bud_butt;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLineEdit *allocating;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_40;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLabel *hellotxt;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QLabel *intotal;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QLabel *extotal;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QLabel *net;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_22;
    QLabel *allbudget;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QLabel *rem;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_23;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_6;
    QFrame *line;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *edu_item;
    QLineEdit *edu_amount;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *edutot;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_23;
    QPushButton *pushButton_7;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_24;
    QLineEdit *f_item;
    QLineEdit *f_amount;
    QFrame *line_9;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_13;
    QLabel *foodtot;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_34;
    QVBoxLayout *verticalLayout_30;
    QVBoxLayout *verticalLayout_31;
    QVBoxLayout *verticalLayout_32;
    QPushButton *pushButton_12;
    QFrame *line_6;
    QVBoxLayout *verticalLayout_33;
    QLineEdit *o_item;
    QLineEdit *o_amount;
    QFrame *line_12;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_9;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_16;
    QLabel *othertot;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_39;
    QVBoxLayout *verticalLayout_35;
    QVBoxLayout *verticalLayout_36;
    QVBoxLayout *verticalLayout_37;
    QPushButton *pushButton_14;
    QFrame *line_7;
    QVBoxLayout *verticalLayout_38;
    QLineEdit *in_item;
    QLineEdit *in_amount;
    QFrame *line_8;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_13;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_12;
    QLabel *intot;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_8;
    QTableView *expta;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_4;
    QLineEdit *itemr;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QLineEdit *pricer;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QLineEdit *catr;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *updatebutt;
    QPushButton *deletebutt;

    void setupUi(QMainWindow *Budget)
    {
        if (Budget->objectName().isEmpty())
            Budget->setObjectName(QString::fromUtf8("Budget"));
        Budget->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Budget->setWindowIcon(icon);
        Budget->setStyleSheet(QString::fromUtf8("font: 10pt \"Foco\";"));
        centralwidget = new QWidget(Budget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 37, 42);"));
        horizontalLayout_24 = new QHBoxLayout(centralwidget);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(230, 0));
        frame->setStyleSheet(QString::fromUtf8("#frame{border-image:url(:/img sr/budget_side.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logo = new QPushButton(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(0, 95));
        logo->setStyleSheet(QString::fromUtf8("background-color:#22252a;\n"
"border:0px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img sr/kaizen.png"), QSize(), QIcon::Normal, QIcon::Off);
        logo->setIcon(icon1);
        logo->setIconSize(QSize(200, 100));

        verticalLayout->addWidget(logo);

        planner = new QPushButton(frame);
        planner->setObjectName(QString::fromUtf8("planner"));
        planner->setMinimumSize(QSize(0, 40));
        planner->setStyleSheet(QString::fromUtf8("#planner{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#planner:hover{\n"
"font: 16px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img sr/Planner.png"), QSize(), QIcon::Normal, QIcon::Off);
        planner->setIcon(icon2);
        planner->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(planner);

        fit_butt = new QPushButton(frame);
        fit_butt->setObjectName(QString::fromUtf8("fit_butt"));
        fit_butt->setMinimumSize(QSize(0, 40));
        fit_butt->setStyleSheet(QString::fromUtf8("#fit_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#fit_butt:hover{\n"
"font: 16px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img sr/fitness.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_butt->setIcon(icon3);
        fit_butt->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(fit_butt);

        bud_butt = new QPushButton(frame);
        bud_butt->setObjectName(QString::fromUtf8("bud_butt"));
        bud_butt->setMinimumSize(QSize(0, 40));
        bud_butt->setStyleSheet(QString::fromUtf8("#bud_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#bud_butt:hover{\n"
"font: 16px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img sr/budget.png"), QSize(), QIcon::Normal, QIcon::Off);
        bud_butt->setIcon(icon4);
        bud_butt->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(bud_butt);

        verticalSpacer = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 50));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        allocating = new QLineEdit(frame);
        allocating->setObjectName(QString::fromUtf8("allocating"));
        allocating->setMinimumSize(QSize(0, 30));
        allocating->setStyleSheet(QString::fromUtf8("#allocating{\n"
"background-color: #ffffff;\n"
"border-radius:15px;\n"
"color:#22252a;\n"
"}\n"
"#allocating:hover{\n"
"background-color:#e6ebf1;\n"
"color: #22252a;\n"
"}"));

        verticalLayout->addWidget(allocating);

        verticalSpacer_2 = new QSpacerItem(20, 220, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_24->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:40px;\n"
"background-color:#ffffff;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_40 = new QVBoxLayout(frame_2);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(0, -1, 0, -1);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 60));
        frame_4->setAutoFillBackground(false);
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#e6ebf1;\n"
"font: 700 20pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"border-radius:30px;\n"
"color: #fdd670;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(30, 0, 30, 0);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #fdd670;\n"
"border: none;\n"
"font:30px;\n"
""));

        horizontalLayout_7->addWidget(label);

        hellotxt = new QLabel(frame_4);
        hellotxt->setObjectName(QString::fromUtf8("hellotxt"));
        hellotxt->setFont(font);
        hellotxt->setStyleSheet(QString::fromUtf8("color: #fdd670;\n"
"border: none;\n"
"font:24px;"));
        hellotxt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(hellotxt);


        verticalLayout_40->addWidget(frame_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:30px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #22252a;\n"
"font:24px;\n"
""));
        label_7->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_18->addWidget(label_7);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_18 = new QLabel(frame_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding:5px;\n"
""));
        label_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_18);

        intotal = new QLabel(frame_5);
        intotal->setObjectName(QString::fromUtf8("intotal"));
        intotal->setFont(font1);
        intotal->setStyleSheet(QString::fromUtf8("#intotal{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"}\n"
"#intotal:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_8->addWidget(intotal);


        verticalLayout_22->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_17 = new QLabel(frame_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding:5px;\n"
""));
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_17);

        extotal = new QLabel(frame_5);
        extotal->setObjectName(QString::fromUtf8("extotal"));
        extotal->setFont(font1);
        extotal->setStyleSheet(QString::fromUtf8("#extotal{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"}\n"
"#extotal:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_6->addWidget(extotal);


        verticalLayout_22->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_19 = new QLabel(frame_5);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding:5px;\n"
""));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_19);

        net = new QLabel(frame_5);
        net->setObjectName(QString::fromUtf8("net"));
        net->setFont(font1);
        net->setStyleSheet(QString::fromUtf8("#net{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"}\n"
"#net:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_9->addWidget(net);


        verticalLayout_22->addLayout(horizontalLayout_9);


        verticalLayout_18->addLayout(verticalLayout_22);


        horizontalLayout_3->addLayout(verticalLayout_18);


        horizontalLayout_2->addWidget(frame_5);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:30px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_7);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_10 = new QLabel(frame_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #22252a;\n"
"font:25px;\n"
"\n"
""));
        label_10->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_10->setMargin(0);

        verticalLayout_20->addWidget(label_10);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_22 = new QLabel(frame_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding:5px;\n"
""));
        label_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_22);

        allbudget = new QLabel(frame_7);
        allbudget->setObjectName(QString::fromUtf8("allbudget"));
        allbudget->setFont(font1);
        allbudget->setStyleSheet(QString::fromUtf8("#allbudget{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"}\n"
"#allbudget:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_15->addWidget(allbudget);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 1);

        verticalLayout_17->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_23 = new QLabel(frame_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding:5px;\n"
""));
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_23);

        rem = new QLabel(frame_7);
        rem->setObjectName(QString::fromUtf8("rem"));
        rem->setFont(font1);
        rem->setStyleSheet(QString::fromUtf8("#rem{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"padding-left:10px;\n"
"}\n"
"#rem:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_16->addWidget(rem);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 1);

        verticalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout_20->addLayout(verticalLayout_17);


        horizontalLayout_4->addLayout(verticalLayout_20);


        horizontalLayout_2->addWidget(frame_7);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_23 = new QHBoxLayout(frame_3);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        frame_11 = new QFrame(frame_3);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:20px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_6 = new QPushButton(frame_11);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("color: black;\n"
"font:12px;\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/Image/Screen_Shot_2022-04-28_at_10.45.06_PM-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(40, 40));

        verticalLayout_4->addWidget(pushButton_6);

        line = new QFrame(frame_11);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLayoutDirection(Qt::LeftToRight);
        line->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);


        verticalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        edu_item = new QLineEdit(frame_11);
        edu_item->setObjectName(QString::fromUtf8("edu_item"));
        edu_item->setStyleSheet(QString::fromUtf8("#edu_item{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#edu_item:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        edu_item->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(edu_item);

        edu_amount = new QLineEdit(frame_11);
        edu_amount->setObjectName(QString::fromUtf8("edu_amount"));
        edu_amount->setStyleSheet(QString::fromUtf8("#edu_amount{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#edu_amount:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_5->addWidget(edu_amount);

        line_4 = new QFrame(frame_11);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_4);


        verticalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(frame_11);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(40, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"border:0 px;\n"
"border-radius:20px;}\n"
"#pushButton_3:hover{\n"
"background-color:#ffffff;}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img sr/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setIconSize(QSize(30, 30));

        horizontalLayout_10->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(frame_11);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        horizontalLayout_5->addWidget(label_11);

        edutot = new QLabel(frame_11);
        edutot->setObjectName(QString::fromUtf8("edutot"));
        edutot->setFont(font1);
        edutot->setStyleSheet(QString::fromUtf8("padding:2px;"));

        horizontalLayout_5->addWidget(edutot);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_23->addWidget(frame_11);

        frame_8 = new QFrame(frame_3);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:30px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_8);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        pushButton_7 = new QPushButton(frame_8);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("color: black;"));
        pushButton_7->setIcon(icon5);
        pushButton_7->setIconSize(QSize(40, 40));

        verticalLayout_23->addWidget(pushButton_7);

        line_2 = new QFrame(frame_8);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setLayoutDirection(Qt::LeftToRight);
        line_2->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_23->addWidget(line_2);


        verticalLayout_9->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(10);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        f_item = new QLineEdit(frame_8);
        f_item->setObjectName(QString::fromUtf8("f_item"));
        f_item->setStyleSheet(QString::fromUtf8("#f_item{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#f_item:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        f_item->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_24->addWidget(f_item);

        f_amount = new QLineEdit(frame_8);
        f_amount->setObjectName(QString::fromUtf8("f_amount"));
        f_amount->setStyleSheet(QString::fromUtf8("#f_amount{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#f_amount:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_24->addWidget(f_amount);

        line_9 = new QFrame(frame_8);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_24->addWidget(line_9);


        verticalLayout_9->addLayout(verticalLayout_24);


        verticalLayout_10->addLayout(verticalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(frame_8);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(40, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4{\n"
"border:0 px;\n"
"border-radius:20px;}\n"
"#pushButton_4:hover{\n"
"background-color:#ffffff;}"));
        pushButton_4->setIcon(icon6);
        pushButton_4->setIconSize(QSize(30, 30));

        horizontalLayout_11->addWidget(pushButton_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_4);


        verticalLayout_10->addLayout(horizontalLayout_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(2);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_13 = new QLabel(frame_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);

        horizontalLayout_18->addWidget(label_13);

        foodtot = new QLabel(frame_8);
        foodtot->setObjectName(QString::fromUtf8("foodtot"));
        foodtot->setFont(font1);
        foodtot->setStyleSheet(QString::fromUtf8("padding:2px;"));

        horizontalLayout_18->addWidget(foodtot);

        horizontalLayout_18->setStretch(0, 1);
        horizontalLayout_18->setStretch(1, 2);

        verticalLayout_10->addLayout(horizontalLayout_18);


        horizontalLayout_23->addWidget(frame_8);

        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:30px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_34 = new QVBoxLayout(frame_9);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setSpacing(5);
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(5);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(5);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        pushButton_12 = new QPushButton(frame_9);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setFont(font1);
        pushButton_12->setStyleSheet(QString::fromUtf8("color: black;"));
        pushButton_12->setIcon(icon5);
        pushButton_12->setIconSize(QSize(40, 40));

        verticalLayout_32->addWidget(pushButton_12);

        line_6 = new QFrame(frame_9);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setLayoutDirection(Qt::LeftToRight);
        line_6->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_32->addWidget(line_6);


        verticalLayout_31->addLayout(verticalLayout_32);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(10);
        verticalLayout_33->setObjectName(QString::fromUtf8("verticalLayout_33"));
        o_item = new QLineEdit(frame_9);
        o_item->setObjectName(QString::fromUtf8("o_item"));
        o_item->setStyleSheet(QString::fromUtf8("#o_item{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#o_item:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        o_item->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_33->addWidget(o_item);

        o_amount = new QLineEdit(frame_9);
        o_amount->setObjectName(QString::fromUtf8("o_amount"));
        o_amount->setStyleSheet(QString::fromUtf8("#o_amount{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#o_amount:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_33->addWidget(o_amount);

        line_12 = new QFrame(frame_9);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout_33->addWidget(line_12);


        verticalLayout_31->addLayout(verticalLayout_33);


        verticalLayout_30->addLayout(verticalLayout_31);


        verticalLayout_34->addLayout(verticalLayout_30);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_5);

        pushButton_9 = new QPushButton(frame_9);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(40, 40));
        pushButton_9->setStyleSheet(QString::fromUtf8("#pushButton_9{\n"
"border:0 px;\n"
"border-radius:20px;}\n"
"#pushButton_9:hover{\n"
"background-color:#ffffff;}"));
        pushButton_9->setIcon(icon6);
        pushButton_9->setIconSize(QSize(30, 30));

        horizontalLayout_19->addWidget(pushButton_9);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_6);


        verticalLayout_34->addLayout(horizontalLayout_19);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(2);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_16 = new QLabel(frame_9);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        horizontalLayout_21->addWidget(label_16);

        othertot = new QLabel(frame_9);
        othertot->setObjectName(QString::fromUtf8("othertot"));
        othertot->setFont(font1);
        othertot->setStyleSheet(QString::fromUtf8("padding:2px;"));

        horizontalLayout_21->addWidget(othertot);

        horizontalLayout_21->setStretch(0, 1);
        horizontalLayout_21->setStretch(1, 3);

        verticalLayout_34->addLayout(horizontalLayout_21);


        horizontalLayout_23->addWidget(frame_9);

        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:30px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_39 = new QVBoxLayout(frame_10);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(5);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        verticalLayout_36 = new QVBoxLayout();
        verticalLayout_36->setSpacing(5);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(5);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        pushButton_14 = new QPushButton(frame_10);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setFont(font1);
        pushButton_14->setStyleSheet(QString::fromUtf8("color: black;"));
        pushButton_14->setIcon(icon5);
        pushButton_14->setIconSize(QSize(40, 40));

        verticalLayout_37->addWidget(pushButton_14);

        line_7 = new QFrame(frame_10);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setLayoutDirection(Qt::LeftToRight);
        line_7->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_37->addWidget(line_7);


        verticalLayout_36->addLayout(verticalLayout_37);

        verticalLayout_38 = new QVBoxLayout();
        verticalLayout_38->setSpacing(10);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        in_item = new QLineEdit(frame_10);
        in_item->setObjectName(QString::fromUtf8("in_item"));
        in_item->setStyleSheet(QString::fromUtf8("#in_item{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#in_item:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));
        in_item->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_38->addWidget(in_item);

        in_amount = new QLineEdit(frame_10);
        in_amount->setObjectName(QString::fromUtf8("in_amount"));
        in_amount->setStyleSheet(QString::fromUtf8("#in_amount{\n"
"border: 1px solid rgb(217, 217, 217);\n"
"border-radius: 7px;\n"
"margin-left: 10px;\n"
"margin-right: 10px;\n"
"background-color: #ffffff;\n"
"padding:4px;\n"
"}\n"
"#in_amount:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_38->addWidget(in_amount);

        line_8 = new QFrame(frame_10);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setStyleSheet(QString::fromUtf8("border-top: 2px solid rgb(239, 239, 239);\n"
"margin-left: 10px;\n"
"margin-right:10px;\n"
"background-color:#22252a;"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_38->addWidget(line_8);


        verticalLayout_36->addLayout(verticalLayout_38);


        verticalLayout_35->addLayout(verticalLayout_36);


        verticalLayout_39->addLayout(verticalLayout_35);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_7);

        pushButton_13 = new QPushButton(frame_10);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(40, 40));
        pushButton_13->setStyleSheet(QString::fromUtf8("#pushButton_13{\n"
"border:0 px;\n"
"border-radius:20px;\n"
"}\n"
"#pushButton_13:hover{\n"
"background-color:#ffffff;}"));
        pushButton_13->setIcon(icon6);
        pushButton_13->setIconSize(QSize(30, 30));

        horizontalLayout_20->addWidget(pushButton_13);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_8);


        verticalLayout_39->addLayout(horizontalLayout_20);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(2);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_12 = new QLabel(frame_10);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        horizontalLayout_22->addWidget(label_12);

        intot = new QLabel(frame_10);
        intot->setObjectName(QString::fromUtf8("intot"));
        intot->setFont(font1);
        intot->setStyleSheet(QString::fromUtf8("padding:2px;"));

        horizontalLayout_22->addWidget(intot);

        horizontalLayout_22->setStretch(0, 1);
        horizontalLayout_22->setStretch(1, 2);

        verticalLayout_39->addLayout(horizontalLayout_22);


        horizontalLayout_23->addWidget(frame_10);


        verticalLayout_2->addWidget(frame_3);


        horizontalLayout->addLayout(verticalLayout_2);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(350, 0));
        frame_6->setMaximumSize(QSize(450, 16777215));
        frame_6->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_27 = new QVBoxLayout(frame_6);
        verticalLayout_27->setSpacing(0);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(0, -1, 0, -1);
        label_8 = new QLabel(frame_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:15px;\n"
"font:16px;\n"
"background-color: rgb(230, 235, 241);"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_27->addWidget(label_8);

        expta = new QTableView(frame_6);
        expta->setObjectName(QString::fromUtf8("expta"));
        expta->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: #ffffff"));
        expta->setAutoScrollMargin(10);
        expta->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        expta->setGridStyle(Qt::SolidLine);
        expta->horizontalHeader()->setVisible(true);
        expta->horizontalHeader()->setMinimumSectionSize(0);
        expta->horizontalHeader()->setDefaultSectionSize(95);

        verticalLayout_27->addWidget(expta);

        frame_12 = new QFrame(frame_6);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setMinimumSize(QSize(0, 50));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_12);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_4 = new QLabel(frame_12);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_14->addWidget(label_4);

        itemr = new QLineEdit(frame_12);
        itemr->setObjectName(QString::fromUtf8("itemr"));
        itemr->setStyleSheet(QString::fromUtf8("#itemr{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"}\n"
"#itemr:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_14->addWidget(itemr);


        verticalLayout_21->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_3 = new QLabel(frame_12);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_13->addWidget(label_3);

        pricer = new QLineEdit(frame_12);
        pricer->setObjectName(QString::fromUtf8("pricer"));
        pricer->setStyleSheet(QString::fromUtf8("#pricer{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"}\n"
"#pricer:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_13->addWidget(pricer);


        verticalLayout_21->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_2 = new QLabel(frame_12);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_12->addWidget(label_2);

        catr = new QLineEdit(frame_12);
        catr->setObjectName(QString::fromUtf8("catr"));
        catr->setStyleSheet(QString::fromUtf8("#catr{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"}\n"
"#catr:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_12->addWidget(catr);


        verticalLayout_21->addLayout(horizontalLayout_12);


        verticalLayout_26->addLayout(verticalLayout_21);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        updatebutt = new QPushButton(frame_12);
        updatebutt->setObjectName(QString::fromUtf8("updatebutt"));
        updatebutt->setStyleSheet(QString::fromUtf8("#updatebutt{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"}\n"
"#updatebutt:hover{\n"
"background-color:#22252a;\n"
"font:14px;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_17->addWidget(updatebutt);

        deletebutt = new QPushButton(frame_12);
        deletebutt->setObjectName(QString::fromUtf8("deletebutt"));
        deletebutt->setStyleSheet(QString::fromUtf8("#deletebutt{\n"
"background-color: #ffffff;\n"
"border-radius:10px;\n"
"}\n"
"#deletebutt:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"font:14px;\n"
"}"));

        horizontalLayout_17->addWidget(deletebutt);


        verticalLayout_26->addLayout(horizontalLayout_17);


        verticalLayout_11->addLayout(verticalLayout_26);


        verticalLayout_27->addWidget(frame_12);


        horizontalLayout->addWidget(frame_6);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_40->addLayout(horizontalLayout);


        horizontalLayout_24->addWidget(frame_2);

        horizontalLayout_24->setStretch(0, 2);
        horizontalLayout_24->setStretch(1, 9);
        Budget->setCentralWidget(centralwidget);

        retranslateUi(Budget);

        QMetaObject::connectSlotsByName(Budget);
    } // setupUi

    void retranslateUi(QMainWindow *Budget)
    {
        Budget->setWindowTitle(QCoreApplication::translate("Budget", "MainWindow", nullptr));
        logo->setText(QString());
        planner->setText(QCoreApplication::translate("Budget", "  Planner", nullptr));
        fit_butt->setText(QCoreApplication::translate("Budget", "  Fitness", nullptr));
        bud_butt->setText(QCoreApplication::translate("Budget", "  Budget", nullptr));
        label_5->setText(QCoreApplication::translate("Budget", "Allocate Budget", nullptr));
        label->setText(QCoreApplication::translate("Budget", "BUDGET TRACKER", nullptr));
        hellotxt->setText(QCoreApplication::translate("Budget", "Welcome to Kaizen Budget!", nullptr));
        label_7->setText(QCoreApplication::translate("Budget", "Expenses   ", nullptr));
        label_18->setText(QCoreApplication::translate("Budget", "Total Income : ", nullptr));
        intotal->setText(QCoreApplication::translate("Budget", "xxxx", nullptr));
        label_17->setText(QCoreApplication::translate("Budget", "Total Expenses : ", nullptr));
        extotal->setText(QCoreApplication::translate("Budget", "xxxx", nullptr));
        label_19->setText(QCoreApplication::translate("Budget", "Net Expense : ", nullptr));
        net->setText(QCoreApplication::translate("Budget", "xxxx", nullptr));
        label_10->setText(QCoreApplication::translate("Budget", "Income", nullptr));
        label_22->setText(QCoreApplication::translate("Budget", "Allocated Budget :", nullptr));
        allbudget->setText(QCoreApplication::translate("Budget", "0", nullptr));
        label_23->setText(QCoreApplication::translate("Budget", "Remaining Balance :", nullptr));
        rem->setText(QCoreApplication::translate("Budget", "xxxx", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Budget", "Education", nullptr));
        edu_item->setPlaceholderText(QCoreApplication::translate("Budget", "Item", nullptr));
        edu_amount->setPlaceholderText(QCoreApplication::translate("Budget", "Amount", nullptr));
        pushButton_3->setText(QString());
        label_11->setText(QCoreApplication::translate("Budget", "Total:", nullptr));
        edutot->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("Budget", "Food", nullptr));
        f_item->setPlaceholderText(QCoreApplication::translate("Budget", "Item", nullptr));
        f_amount->setPlaceholderText(QCoreApplication::translate("Budget", "Amount", nullptr));
        pushButton_4->setText(QString());
        label_13->setText(QCoreApplication::translate("Budget", "Total:", nullptr));
        foodtot->setText(QCoreApplication::translate("Budget", "700", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Budget", "Other", nullptr));
        o_item->setPlaceholderText(QCoreApplication::translate("Budget", "Item", nullptr));
        o_amount->setPlaceholderText(QCoreApplication::translate("Budget", "Amount", nullptr));
        pushButton_9->setText(QString());
        label_16->setText(QCoreApplication::translate("Budget", "Total:", nullptr));
        othertot->setText(QCoreApplication::translate("Budget", "700", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Budget", "Income", nullptr));
        in_item->setPlaceholderText(QCoreApplication::translate("Budget", "Item", nullptr));
        in_amount->setPlaceholderText(QCoreApplication::translate("Budget", "Amount", nullptr));
        pushButton_13->setText(QString());
        label_12->setText(QCoreApplication::translate("Budget", "Total:", nullptr));
        intot->setText(QCoreApplication::translate("Budget", "700", nullptr));
        label_8->setText(QCoreApplication::translate("Budget", "Recent Expenses", nullptr));
        label_4->setText(QCoreApplication::translate("Budget", "Item        ", nullptr));
        label_3->setText(QCoreApplication::translate("Budget", " Price      ", nullptr));
        label_2->setText(QCoreApplication::translate("Budget", "Category", nullptr));
        updatebutt->setText(QCoreApplication::translate("Budget", "Update", nullptr));
        deletebutt->setText(QCoreApplication::translate("Budget", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Budget: public Ui_Budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGET_H
