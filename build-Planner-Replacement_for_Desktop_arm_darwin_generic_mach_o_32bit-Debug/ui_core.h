/********************************************************************************
** Form generated from reading UI file 'core.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CORE_H
#define UI_CORE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_core
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QPushButton *logo;
    QPushButton *home;
    QPushButton *fit_butt;
    QPushButton *bud_butt;
    QSpacerItem *verticalSpacer;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
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
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_9;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLCDNumber *minutes;
    QLCDNumber *seconds;
    QPushButton *pushButton_start_workout;
    QPushButton *pushButton_stop_timer;
    QFrame *frame_10;

    void setupUi(QDialog *core)
    {
        if (core->objectName().isEmpty())
            core->setObjectName(QString::fromUtf8("core"));
        core->resize(1280, 720);
        core->setMinimumSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        core->setWindowIcon(icon);
        core->setStyleSheet(QString::fromUtf8("background-color:#22252a;\n"
"font: 12pt \"Foco\";\n"
"color: e6ebf1;"));
        horizontalLayout = new QHBoxLayout(core);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_5 = new QFrame(core);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("border:0px;"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        frame = new QFrame(frame_5);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(230, 0));
        frame->setStyleSheet(QString::fromUtf8("background-color:#22252a;\n"
"border-radius: 15px;\n"
"color: white;"));
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

        frame_11 = new QFrame(frame);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setStyleSheet(QString::fromUtf8("font:20px;\n"
"background-color: rgb(55, 59, 62);\n"
"border radius:50px;"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(frame_11);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Foco")});
        font.setBold(false);
        font.setItalic(false);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_6);

        helloname = new QLabel(frame_11);
        helloname->setObjectName(QString::fromUtf8("helloname"));
        helloname->setFont(font);
        helloname->setStyleSheet(QString::fromUtf8("color : #767782;"));
        helloname->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(helloname);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_2 = new QLabel(frame_11);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_2);

        age = new QLabel(frame_11);
        age->setObjectName(QString::fromUtf8("age"));
        age->setFont(font);
        age->setStyleSheet(QString::fromUtf8("color : #767782;"));
        age->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(age);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_4 = new QLabel(frame_11);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_4);

        height = new QLabel(frame_11);
        height->setObjectName(QString::fromUtf8("height"));
        height->setFont(font);
        height->setStyleSheet(QString::fromUtf8("color : #767782;"));
        height->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(height);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(frame_11);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_7);

        weight = new QLabel(frame_11);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setFont(font);
        weight->setStyleSheet(QString::fromUtf8("color : #767782;"));
        weight->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(weight);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(frame_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);

        bmi = new QLabel(frame_11);
        bmi->setObjectName(QString::fromUtf8("bmi"));
        bmi->setFont(font);
        bmi->setStyleSheet(QString::fromUtf8("color : #767782;"));
        bmi->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(bmi);


        verticalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_4->addWidget(frame_11);


        horizontalLayout_5->addWidget(frame);

        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 247, 247);\n"
"border-radius:50px;\n"
"color:black;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("FONTSPRING DEMO - Pontiac Black")});
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color:#e6ebf1;\n"
"font: 700 26pt \"FONTSPRING DEMO - Pontiac Black\";\n"
"border-radius:30px;\n"
"color: #fdd670;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(frame_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Foco")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4{\n"
"background-color:#e6ebf1;\n"
"border-radius:40px;\n"
"}\n"
"#pushButton_4:hover{\n"
"font-size: 20px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(frame_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"background-color:#e6ebf1;\n"
"border-radius:40px;\n"
"}\n"
"#pushButton_2:hover{\n"
"font-size: 20px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(frame_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"background-color:#e6ebf1;\n"
"border-radius:40px;\n"
"}\n"
"#pushButton_3:hover{\n"
"font-size: 20px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton = new QPushButton(frame_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"background-color:#e6ebf1;\n"
"border-radius:40px;\n"
"}\n"
"#pushButton:hover{\n"
"font-size: 20px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setStyleSheet(QString::fromUtf8("#frame_8{border-image:url(:/img sr/fitness_side.png);}"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_12 = new QLabel(frame_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color:#34efa3;"));
        label_12->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_3->addWidget(label_12);

        verticalSpacer_2 = new QSpacerItem(20, 350, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout->addWidget(frame_8, 0, 2, 2, 1);

        gridLayout->setColumnStretch(0, 5);
        gridLayout->setColumnStretch(1, 5);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_2->addWidget(frame_6);

        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_9);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setStyleSheet(QString::fromUtf8(""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_7);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        minutes = new QLCDNumber(frame_7);
        minutes->setObjectName(QString::fromUtf8("minutes"));
        minutes->setDigitCount(2);
        minutes->setProperty("value", QVariant(4.000000000000000));
        minutes->setProperty("intValue", QVariant(4));

        horizontalLayout_4->addWidget(minutes);

        seconds = new QLCDNumber(frame_7);
        seconds->setObjectName(QString::fromUtf8("seconds"));
        seconds->setDigitCount(2);
        seconds->setProperty("intValue", QVariant(59));

        horizontalLayout_4->addWidget(seconds);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        pushButton_start_workout = new QPushButton(frame_7);
        pushButton_start_workout->setObjectName(QString::fromUtf8("pushButton_start_workout"));
        sizePolicy2.setHeightForWidth(pushButton_start_workout->sizePolicy().hasHeightForWidth());
        pushButton_start_workout->setSizePolicy(sizePolicy2);
        pushButton_start_workout->setStyleSheet(QString::fromUtf8("#pushButton_start_workout{\n"
"background-color:#e6ebf1;\n"
"border-radius:20px;\n"
"}\n"
"#pushButton_start_workout:hover{\n"
"font-size: 18px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        horizontalLayout_3->addWidget(pushButton_start_workout);

        pushButton_stop_timer = new QPushButton(frame_7);
        pushButton_stop_timer->setObjectName(QString::fromUtf8("pushButton_stop_timer"));
        sizePolicy2.setHeightForWidth(pushButton_stop_timer->sizePolicy().hasHeightForWidth());
        pushButton_stop_timer->setSizePolicy(sizePolicy2);
        pushButton_stop_timer->setStyleSheet(QString::fromUtf8("#pushButton_stop_timer{\n"
"background-color:#e6ebf1;\n"
"border-radius:20px;\n"
"}\n"
"#pushButton_stop_timer:hover{\n"
"font-size: 18px;\n"
"background-color:#373b3e;\n"
"color: #e6ebf1;}"));

        horizontalLayout_3->addWidget(pushButton_stop_timer);


        verticalLayout_2->addWidget(frame_7);

        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_10);

        verticalLayout_2->setStretch(0, 8);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 1);

        verticalLayout->addWidget(frame_4);

        verticalLayout->setStretch(1, 8);

        horizontalLayout_5->addWidget(frame_2);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 9);

        horizontalLayout->addWidget(frame_5);


        retranslateUi(core);
        QObject::connect(pushButton, &QPushButton::clicked, pushButton_start_workout, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_3, &QPushButton::clicked, pushButton_start_workout, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_2, &QPushButton::clicked, pushButton_start_workout, qOverload<>(&QPushButton::click));
        QObject::connect(pushButton_4, &QPushButton::clicked, pushButton_start_workout, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(core);
    } // setupUi

    void retranslateUi(QDialog *core)
    {
        core->setWindowTitle(QCoreApplication::translate("core", "Core", nullptr));
        logo->setText(QString());
        home->setText(QCoreApplication::translate("core", "  Planner", nullptr));
        fit_butt->setText(QCoreApplication::translate("core", "  Fitness", nullptr));
        bud_butt->setText(QCoreApplication::translate("core", "  Budget", nullptr));
        label_6->setText(QCoreApplication::translate("core", "Hello", nullptr));
        helloname->setText(QCoreApplication::translate("core", "xxxx", nullptr));
        label_2->setText(QCoreApplication::translate("core", "Age", nullptr));
        age->setText(QCoreApplication::translate("core", "xxxx", nullptr));
        label_4->setText(QCoreApplication::translate("core", "Height", nullptr));
        height->setText(QCoreApplication::translate("core", "xxxx", nullptr));
        label_7->setText(QCoreApplication::translate("core", "Weight", nullptr));
        weight->setText(QCoreApplication::translate("core", "xxxx", nullptr));
        label_9->setText(QCoreApplication::translate("core", "BMI", nullptr));
        bmi->setText(QCoreApplication::translate("core", "xxxx", nullptr));
        label->setText(QCoreApplication::translate("core", "Core", nullptr));
        pushButton_4->setText(QCoreApplication::translate("core", "Russian Twist \n"
" 3 sets of 12 reps", nullptr));
        pushButton_2->setText(QCoreApplication::translate("core", "Leg Raise \n"
" 3 sets of 10 reps", nullptr));
        pushButton_3->setText(QCoreApplication::translate("core", "Glute Bridge\n"
" 2 sets of 15 reps", nullptr));
        pushButton->setText(QCoreApplication::translate("core", "Bird Dog \n"
" 3 sets of 12 reps", nullptr));
        label_12->setText(QCoreApplication::translate("core", "Remember to take breaks \n"
" and drink plenty water \n"
" during and after exercises.", nullptr));
        pushButton_start_workout->setText(QCoreApplication::translate("core", "Start Workout", nullptr));
        pushButton_stop_timer->setText(QCoreApplication::translate("core", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class core: public Ui_core {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CORE_H
