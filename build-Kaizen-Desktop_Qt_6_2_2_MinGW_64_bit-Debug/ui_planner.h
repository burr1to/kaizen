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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *dataSend;
    QListView *listView;
    QPushButton *pushButton;
    QLineEdit *plan1;
    QLineEdit *plan2;
    QLineEdit *plan3;
    QLineEdit *plan4;

    void setupUi(QMainWindow *planner)
    {
        if (planner->objectName().isEmpty())
            planner->setObjectName(QString::fromUtf8("planner"));
        planner->resize(1124, 697);
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
        layoutWidget->setGeometry(QRect(450, 30, 252, 231));
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
        pushButton->setGeometry(QRect(200, 460, 75, 24));
        plan1 = new QLineEdit(frame_2);
        plan1->setObjectName(QString::fromUtf8("plan1"));
        plan1->setGeometry(QRect(760, 80, 301, 51));
        plan2 = new QLineEdit(frame_2);
        plan2->setObjectName(QString::fromUtf8("plan2"));
        plan2->setGeometry(QRect(760, 190, 301, 51));
        plan3 = new QLineEdit(frame_2);
        plan3->setObjectName(QString::fromUtf8("plan3"));
        plan3->setGeometry(QRect(750, 310, 301, 51));
        plan4 = new QLineEdit(frame_2);
        plan4->setObjectName(QString::fromUtf8("plan4"));
        plan4->setGeometry(QRect(750, 420, 301, 51));

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
        pushButton->setText(QCoreApplication::translate("planner", "Show Plans", nullptr));
    } // retranslateUi

};

namespace Ui {
    class planner: public Ui_planner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNER_H
