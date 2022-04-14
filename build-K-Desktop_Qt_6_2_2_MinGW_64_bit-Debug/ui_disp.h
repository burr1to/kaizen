/********************************************************************************
** Form generated from reading UI file 'disp.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISP_H
#define UI_DISP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_disp
{
public:

    void setupUi(QDialog *disp)
    {
        if (disp->objectName().isEmpty())
            disp->setObjectName(QString::fromUtf8("disp"));
        disp->resize(800, 600);

        retranslateUi(disp);

        QMetaObject::connectSlotsByName(disp);
    } // setupUi

    void retranslateUi(QDialog *disp)
    {
        disp->setWindowTitle(QCoreApplication::translate("disp", "disp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class disp: public Ui_disp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISP_H
