/********************************************************************************
** Form generated from reading UI file 'planner.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNER_H
#define UI_PLANNER_H

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
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Planner
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Kaizen_logo;
    QPushButton *allplans;
    QPushButton *fit_butt;
    QPushButton *bud_butt;
    QSpacerItem *verticalSpacer;
    QFrame *Mainframe;
    QVBoxLayout *verticalLayout_2;
    QWidget *Hello;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *heytxt;
    QPushButton *ref;
    QPushButton *Logout;
    QHBoxLayout *not_hello;
    QFrame *Planner_section;
    QVBoxLayout *verticalLayout_4;
    QWidget *Display_plan;
    QVBoxLayout *verticalLayout_6;
    QLabel *plan_1;
    QLabel *plan_2;
    QLabel *plan_3;
    QLabel *plan_4;
    QWidget *Add_plan;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *addPlan;
    QHBoxLayout *horizontalLayout_5;
    QDateEdit *plandate;
    QTimeEdit *plantime;
    QPushButton *showplans;
    QPushButton *addbut;
    QLabel *planerr;
    QVBoxLayout *B_and_F_section;
    QFrame *frame_2;
    QWidget *Fitness_section;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_11;
    QPushButton *fitbut;
    QWidget *BMI;
    QHBoxLayout *horizontalLayout_4;
    QLabel *BMI_label;
    QLabel *bmit;
    QVBoxLayout *Extra_fitness;
    QWidget *Height;
    QHBoxLayout *horizontalLayout_8;
    QLabel *Height_label;
    QLabel *heightt;
    QWidget *Weight;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Weight_label;
    QLabel *weightt;
    QWidget *Budget_section;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QPushButton *budgetbut;
    QWidget *Expenditure;
    QVBoxLayout *verticalLayout_8;
    QLabel *Expenditure_label;
    QLabel *exp;
    QVBoxLayout *Extra_budget;
    QWidget *Closing_balance;
    QVBoxLayout *verticalLayout_7;
    QLabel *Balance_label;
    QLabel *net;
    QWidget *Thismonth_budget;
    QVBoxLayout *verticalLayout_9;
    QLabel *Budget_label;
    QLabel *inc;

    void setupUi(QMainWindow *Planner)
    {
        if (Planner->objectName().isEmpty())
            Planner->setObjectName(QString::fromUtf8("Planner"));
        Planner->resize(1280, 720);
        Planner->setMinimumSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Planner->setWindowIcon(icon);
        Planner->setStyleSheet(QString::fromUtf8("color:#22252a;\n"
"font: 12pt \"Foco\";"));
        centralwidget = new QWidget(Planner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1280, 720));
        centralwidget->setBaseSize(QSize(1280, 720));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 37, 42);"));
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(230, 0));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border:0px;\n"
"color:#e6ebf1;\n"
"border-image:url(:/img sr/planner_side.png);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Kaizen_logo = new QPushButton(frame);
        Kaizen_logo->setObjectName(QString::fromUtf8("Kaizen_logo"));
        Kaizen_logo->setMinimumSize(QSize(0, 100));
        Kaizen_logo->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img sr/kaizen.png"), QSize(), QIcon::Normal, QIcon::Off);
        Kaizen_logo->setIcon(icon1);
        Kaizen_logo->setIconSize(QSize(230, 100));

        verticalLayout_3->addWidget(Kaizen_logo);

        allplans = new QPushButton(frame);
        allplans->setObjectName(QString::fromUtf8("allplans"));
        allplans->setMinimumSize(QSize(0, 50));
        allplans->setStyleSheet(QString::fromUtf8("#allplans{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#allplans:hover{\n"
"font: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img sr/Planner.png"), QSize(), QIcon::Normal, QIcon::Off);
        allplans->setIcon(icon2);
        allplans->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(allplans);

        fit_butt = new QPushButton(frame);
        fit_butt->setObjectName(QString::fromUtf8("fit_butt"));
        fit_butt->setMinimumSize(QSize(0, 50));
        fit_butt->setStyleSheet(QString::fromUtf8("#fit_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#fit_butt:hover{\n"
"font: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img sr/fitness.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_butt->setIcon(icon3);
        fit_butt->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(fit_butt);

        bud_butt = new QPushButton(frame);
        bud_butt->setObjectName(QString::fromUtf8("bud_butt"));
        bud_butt->setMinimumSize(QSize(0, 50));
        bud_butt->setStyleSheet(QString::fromUtf8("#bud_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border-radius:20px;\n"
"color:#e6ebf1;\n"
"}\n"
"#bud_butt:hover{\n"
"font:18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img sr/budget.png"), QSize(), QIcon::Normal, QIcon::Off);
        bud_butt->setIcon(icon4);
        bud_butt->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(bud_butt);

        verticalSpacer = new QSpacerItem(20, 469, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_9->addWidget(frame);

        Mainframe = new QFrame(centralwidget);
        Mainframe->setObjectName(QString::fromUtf8("Mainframe"));
        Mainframe->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:50px;\n"
"border:0px;"));
        Mainframe->setFrameShape(QFrame::StyledPanel);
        Mainframe->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(Mainframe);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Hello = new QWidget(Mainframe);
        Hello->setObjectName(QString::fromUtf8("Hello"));
        Hello->setMinimumSize(QSize(0, 60));
        Hello->setStyleSheet(QString::fromUtf8("background-color:#e6ebf1;\n"
"font: 700 25pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"border-radius:30px;\n"
"color: #fdd670;"));
        horizontalLayout_6 = new QHBoxLayout(Hello);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(30, 0, 20, 0);
        label = new QLabel(Hello);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        heytxt = new QLabel(Hello);
        heytxt->setObjectName(QString::fromUtf8("heytxt"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        heytxt->setFont(font);
        heytxt->setStyleSheet(QString::fromUtf8("border:0px;\n"
"padding-right:10px;\n"
"color:#fdd670;\n"
"font: 24px;"));
        heytxt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(heytxt);

        ref = new QPushButton(Hello);
        ref->setObjectName(QString::fromUtf8("ref"));
        ref->setMinimumSize(QSize(50, 50));
        ref->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border:0 px;\n"
"border-radius:25px;}\n"
"#pushButton:hover{\n"
"background-color:#ffffff;}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img sr/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        ref->setIcon(icon5);
        ref->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(ref);

        Logout = new QPushButton(Hello);
        Logout->setObjectName(QString::fromUtf8("Logout"));
        Logout->setMinimumSize(QSize(50, 50));
        Logout->setStyleSheet(QString::fromUtf8("#Logout{\n"
"border:0 px;\n"
"border-radius:25px;}\n"
"#Logout:hover{\n"
"background-color:#ffffff;}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img sr/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        Logout->setIcon(icon6);
        Logout->setIconSize(QSize(40, 40));

        horizontalLayout_6->addWidget(Logout);

        horizontalLayout_6->setStretch(1, 5);
        horizontalLayout_6->setStretch(2, 2);

        verticalLayout_2->addWidget(Hello);

        not_hello = new QHBoxLayout();
        not_hello->setObjectName(QString::fromUtf8("not_hello"));
        Planner_section = new QFrame(Mainframe);
        Planner_section->setObjectName(QString::fromUtf8("Planner_section"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Planner_section->sizePolicy().hasHeightForWidth());
        Planner_section->setSizePolicy(sizePolicy);
        Planner_section->setStyleSheet(QString::fromUtf8("#plandate,#plantime{\n"
"border-radius:5px;\n"
"padding:10px;\n"
"background-color: rgb(231, 231, 231);\n"
"}"));
        Planner_section->setFrameShape(QFrame::StyledPanel);
        Planner_section->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(Planner_section);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Display_plan = new QWidget(Planner_section);
        Display_plan->setObjectName(QString::fromUtf8("Display_plan"));
        Display_plan->setStyleSheet(QString::fromUtf8("#plan_1,#plan_2,#plan_3,#plan_4{\n"
"border-radius:30px;\n"
"font-size:14px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(Display_plan);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        plan_1 = new QLabel(Display_plan);
        plan_1->setObjectName(QString::fromUtf8("plan_1"));
        plan_1->setFont(font);
        plan_1->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);"));

        verticalLayout_6->addWidget(plan_1);

        plan_2 = new QLabel(Display_plan);
        plan_2->setObjectName(QString::fromUtf8("plan_2"));
        plan_2->setFont(font);
        plan_2->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);"));

        verticalLayout_6->addWidget(plan_2);

        plan_3 = new QLabel(Display_plan);
        plan_3->setObjectName(QString::fromUtf8("plan_3"));
        plan_3->setFont(font);
        plan_3->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);"));

        verticalLayout_6->addWidget(plan_3);

        plan_4 = new QLabel(Display_plan);
        plan_4->setObjectName(QString::fromUtf8("plan_4"));
        plan_4->setFont(font);
        plan_4->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);"));

        verticalLayout_6->addWidget(plan_4);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 1);
        verticalLayout_6->setStretch(2, 1);
        verticalLayout_6->setStretch(3, 1);

        verticalLayout_4->addWidget(Display_plan);

        Add_plan = new QWidget(Planner_section);
        Add_plan->setObjectName(QString::fromUtf8("Add_plan"));
        Add_plan->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(Add_plan);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        addPlan = new QLineEdit(Add_plan);
        addPlan->setObjectName(QString::fromUtf8("addPlan"));
        addPlan->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        addPlan->setFont(font1);
        addPlan->setStyleSheet(QString::fromUtf8("#addPlan{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#addPlan:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        verticalLayout_5->addWidget(addPlan);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        plandate = new QDateEdit(Add_plan);
        plandate->setObjectName(QString::fromUtf8("plandate"));
        plandate->setStyleSheet(QString::fromUtf8("#plandate{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:15px;\n"
"}\n"
"#plantime:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_5->addWidget(plandate);

        plantime = new QTimeEdit(Add_plan);
        plantime->setObjectName(QString::fromUtf8("plantime"));
        plantime->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:15px;\n"
"background-color: rgb(230, 235, 241);"));

        horizontalLayout_5->addWidget(plantime);


        verticalLayout_5->addLayout(horizontalLayout_5);

        showplans = new QPushButton(Add_plan);
        showplans->setObjectName(QString::fromUtf8("showplans"));
        showplans->setMinimumSize(QSize(40, 40));
        showplans->setFont(font);
        showplans->setStyleSheet(QString::fromUtf8("#showplans{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"font:14px;\n"
"}\n"
"#showplans:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"font:16px;\n"
"}"));

        verticalLayout_5->addWidget(showplans);

        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout_5);

        addbut = new QPushButton(Add_plan);
        addbut->setObjectName(QString::fromUtf8("addbut"));
        addbut->setMinimumSize(QSize(50, 50));
        addbut->setStyleSheet(QString::fromUtf8("#addbut{\n"
"border:0 px;\n"
"border-radius:25px;}\n"
"#addbut:hover{\n"
"background-color:#e6ebf1;}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img sr/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        addbut->setIcon(icon7);
        addbut->setIconSize(QSize(45, 45));

        horizontalLayout->addWidget(addbut);

        horizontalLayout->setStretch(0, 13);
        horizontalLayout->setStretch(1, 2);

        verticalLayout->addLayout(horizontalLayout);

        planerr = new QLabel(Add_plan);
        planerr->setObjectName(QString::fromUtf8("planerr"));

        verticalLayout->addWidget(planerr);


        verticalLayout_4->addWidget(Add_plan);

        verticalLayout_4->setStretch(0, 13);
        verticalLayout_4->setStretch(1, 4);

        not_hello->addWidget(Planner_section);

        B_and_F_section = new QVBoxLayout();
        B_and_F_section->setObjectName(QString::fromUtf8("B_and_F_section"));
        frame_2 = new QFrame(Mainframe);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 200));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{border-image:url(:/img sr/plan_top.png);}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        B_and_F_section->addWidget(frame_2);

        Fitness_section = new QWidget(Mainframe);
        Fitness_section->setObjectName(QString::fromUtf8("Fitness_section"));
        Fitness_section->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);\n"
"font:12px;"));
        horizontalLayout_2 = new QHBoxLayout(Fitness_section);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        fitbut = new QPushButton(Fitness_section);
        fitbut->setObjectName(QString::fromUtf8("fitbut"));
        fitbut->setMinimumSize(QSize(100, 100));
        fitbut->setStyleSheet(QString::fromUtf8("#fitbut{\n"
"background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#fitbut:hover{\n"
"background-color:#373b3e;\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img sr/fit_butt.png"), QSize(), QIcon::Normal, QIcon::Off);
        fitbut->setIcon(icon8);
        fitbut->setIconSize(QSize(200, 100));

        verticalLayout_11->addWidget(fitbut);

        BMI = new QWidget(Fitness_section);
        BMI->setObjectName(QString::fromUtf8("BMI"));
        BMI->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(BMI);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 4, -1, 4);
        BMI_label = new QLabel(BMI);
        BMI_label->setObjectName(QString::fromUtf8("BMI_label"));
        BMI_label->setFont(font);
        BMI_label->setAutoFillBackground(false);
        BMI_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
""));
        BMI_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(BMI_label);

        bmit = new QLabel(BMI);
        bmit->setObjectName(QString::fromUtf8("bmit"));
        bmit->setFont(font);
        bmit->setAutoFillBackground(false);
        bmit->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
""));
        bmit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(bmit);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_11->addWidget(BMI);


        horizontalLayout_2->addLayout(verticalLayout_11);

        Extra_fitness = new QVBoxLayout();
        Extra_fitness->setObjectName(QString::fromUtf8("Extra_fitness"));
        Height = new QWidget(Fitness_section);
        Height->setObjectName(QString::fromUtf8("Height"));
        Height->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_8 = new QHBoxLayout(Height);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        Height_label = new QLabel(Height);
        Height_label->setObjectName(QString::fromUtf8("Height_label"));
        Height_label->setFont(font);
        Height_label->setAutoFillBackground(false);
        Height_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
""));
        Height_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(Height_label);

        heightt = new QLabel(Height);
        heightt->setObjectName(QString::fromUtf8("heightt"));
        heightt->setFont(font);
        heightt->setAutoFillBackground(false);
        heightt->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;"));
        heightt->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(heightt);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        Extra_fitness->addWidget(Height);

        Weight = new QWidget(Fitness_section);
        Weight->setObjectName(QString::fromUtf8("Weight"));
        Weight->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_7 = new QHBoxLayout(Weight);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Weight_label = new QLabel(Weight);
        Weight_label->setObjectName(QString::fromUtf8("Weight_label"));
        Weight_label->setFont(font);
        Weight_label->setAutoFillBackground(false);
        Weight_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
""));
        Weight_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(Weight_label);

        weightt = new QLabel(Weight);
        weightt->setObjectName(QString::fromUtf8("weightt"));
        weightt->setFont(font);
        weightt->setAutoFillBackground(false);
        weightt->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
""));
        weightt->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(weightt);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);

        Extra_fitness->addWidget(Weight);

        Extra_fitness->setStretch(0, 1);
        Extra_fitness->setStretch(1, 1);

        horizontalLayout_2->addLayout(Extra_fitness);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        B_and_F_section->addWidget(Fitness_section);

        Budget_section = new QWidget(Mainframe);
        Budget_section->setObjectName(QString::fromUtf8("Budget_section"));
        Budget_section->setStyleSheet(QString::fromUtf8("border:0px;\n"
"border-radius:25px;\n"
"background-color: rgb(230, 235, 241);\n"
"font:12px;"));
        horizontalLayout_3 = new QHBoxLayout(Budget_section);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        budgetbut = new QPushButton(Budget_section);
        budgetbut->setObjectName(QString::fromUtf8("budgetbut"));
        budgetbut->setMinimumSize(QSize(100, 100));
        budgetbut->setStyleSheet(QString::fromUtf8("#budgetbut{\n"
"background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#budgetbut:hover{\n"
"background-color:#373b3e;\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img sr/bud_butt.png"), QSize(), QIcon::Normal, QIcon::Off);
        budgetbut->setIcon(icon9);
        budgetbut->setIconSize(QSize(200, 100));

        verticalLayout_10->addWidget(budgetbut);

        Expenditure = new QWidget(Budget_section);
        Expenditure->setObjectName(QString::fromUtf8("Expenditure"));
        Expenditure->setStyleSheet(QString::fromUtf8("border-radius: 13;\n"
"background:transparent;"));
        verticalLayout_8 = new QVBoxLayout(Expenditure);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(2, 2, 2, 2);
        Expenditure_label = new QLabel(Expenditure);
        Expenditure_label->setObjectName(QString::fromUtf8("Expenditure_label"));
        Expenditure_label->setFont(font);
        Expenditure_label->setAutoFillBackground(false);
        Expenditure_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        Expenditure_label->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(Expenditure_label);

        exp = new QLabel(Expenditure);
        exp->setObjectName(QString::fromUtf8("exp"));
        exp->setFont(font);
        exp->setAutoFillBackground(false);
        exp->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        exp->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(exp);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);

        verticalLayout_10->addWidget(Expenditure);


        horizontalLayout_3->addLayout(verticalLayout_10);

        Extra_budget = new QVBoxLayout();
        Extra_budget->setObjectName(QString::fromUtf8("Extra_budget"));
        Closing_balance = new QWidget(Budget_section);
        Closing_balance->setObjectName(QString::fromUtf8("Closing_balance"));
        Closing_balance->setStyleSheet(QString::fromUtf8("border-radius: 13;"));
        verticalLayout_7 = new QVBoxLayout(Closing_balance);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        Balance_label = new QLabel(Closing_balance);
        Balance_label->setObjectName(QString::fromUtf8("Balance_label"));
        Balance_label->setFont(font);
        Balance_label->setLayoutDirection(Qt::LeftToRight);
        Balance_label->setAutoFillBackground(false);
        Balance_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        Balance_label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(Balance_label);

        net = new QLabel(Closing_balance);
        net->setObjectName(QString::fromUtf8("net"));
        net->setFont(font);
        net->setAutoFillBackground(false);
        net->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        net->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(net);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 1);

        Extra_budget->addWidget(Closing_balance);

        Thismonth_budget = new QWidget(Budget_section);
        Thismonth_budget->setObjectName(QString::fromUtf8("Thismonth_budget"));
        Thismonth_budget->setStyleSheet(QString::fromUtf8("border-radius: 13;\n"
"background:transparent;"));
        verticalLayout_9 = new QVBoxLayout(Thismonth_budget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        Budget_label = new QLabel(Thismonth_budget);
        Budget_label->setObjectName(QString::fromUtf8("Budget_label"));
        Budget_label->setFont(font);
        Budget_label->setAutoFillBackground(false);
        Budget_label->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        Budget_label->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(Budget_label);

        inc = new QLabel(Thismonth_budget);
        inc->setObjectName(QString::fromUtf8("inc"));
        inc->setFont(font);
        inc->setAutoFillBackground(false);
        inc->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"border:0px;\n"
"border-radius:10px;\n"
""));
        inc->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(inc);

        verticalLayout_9->setStretch(0, 1);
        verticalLayout_9->setStretch(1, 1);

        Extra_budget->addWidget(Thismonth_budget);

        Extra_budget->setStretch(0, 1);
        Extra_budget->setStretch(1, 1);

        horizontalLayout_3->addLayout(Extra_budget);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        B_and_F_section->addWidget(Budget_section);


        not_hello->addLayout(B_and_F_section);

        not_hello->setStretch(0, 1);
        not_hello->setStretch(1, 1);

        verticalLayout_2->addLayout(not_hello);

        verticalLayout_2->setStretch(0, 3);
        verticalLayout_2->setStretch(1, 21);

        horizontalLayout_9->addWidget(Mainframe);

        horizontalLayout_9->setStretch(0, 2);
        horizontalLayout_9->setStretch(1, 9);
        Planner->setCentralWidget(centralwidget);

        retranslateUi(Planner);

        QMetaObject::connectSlotsByName(Planner);
    } // setupUi

    void retranslateUi(QMainWindow *Planner)
    {
        Planner->setWindowTitle(QCoreApplication::translate("Planner", "Planner", nullptr));
        Kaizen_logo->setText(QString());
        allplans->setText(QCoreApplication::translate("Planner", "  All Plans", nullptr));
        fit_butt->setText(QCoreApplication::translate("Planner", "  Fitness", nullptr));
        bud_butt->setText(QCoreApplication::translate("Planner", "  Budget", nullptr));
        label->setText(QCoreApplication::translate("Planner", "PLANNER", nullptr));
        heytxt->setText(QCoreApplication::translate("Planner", "Welcome to Kaizen!!", nullptr));
        ref->setText(QString());
        Logout->setText(QString());
        plan_1->setText(QString());
        plan_2->setText(QString());
        plan_3->setText(QString());
        plan_4->setText(QString());
        showplans->setText(QCoreApplication::translate("Planner", "Show All Plans ", nullptr));
        addbut->setText(QString());
        planerr->setText(QString());
        fitbut->setText(QString());
        BMI_label->setText(QCoreApplication::translate("Planner", "BMI", nullptr));
        bmit->setText(QCoreApplication::translate("Planner", "x", nullptr));
        Height_label->setText(QCoreApplication::translate("Planner", "Height", nullptr));
        heightt->setText(QCoreApplication::translate("Planner", "x", nullptr));
        Weight_label->setText(QCoreApplication::translate("Planner", "Weight", nullptr));
        weightt->setText(QCoreApplication::translate("Planner", "x", nullptr));
        budgetbut->setText(QCoreApplication::translate("Planner", "b", nullptr));
        Expenditure_label->setText(QCoreApplication::translate("Planner", "Total Expenditure", nullptr));
        exp->setText(QCoreApplication::translate("Planner", "xxxx", nullptr));
        Balance_label->setText(QCoreApplication::translate("Planner", "Net Balance", nullptr));
        net->setText(QString());
        Budget_label->setText(QCoreApplication::translate("Planner", "Total Income", nullptr));
        inc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Planner: public Ui_Planner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNER_H
