#ifndef ERRTHANG_H
#define ERRTHANG_H
#include <QDebug>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
/*
QSqlDatabase connectDB(){
    QSqlDatabase datba= QSqlDatabase::addDatabase("QMYSQL");
    datba.setHostName("localhost");
    datba.setDatabaseName("kaizen");
    datba.setUserName("root");
    datba.setPassword("");
    if (datba.open()){
        qDebug()<< "DB Suc";
    }
    return datba;
}*/
/*
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






#endif // ERRTHANG_H
