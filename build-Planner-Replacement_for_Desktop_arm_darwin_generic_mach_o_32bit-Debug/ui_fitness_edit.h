/********************************************************************************
** Form generated from reading UI file 'fitness_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITNESS_EDIT_H
#define UI_FITNESS_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_fitness_edit
{
public:
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *weight;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *height;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *submit;
    QPushButton *pushButton;
    QLabel *err;

    void setupUi(QDialog *fitness_edit)
    {
        if (fitness_edit->objectName().isEmpty())
            fitness_edit->setObjectName(QString::fromUtf8("fitness_edit"));
        fitness_edit->setEnabled(true);
        fitness_edit->resize(562, 303);
        fitness_edit->setMinimumSize(QSize(300, 100));
        fitness_edit->setMaximumSize(QSize(700, 303));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img sr/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        fitness_edit->setWindowIcon(icon);
        fitness_edit->setStyleSheet(QString::fromUtf8("margin: 0px;\n"
"background-color: rgb(34, 37, 42);\n"
"font:18px;\n"
"padding:10px;"));
        horizontalLayout_3 = new QHBoxLayout(fitness_edit);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame = new QFrame(fitness_edit);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius:40px;\n"
"color:black;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        weight = new QLineEdit(frame);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setMinimumSize(QSize(0, 40));
        weight->setStyleSheet(QString::fromUtf8("#weight{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#weight:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout->addWidget(weight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        height = new QLineEdit(frame);
        height->setObjectName(QString::fromUtf8("height"));
        height->setMinimumSize(QSize(0, 40));
        height->setStyleSheet(QString::fromUtf8("#height{\n"
"background-color: rgb(230, 235, 241);\n"
"border:0px;\n"
"border-radius:20px;\n"
"}\n"
"#height:hover{\n"
"background-color:#22252a;\n"
"color: #e6ebf1;\n"
"}"));

        horizontalLayout_2->addWidget(height);


        verticalLayout->addLayout(horizontalLayout_2);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        submit = new QPushButton(frame_2);
        submit->setObjectName(QString::fromUtf8("submit"));
        submit->setMinimumSize(QSize(0, 40));
        submit->setStyleSheet(QString::fromUtf8("#submit{\n"
"border-radius:15px;\n"
"background-color: rgb(55, 59, 62);\n"
"color:#e6ebf1;\n"
"}\n"
"#submit:hover{\n"
"background-color:#e6ebf1;\n"
"font:18px;\n"
"color: #22252a;\n"
"}"));

        horizontalLayout_4->addWidget(submit);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(55, 59, 62);\n"
"color:#e6ebf1;\n"
"}\n"
"#pushButton:hover{\n"
"background-color:#e6ebf1;\n"
"font:18px;\n"
"color: #22252a;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 2);

        verticalLayout->addWidget(frame_2);

        err = new QLabel(frame);
        err->setObjectName(QString::fromUtf8("err"));

        verticalLayout->addWidget(err);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 3);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_3->addWidget(frame);


        retranslateUi(fitness_edit);

        QMetaObject::connectSlotsByName(fitness_edit);
    } // setupUi

    void retranslateUi(QDialog *fitness_edit)
    {
        fitness_edit->setWindowTitle(QCoreApplication::translate("fitness_edit", "Edit", nullptr));
        label->setText(QCoreApplication::translate("fitness_edit", "Weight", nullptr));
        label_2->setText(QCoreApplication::translate("fitness_edit", "Height", nullptr));
        submit->setText(QCoreApplication::translate("fitness_edit", "Submit", nullptr));
        pushButton->setText(QCoreApplication::translate("fitness_edit", "Close", nullptr));
        err->setText(QCoreApplication::translate("fitness_edit", "(Please input weight in kilograms and height in centimeters)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fitness_edit: public Ui_fitness_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITNESS_EDIT_H
