
#include <iostream>
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDateTime>
#include "planner.h"
#include "ui_planner.h"
#include "login.h"
#include "budget.h"
int a;
using namespace std;
planner::planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::planner)
{
     QString querystore[4];
    ui->setupUi(this);
    db = QSqlDatabase::database();
    if (!db.open()){
        qDebug()<< "Fail to open in planner";
    } else qDebug()<< "Open in planner";
    QSqlQuery qq;
    qq.prepare("select plandetails from plan where planuser = 'burrito' order by plandate asc, plantime desc");
    if(qq.exec()){
        qDebug()<<"Exec";

        while(qq.next()){

        for (int i = 0; i < 4;i++){
            querystore[i] = qq.value(0).toString();
            qq.next();
        }
        }

    }
    else{
        qDebug()<<"Error";
    }


    ui->plan1->setText(querystore[0]);
    ui->plan2->setText(querystore[1]);
    ui->plan3->setText(querystore[2]);
    ui->plan4->setText(querystore[3]);
    qq.clear();

    db.close();

}

planner::~planner()
{
    delete ui;
}

void planner::on_dataSend_clicked()
{

    db = QSqlDatabase::database();
        if (!db.open()){
            qDebug()<< "Failed";
            return;
        } else {
            qDebug()<< "Success";
        }
        QString newPlan = ui->addPlan->text();
        QDate date = ui->pd->date();
        QString plandate = date.toString("yyyy-MM-dd");
        QTime time = ui->pt->time();
        QString plantime = time.toString("HH:mm:ss");


        QSqlQuery q;

        if (newPlan.isEmpty()){
            ui->planerr->setText("No plan input!");
        }
        else{

            q.prepare("insert into plan(plandate,plantime,plandetails,planuser) values (:dt,:tm,:plan,:usr)");
            q.bindValue(":plan",newPlan);
            q.bindValue(":usr","burrito");
            q.bindValue(":dt",plandate);
            q.bindValue(":tm",plantime);
            if (q.exec()){
                qDebug()<< "Ok";
                ui->addPlan->clear();
                q.clear();
            }else {
                qDebug()<< "n";
                q.clear();
            }
        }

        db.close();


    }



void planner::on_pushButton_clicked()
{
    db = QSqlDatabase::database();
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select plandetails from plan where planuser = 'burrito'");
    int rowcount = model->rowCount();
    qDebug()<< rowcount;

    ui->listView->setModel(model);
    db.close();
}


void planner::on_budgetbut_clicked()
{
    b = new Budget(this);
    this->hide();
    b->show();
}




int planner::on_listView_activated(const QModelIndex &index)
{
    QString val= ui->listView->model()->data(index).toString();
    db = QSqlDatabase::database();
    QSqlQuery que;
    que.prepare("select * from plan where plandetails = '"+val+"' ");

    if (que.exec()){

        while(que.next()){

            ui->editingPlan->setText(que.value(2).toString());
            ok = que.value(0).toString();
            ok2 = que.value(1).toString();
            QDate datecome = QDate::fromString(ok,"yyyy-MM-dd");
            QTime timecome = QTime::fromString(ok2,"HH:mm:ss");
            ui->datecome->setDate(datecome);
            ui->timecome->setTime(timecome);

            a = que.value(3).toInt();




        }

    } else {
        qDebug()<<"Nope not done";

    }
    que.clear();
    db.close();
    return a;

}


void planner::on_updateBut_clicked()
{
 QString upplan,update,uptime;
 upplan = ui->editingPlan->text();

 QDate d = ui->datecome->date();
 update = d.toString("yyyy-MM-dd");
 QTime t = ui->timecome->time();
 uptime = t.toString("HH:mm:ss");


 db = QSqlDatabase::database();
 QSqlQuery sq;
 sq.prepare("update plan set plandate = '"+update+"', plantime = '"+uptime+"', plandetails = '"+upplan+"' where planid = :pl");
 sq.bindValue(":pl",a);
if (sq.exec()){
    qDebug()<< "Edit updated";

}
else{
    qDebug()<< "Nope";
}
sq.clear();
db.close();
}


void planner::on_deleteBut_clicked()
{
    QString delp,deld,delt;
    delp = ui->editingPlan->text();
    QDate d = ui->datecome->date();
    deld = d.toString("yyyy-MM-dd");
    QTime t = ui->timecome->time();
    delt = t.toString("HH:mm:ss");
    qDebug()<<a;
    db = QSqlDatabase::database();
    QSqlQuery qu;
    qu.prepare("delete from plan where planid = :psl");
    qu.bindValue(":psl",a);
    if (qu.exec()){
        qDebug()<<"Exec";
    }else {
        qDebug()<<"Um";
    }
    qu.clear();
    db.close();
    ui->editingPlan->clear();
    ui->datecome->clear();
    ui->timecome->clear();

}

