/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QPushButton *pushButton_goback;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QPushButton *lose_weight;
    QPushButton *gain_weight;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1093, 690);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(900, 500));
        MainWindow->setMaximumSize(QSize(1200, 700));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QString::fromUtf8("\n"
"background: transparent;\n"
"border-radius: 15px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_goback = new QPushButton(frame);
        pushButton_goback->setObjectName(QString::fromUtf8("pushButton_goback"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_goback->sizePolicy().hasHeightForWidth());
        pushButton_goback->setSizePolicy(sizePolicy2);
        pushButton_goback->setMinimumSize(QSize(0, 70));
        pushButton_goback->setStyleSheet(QString::fromUtf8("background: transparent;"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, pushButton_goback);

        horizontalSpacer_5 = new QSpacerItem(40, 80, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(1, QFormLayout::SpanningRole, horizontalSpacer_5);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Raleway SemiBold")});
        font.setPointSize(20);
        font.setBold(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_6->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Raleway Black")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color : black;"));
        label_19->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_19);

        horizontalSpacer = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(3, QFormLayout::SpanningRole, horizontalSpacer);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Raleway SemiBold")});
        font2.setPointSize(16);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Raleway SemiBold")});
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(false);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color : black;"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 7, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(5, QFormLayout::SpanningRole, horizontalSpacer_2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color : black;"));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 7, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(7, QFormLayout::SpanningRole, horizontalSpacer_3);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color : black;"));
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(8, QFormLayout::FieldRole, label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 7, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout->setItem(9, QFormLayout::SpanningRole, horizontalSpacer_4);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color : #767782;"));
        label_9->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color : black;"));
        label_10->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(10, QFormLayout::FieldRole, label_10);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setStyleSheet(QString::fromUtf8("background-color:#E7F3FF;\n"
"border-radius:15px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lose_weight = new QPushButton(frame_2);
        lose_weight->setObjectName(QString::fromUtf8("lose_weight"));
        lose_weight->setMinimumSize(QSize(300, 200));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Raleway Black")});
        font4.setPointSize(25);
        font4.setBold(true);
        lose_weight->setFont(font4);
        lose_weight->setStyleSheet(QString::fromUtf8("#lose_weight{background-color: #f5c27f;\n"
"color: #767782;\n"
"}\n"
"#lose_weight:hover{background-color: #767782;\n"
"color:  #f5c27f;\n"
"\n"
"}"));

        gridLayout->addWidget(lose_weight, 4, 1, 1, 1);

        gain_weight = new QPushButton(frame_2);
        gain_weight->setObjectName(QString::fromUtf8("gain_weight"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(gain_weight->sizePolicy().hasHeightForWidth());
        gain_weight->setSizePolicy(sizePolicy4);
        gain_weight->setMinimumSize(QSize(300, 200));
        gain_weight->setFont(font4);
        gain_weight->setStyleSheet(QString::fromUtf8("#gain_weight{background-color: #E5F4EB;\n"
"color: #191919;\n"
"}\n"
"#gain_weight:hover{background-color: #191919;\n"
"color: #E5F4EB;\n"
"}"));

        gridLayout->addWidget(gain_weight, 4, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Raleway Black")});
        font5.setPointSize(42);
        font5.setBold(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("#label{color: #767782;}\n"
""));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 5, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 5, 3, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(30, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 3, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 200, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 2, 1, 1, 2);


        horizontalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_goback->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Krishtal", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Height", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "170 cm", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Weight", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "75 kg", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "BMI", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        lose_weight->setText(QCoreApplication::translate("MainWindow", "Lose Weight", nullptr));
        gain_weight->setText(QCoreApplication::translate("MainWindow", "Gain Weight", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MOTIVATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
