#include "planner.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    planner w;
    w.show();
    /*login l;
    l.show();*/

    return a.exec();
}
