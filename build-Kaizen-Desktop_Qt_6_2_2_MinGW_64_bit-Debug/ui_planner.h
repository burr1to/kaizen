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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planner
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addPlan;
    QSpacerItem *horizontalSpacer;
    QLabel *planerr;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTimeEdit *pt;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *pd;
    QPushButton *dataSend;
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *budgetbut;
    QPushButton *fitnessbut;
    QLineEdit *editingPlan;
    QPushButton *updateBut;
    QPushButton *deleteBut;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *plan1;
    QLabel *plan3;
    QLabel *plan2;
    QLabel *plan4;
    QDateEdit *datecome;
    QTimeEdit *timecome;
    QDateEdit *dateEdit;

    void setupUi(QMainWindow *planner)
    {
        if (planner->objectName().isEmpty())
            planner->setObjectName(QString::fromUtf8("planner"));
        planner->resize(1127, 701);
        centralwidget = new QWidget(planner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(430, 20, 261, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
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


        verticalLayout->addLayout(horizontalLayout);

        planerr = new QLabel(layoutWidget);
        planerr->setObjectName(QString::fromUtf8("planerr"));

        verticalLayout->addWidget(planerr, 0, Qt::AlignHCenter);

        frame = new QFrame(layoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pt = new QTimeEdit(frame);
        pt->setObjectName(QString::fromUtf8("pt"));

        horizontalLayout_2->addWidget(pt);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(layoutWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        pd = new QDateEdit(frame_3);
        pd->setObjectName(QString::fromUtf8("pd"));

        horizontalLayout_3->addWidget(pd);


        verticalLayout->addWidget(frame_3);

        dataSend = new QPushButton(layoutWidget);
        dataSend->setObjectName(QString::fromUtf8("dataSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dataSend->sizePolicy().hasHeightForWidth());
        dataSend->setSizePolicy(sizePolicy1);
        dataSend->setStyleSheet(QString::fromUtf8("#dataSend{\n"
"max-height:40px;\n"
"\n"
"\n"
"}"));

        verticalLayout->addWidget(dataSend);

        listView = new QListView(frame_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(100, 30, 291, 391));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 430, 75, 24));
        budgetbut = new QPushButton(frame_2);
        budgetbut->setObjectName(QString::fromUtf8("budgetbut"));
        budgetbut->setGeometry(QRect(580, 600, 75, 24));
        fitnessbut = new QPushButton(frame_2);
        fitnessbut->setObjectName(QString::fromUtf8("fitnessbut"));
        fitnessbut->setGeometry(QRect(720, 600, 75, 24));
        editingPlan = new QLineEdit(frame_2);
        editingPlan->setObjectName(QString::fromUtf8("editingPlan"));
        editingPlan->setGeometry(QRect(120, 480, 271, 41));
        updateBut = new QPushButton(frame_2);
        updateBut->setObjectName(QString::fromUtf8("updateBut"));
        updateBut->setGeometry(QRect(150, 610, 75, 24));
        deleteBut = new QPushButton(frame_2);
        deleteBut->setObjectName(QString::fromUtf8("deleteBut"));
        deleteBut->setGeometry(QRect(280, 610, 75, 24));
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(790, 30, 291, 391));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        plan1 = new QLabel(layoutWidget1);
        plan1->setObjectName(QString::fromUtf8("plan1"));

        verticalLayout_2->addWidget(plan1);

        plan3 = new QLabel(layoutWidget1);
        plan3->setObjectName(QString::fromUtf8("plan3"));

        verticalLayout_2->addWidget(plan3);

        plan2 = new QLabel(layoutWidget1);
        plan2->setObjectName(QString::fromUtf8("plan2"));

        verticalLayout_2->addWidget(plan2);

        plan4 = new QLabel(layoutWidget1);
        plan4->setObjectName(QString::fromUtf8("plan4"));

        verticalLayout_2->addWidget(plan4);

        datecome = new QDateEdit(frame_2);
        datecome->setObjectName(QString::fromUtf8("datecome"));
        datecome->setGeometry(QRect(130, 580, 110, 22));
        timecome = new QTimeEdit(frame_2);
        timecome->setObjectName(QString::fromUtf8("timecome"));
        timecome->setGeometry(QRect(260, 580, 118, 22));
        dateEdit = new QDateEdit(frame_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(500, 440, 110, 22));

        gridLayout->addWidget(frame_2, 0, 0, 1, 1);

        planner->setCentralWidget(centralwidget);

        retranslateUi(planner);

        QMetaObject::connectSlotsByName(planner);
    } // setupUi

    void retranslateUi(QMainWindow *planner)
    {
        planner->setWindowTitle(QCoreApplication::translate("planner", "planner", nullptr));
        label->setText(QString());
        planerr->setText(QString());
        label_2->setText(QCoreApplication::translate("planner", "Time:", nullptr));
        label_3->setText(QCoreApplication::translate("planner", "Date:", nullptr));
        dataSend->setText(QCoreApplication::translate("planner", "Send Data", nullptr));
        pushButton->setText(QCoreApplication::translate("planner", "Show Plans", nullptr));
        budgetbut->setText(QCoreApplication::translate("planner", "Budget", nullptr));
        fitnessbut->setText(QCoreApplication::translate("planner", "Fitness", nullptr));
        updateBut->setText(QCoreApplication::translate("planner", "Update", nullptr));
        deleteBut->setText(QCoreApplication::translate("planner", "Delete", nullptr));
        plan1->setText(QCoreApplication::translate("planner", "TextLabel", nullptr));
        plan3->setText(QCoreApplication::translate("planner", "TextLabel", nullptr));
        plan2->setText(QCoreApplication::translate("planner", "TextLabel", nullptr));
        plan4->setText(QCoreApplication::translate("planner", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planner: public Ui_planner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNER_H
