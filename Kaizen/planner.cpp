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


/*if(q.exec("insert into plan(plan) values ('"+what+"')")){
    qDebug()<< "Ok";
};*/

void planner::on_dataSend_clicked()
{
     db = QSqlDatabase::database();
    if (!db.open()){
        qDebug()<< "Failed";
        return;
    } else {
        qDebug()<< "Success";
    }
    QString what = ui->addPlan->text();

    QSqlQuery q;
    if (what == ""){
        qDebug()<< "MT";
    }
    else{
        q.prepare("insert into plan(plandet) values (:plan)");
        q.bindValue(":plan",what);
        if (q.exec()){
            qDebug()<< "Ok";
            ui->addPlan->clear();
            q.clear();
        }else {
            qDebug()<< "n";
        }
    }

    db.close();

    }



void planner::on_pushButton_clicked()
{
    db = QSqlDatabase::database();
    QSqlQueryModel * model = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(db);
    qry->prepare("select * from plan order by plandet desc");
    qry->exec();
    model->setQuery(*qry);
    delete qry;
    int rowcount = model->rowCount();
    qDebug()<< rowcount;

    ui->listView->setModel(model);
    db.close();
}

