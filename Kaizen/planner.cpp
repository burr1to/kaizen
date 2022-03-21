#include "planner.h"
#include "ui_planner.h"
#include <iostream>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>


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




/*
QSqlDatabase connectDB(){
    QSqlDatabase db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("test.db");
    return db;

}*/

void planner::on_dataSend_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/burr1to/Desktop/Kaizen/Kaizen/test.db");
    if (!db.open()){
        qDebug()<< "Failed";
    } else {
        qDebug()<< "Success";

    }
    if (!db.open()){
        return;
    }
    QString what = ui->addPlan->text();

    QSqlQuery q;
    if (what == " "){
        qDebug()<< "MT";
    }

        q.prepare("insert into plan(plandet) values (:plan)");
        q.bindValue(":plan",what);
        if (q.exec()){
            qDebug()<< "Ok";
        }

    ui->addPlan->clear();

    /*if(q.exec("insert into plan(plan) values ('"+what+"')")){
        qDebug()<< "Ok";
    };*/

}

