#include "planner.h"
#include "login.h"
#include "errthang.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

/*
QSqlDatabase connectDB(){
    QSqlDatabase datba= QSqlDatabase::addDatabase("QMYSQL");
    datba.setHostName("localhost");
    datba.setDatabaseName("kaizen");
    datba.setUserName("sqluser");
    datba.setPassword("password");
    if (datba.open()){
        qDebug()<< "DB Suc";
    }
    return datba;

}

void createDB(){
    qDebug()<<"Start";
    QSqlDatabase d = connectDB();

    if (!d.open()){
        qDebug()<<"Db problem";
    } else {
       QSqlQuery q;

       bool a = q.exec("create database two");
       if (a == false){
           qDebug()<<"Query error";
        }
       else{
             qDebug()<< "Successful query";
           }
     }
    d.close();
    if (!d.open()){
        qDebug()<<"Closed";
    }

}
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*connectDB();
    createDB();*/



    planner w;
    w.show();
    /*login l;
    l.show();*/

    return a.exec();
}
