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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_planner
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *planner_frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addPlan;
    QSpacerItem *horizontalSpacer;
    QPushButton *dataSend;

    void setupUi(QMainWindow *planner)
    {
        if (planner->objectName().isEmpty())
            planner->setObjectName(QString::fromUtf8("planner"));
        planner->resize(1124, 697);
        centralwidget = new QWidget(planner);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        planner_frame = new QFrame(centralwidget);
        planner_frame->setObjectName(QString::fromUtf8("planner_frame"));
        planner_frame->setStyleSheet(QString::fromUtf8("#planner_frame{\n"
"background-color:rgb(158, 255, 117)\n"
"}"));
        planner_frame->setFrameShape(QFrame::StyledPanel);
        planner_frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(planner_frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 300, 501, 174));
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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        dataSend = new QPushButton(layoutWidget);
        dataSend->setObjectName(QString::fromUtf8("dataSend"));

        verticalLayout->addWidget(dataSend);


        gridLayout->addWidget(planner_frame, 0, 0, 1, 1);

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
