#include "planner.h"
#include "login.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectDB();
    createDB();



    /*planner w;
    w.show();*/
    /*login l;
    l.show();*/

    return a.exec();
}
