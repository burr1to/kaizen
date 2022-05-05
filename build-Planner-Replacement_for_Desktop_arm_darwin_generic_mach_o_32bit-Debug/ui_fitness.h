/********************************************************************************
** Form generated from reading UI file 'fitness.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITNESS_H
#define UI_FITNESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fitness
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *logo;
    QPushButton *home;
    QPushButton *fit_butt;
    QPushButton *bud_butt;
    QSpacerItem *verticalSpacer;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLabel *helloname;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLabel *age;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLabel *height;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLabel *weight;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *bmi;
    QPushButton *editstuff;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *heytxt;
    QPushButton *refresh;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_chart;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QFrame *horizontalFrame_chart;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_core;
    QPushButton *pushButton_uperbody;
    QPushButton *pushButton_lowerbody;
    QPushButton *pushButton_yoga;

    void setupUi(QMainWindow *fitness)
    {
        if (fitness->objectName().isEmpty())
            fitness->setObjectName(QString::fromUtf8("fitness"));
        fitness->resize(1280, 720);
        fitness->setMinimumSize(QSize(1280, 720));
        fitness->setBaseSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        fitness->setWindowIcon(icon);
        fitness->setStyleSheet(QString::fromUtf8("background-color:#22252a;\n"
"font: 12pt \"Foco\";"));
        centralwidget = new QWidget(fitness);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(230, 0));
        frame->setStyleSheet(QString::fromUtf8("background-color:#22252a;\n"
"border-radius: 15px;\n"
"color: white;\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        logo = new QPushButton(frame);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setMinimumSize(QSize(0, 100));
        logo->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img sr/kaizen.png"), QSize(), QIcon::Normal, QIcon::Off);
        logo->setIcon(icon1);
        logo->setIconSize(QSize(200, 100));

        verticalLayout_4->addWidget(logo);

        home = new QPushButton(frame);
        home->setObjectName(QString::fromUtf8("home"));
        home->setMinimumSize(QSize(0, 50));
        home->setStyleSheet(QString::fromUtf8("#home{\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:40px;\n"
"}\n"
"#home:hover{\n"
"font-size: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img sr/Planner.png"), QSize(), QIcon::Normal, QIcon::Off);
        home->setIcon(icon2);
        home->setIconSize(QSize(35, 35));

        verticalLayout_4->addWidget(home);

        fit_butt = new QPushButton(frame);
        fit_butt->setObjectName(QString::fromUtf8("fit_butt"));
        fit_butt->setMinimumSize(QSize(0, 50));
        fit_butt->setStyleSheet(QString::fromUtf8("#fit_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:40px;\n"
"}\n"
"#fit_butt:hover{\n"
"font-size: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img sr/fitness.png"), QSize(), QIcon::Normal, QIcon::Off);
        fit_butt->setIcon(icon3);
        fit_butt->setIconSize(QSize(35, 35));

        verticalLayout_4->addWidget(fit_butt);

        bud_butt = new QPushButton(frame);
        bud_butt->setObjectName(QString::fromUtf8("bud_butt"));
        bud_butt->setMinimumSize(QSize(0, 50));
        bud_butt->setStyleSheet(QString::fromUtf8("#bud_butt{\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:40px;\n"
"}\n"
"#bud_butt:hover{\n"
"font-size: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img sr/budget.png"), QSize(), QIcon::Normal, QIcon::Off);
        bud_butt->setIcon(icon4);
        bud_butt->setIconSize(QSize(35, 35));

        verticalLayout_4->addWidget(bud_butt);

        verticalSpacer = new QSpacerItem(20, 149, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("font:24px;\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:50px;\n"
"color:#e6ebf1;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(frame_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Foco")});
        font.setBold(false);
        font.setItalic(false);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        helloname = new QLabel(frame_8);
        helloname->setObjectName(QString::fromUtf8("helloname"));
        helloname->setFont(font);
        helloname->setStyleSheet(QString::fromUtf8("color : #767782;"));
        helloname->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(helloname);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_2 = new QLabel(frame_8);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_2);

        age = new QLabel(frame_8);
        age->setObjectName(QString::fromUtf8("age"));
        age->setFont(font);
        age->setStyleSheet(QString::fromUtf8("color : #767782;"));
        age->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(age);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(frame_8);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_4);

        height = new QLabel(frame_8);
        height->setObjectName(QString::fromUtf8("height"));
        height->setFont(font);
        height->setStyleSheet(QString::fromUtf8("color : #767782;"));
        height->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(height);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(frame_8);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_7);

        weight = new QLabel(frame_8);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setFont(font);
        weight->setStyleSheet(QString::fromUtf8("color : #767782;"));
        weight->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(weight);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);

        bmi = new QLabel(frame_8);
        bmi->setObjectName(QString::fromUtf8("bmi"));
        bmi->setFont(font);
        bmi->setStyleSheet(QString::fromUtf8("color : #767782;"));
        bmi->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(bmi);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(frame_8);

        editstuff = new QPushButton(frame);
        editstuff->setObjectName(QString::fromUtf8("editstuff"));
        editstuff->setMinimumSize(QSize(0, 50));
        editstuff->setStyleSheet(QString::fromUtf8("#editstuff{\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:40px;\n"
"}\n"
"#editstuff:hover{\n"
"font-size: 18px;\n"
"background-color:#e6ebf1;\n"
"color: #22252a;}"));
        editstuff->setIconSize(QSize(20, 40));

        verticalLayout_4->addWidget(editstuff);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:50px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 60));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#e6ebf1;\n"
"font: 700 25pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"border-radius:30px;\n"
"color: #fdd670;"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_4);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(30, 0, 20, 0);
        label = new QLabel(frame_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FONTSPRING DEMO - Pontiac Black")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        heytxt = new QLabel(frame_4);
        heytxt->setObjectName(QString::fromUtf8("heytxt"));
        heytxt->setStyleSheet(QString::fromUtf8("font:24px;\n"
"padding-right:10px"));
        heytxt->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(heytxt);

        refresh = new QPushButton(frame_4);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setMinimumSize(QSize(35, 35));
        refresh->setStyleSheet(QString::fromUtf8("#refresh{\n"
"border:0 px;\n"
"border-radius:25px;}\n"
"#refresh:hover{\n"
"background-color:#ffffff;}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img sr/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon5);
        refresh->setIconSize(QSize(40, 40));

        horizontalLayout_12->addWidget(refresh);


        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:#ffff;\n"
"border-radius:40px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame_chart = new QFrame(frame_5);
        frame_chart->setObjectName(QString::fromUtf8("frame_chart"));
        frame_chart->setStyleSheet(QString::fromUtf8(""));
        frame_chart->setFrameShape(QFrame::StyledPanel);
        frame_chart->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_chart);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_6 = new QFrame(frame_chart);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 59, 62);\n"
"border-radius:40px;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalFrame_chart = new QFrame(frame_6);
        horizontalFrame_chart->setObjectName(QString::fromUtf8("horizontalFrame_chart"));
        horizontalLayout_4 = new QHBoxLayout(horizontalFrame_chart);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));

        horizontalLayout_5->addWidget(horizontalFrame_chart);


        horizontalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(frame_chart);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8("#frame_7{border-image:url(:/img sr/fit_top.png);}"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        horizontalLayout_2->addWidget(frame_7);

        horizontalLayout_2->setStretch(0, 9);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout_5->addWidget(frame_chart);

        frame_3 = new QFrame(frame_5);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Foco")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        frame_3->setFont(font2);
        frame_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #e6ebf1;\n"
"color: black;}\n"
"QPushButton:hover{\n"
"background-color: #373b3e;\n"
"color: #e6ebf1;}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_core = new QPushButton(frame_3);
        pushButton_core->setObjectName(QString::fromUtf8("pushButton_core"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_core->sizePolicy().hasHeightForWidth());
        pushButton_core->setSizePolicy(sizePolicy2);
        pushButton_core->setFont(font2);
        pushButton_core->setStyleSheet(QString::fromUtf8("border-image: url(:/images/src_images/core.png);"));

        horizontalLayout_3->addWidget(pushButton_core);

        pushButton_uperbody = new QPushButton(frame_3);
        pushButton_uperbody->setObjectName(QString::fromUtf8("pushButton_uperbody"));
        sizePolicy2.setHeightForWidth(pushButton_uperbody->sizePolicy().hasHeightForWidth());
        pushButton_uperbody->setSizePolicy(sizePolicy2);
        pushButton_uperbody->setFont(font2);
        pushButton_uperbody->setStyleSheet(QString::fromUtf8("border-image: url(:/images/src_images/upper body.png);"));

        horizontalLayout_3->addWidget(pushButton_uperbody);

        pushButton_lowerbody = new QPushButton(frame_3);
        pushButton_lowerbody->setObjectName(QString::fromUtf8("pushButton_lowerbody"));
        sizePolicy2.setHeightForWidth(pushButton_lowerbody->sizePolicy().hasHeightForWidth());
        pushButton_lowerbody->setSizePolicy(sizePolicy2);
        pushButton_lowerbody->setFont(font2);
        pushButton_lowerbody->setStyleSheet(QString::fromUtf8("border-image: url(:/images/src_images/lower_body.png);"));

        horizontalLayout_3->addWidget(pushButton_lowerbody);

        pushButton_yoga = new QPushButton(frame_3);
        pushButton_yoga->setObjectName(QString::fromUtf8("pushButton_yoga"));
        sizePolicy2.setHeightForWidth(pushButton_yoga->sizePolicy().hasHeightForWidth());
        pushButton_yoga->setSizePolicy(sizePolicy2);
        pushButton_yoga->setFont(font2);
        pushButton_yoga->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/images/src_images/yoga.png);"));

        horizontalLayout_3->addWidget(pushButton_yoga);


        verticalLayout_5->addWidget(frame_3);

        verticalLayout_5->setStretch(0, 3);
        verticalLayout_5->setStretch(1, 2);

        verticalLayout->addWidget(frame_5);


        horizontalLayout->addWidget(frame_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 9);
        fitness->setCentralWidget(centralwidget);

        retranslateUi(fitness);

        QMetaObject::connectSlotsByName(fitness);
    } // setupUi

    void retranslateUi(QMainWindow *fitness)
    {
        fitness->setWindowTitle(QCoreApplication::translate("fitness", "Fitness", nullptr));
        logo->setText(QString());
        home->setText(QCoreApplication::translate("fitness", "  Planner", nullptr));
        fit_butt->setText(QCoreApplication::translate("fitness", "  Fitness", nullptr));
        bud_butt->setText(QCoreApplication::translate("fitness", "  Budget", nullptr));
        label_6->setText(QCoreApplication::translate("fitness", "Hello", nullptr));
        helloname->setText(QCoreApplication::translate("fitness", "xxxx", nullptr));
        label_2->setText(QCoreApplication::translate("fitness", "Age", nullptr));
        age->setText(QCoreApplication::translate("fitness", "xxxx", nullptr));
        label_4->setText(QCoreApplication::translate("fitness", "Height", nullptr));
        height->setText(QCoreApplication::translate("fitness", "xxxx", nullptr));
        label_7->setText(QCoreApplication::translate("fitness", "Weight", nullptr));
        weight->setText(QCoreApplication::translate("fitness", "xxxx", nullptr));
        label_9->setText(QCoreApplication::translate("fitness", "BMI", nullptr));
        bmi->setText(QCoreApplication::translate("fitness", "xxxx", nullptr));
        editstuff->setText(QCoreApplication::translate("fitness", "Edit", nullptr));
        label->setText(QCoreApplication::translate("fitness", "FITNESS", nullptr));
        heytxt->setText(QCoreApplication::translate("fitness", "TextLabel", nullptr));
        refresh->setText(QString());
        pushButton_core->setText(QCoreApplication::translate("fitness", "CORE", nullptr));
        pushButton_uperbody->setText(QCoreApplication::translate("fitness", "UPPER BODY", nullptr));
        pushButton_lowerbody->setText(QCoreApplication::translate("fitness", "LOWER BODY", nullptr));
        pushButton_yoga->setText(QCoreApplication::translate("fitness", "YOGA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fitness: public Ui_fitness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITNESS_H
