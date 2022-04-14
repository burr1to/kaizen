#include "planner.h"
#include "login.h"
#include "signup.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QWidget>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //connect( dialog_1, SIGNAL(yourSignal(QString), dialog_2, SLOT(yourSlot(QString)) );
    login l;
    l.myfunction();
    l.show();
    return a.exec();
}
