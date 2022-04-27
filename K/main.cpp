
#include "login.h"
#include "planner.h"
#include <QApplication>
QString current;



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login l;
    l.myfunction();
    l.show();
    return a.exec();
}
