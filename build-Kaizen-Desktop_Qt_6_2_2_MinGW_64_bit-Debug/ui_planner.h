/********************************************************************************
** Form generated from reading UI file 'planner.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNER_H
#define UI_PLANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planner
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_6;
    QFrame *planner_frame;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addPlan;
    QSpacerItem *horizontalSpacer;
    QPushButton *dataSend;
    QFrame *frame_2;

    void setupUi(QMainWindow *planner)
    {
        if (planner->objectName().isEmpty())
            planner->setObjectName(QString::fromUtf8("planner"));
        planner->resize(1124, 697);
        centralwidget = new QWidget(planner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(frame_6);

        planner_frame = new QFrame(frame_3);
        planner_frame->setObjectName(QString::fromUtf8("planner_frame"));
        sizePolicy.setHeightForWidth(planner_frame->sizePolicy().hasHeightForWidth());
        planner_frame->setSizePolicy(sizePolicy);
        planner_frame->setStyleSheet(QString::fromUtf8("#planner_frame{\n"
"background-color:rgb(158, 255, 117)\n"
"}"));
        planner_frame->setFrameShape(QFrame::StyledPanel);
        planner_frame->setFrameShadow(QFrame::Raised);
        frame = new QFrame(planner_frame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(740, 310, 291, 291));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(planner_frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 70, 411, 131));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/pl.png")));

        horizontalLayout->addWidget(label);

        addPlan = new QLineEdit(layoutWidget);
        addPlan->setObjectName(QString::fromUtf8("addPlan"));
        addPlan->setStyleSheet(QString::fromUtf8("#addPlan{\n"
"border:1px solid transparent;\n"
"}"));

        horizontalLayout->addWidget(addPlan);

        horizontalSpacer = new QSpacerItem(78, 126, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dataSend = new QPushButton(planner_frame);
        dataSend->setObjectName(QString::fromUtf8("dataSend"));
        dataSend->setGeometry(QRect(370, 230, 132, 42));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dataSend->sizePolicy().hasHeightForWidth());
        dataSend->setSizePolicy(sizePolicy2);
        dataSend->setStyleSheet(QString::fromUtf8("#dataSend{\n"
"max-height:40px;\n"
"max-width:130px;\n"
"\n"
"}"));

        horizontalLayout_4->addWidget(planner_frame);


        gridLayout->addWidget(frame_3, 1, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy1.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy1);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 0, 0, 1, 1);

        planner->setCentralWidget(centralwidget);

        retranslateUi(planner);

        QMetaObject::connectSlotsByName(planner);
    } // setupUi

    void retranslateUi(QMainWindow *planner)
    {
        planner->setWindowTitle(QCoreApplication::translate("planner", "planner", nullptr));
        label->setText(QString());
        dataSend->setText(QCoreApplication::translate("planner", "Send data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planner: public Ui_planner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNER_H
