#include "planner.h"
#include "ui_planner.h"
#include "errthang.h"
#include <iostream>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

using namespace std;
planner::planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::planner)
{
    ui->setupUi(this);
}

planner::~planner()
{
    delete ui;
}



void planner::on_addPlan_returnPressed()
{
 qDebug()<< "Pressed xdxdxd";
}



QSqlDatabase connectDB(){
    QSqlDatabase datba= QSqlDatabase::addDatabase("QMYSQL");
    datba.setHostName("localhost");
    datba.setDatabaseName("kaizen");
    datba.setUserName("sqluser");
    datba.setPassword("password");
    if (datba.open()){
        qDebug()<< "DB Suc";
    } else{
        qDebug() << "DB Fail";
    }
    return datba;

}

void planner::on_dataSend_clicked()
{
    QSqlDatabase db = connectDB();
    QString plan = ui->addPlan->text();
    qDebug()<< plan;
    QSqlQuery q;
    q.prepare("INSERT INTO plan VALUES (:plan)");
    q.bindValue(":plan",plan);
    if (q.exec()){
              QMessageBox::information(this,"Inserted","Data inserted");
          } else{
              QMessageBox::information(this,"Error in insertion","Error in insertion pedro");

          }
    db.close();
    ui->addPlan->clear();


}

