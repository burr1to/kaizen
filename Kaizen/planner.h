#ifndef PLANNER_H
#define PLANNER_H

#include <QDebug>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class planner; }
QT_END_NAMESPACE

class planner : public QMainWindow
{
    Q_OBJECT

public:
    planner(QWidget *parent = nullptr);
    ~planner();

private:
    Ui::planner *ui;
};
#endif // PLANNER_H

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
