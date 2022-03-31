#include "planner.h"
#include "login.h"

#include <QDialog>
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login l;
    l.show();
    /*planner pl;
    pl.show();*/

    return a.exec();
}
