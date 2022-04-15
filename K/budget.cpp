
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include "budget.h"
#include "ui_budget.h"
#include "food.h"
#include "rent.h"
#include "other.h"
#include "stationery.h"


Budget::Budget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Budget)
{
    ui->setupUi(this);
    QString f,r,o,s,totstr;
    budgetdb = QSqlDatabase::database();
       if (!budgetdb.open()){
           qDebug()<< "Fail to open";
       }
       QSqlQuery sumq;
       if(sumq.exec("select sum(Price) from Info where Category = 'Food'")){
           sumq.first();
           f = sumq.value(0).toString();
           sumq.clear();
       }
       /*qDebug()<< f;
       if(sumq.exec("select sum(Price) from Info where Category = 'Rent'")){
           sumq.first();
           r = sumq.value(0).toString();
           sumq.clear();
       }
       qDebug()<< r;
       if(sumq.exec("select sum(Price) from Info where Category = 'Stationery'")){
           sumq.first();
           o = sumq.value(0).toString();
           sumq.clear();
       }
       qDebug()<< o;
       if(sumq.exec("select sum(Price) from Info where Category = 'Other'")){
           sumq.first();
           s = sumq.value(0).toString();
           sumq.clear();
       }*/
       int total=f.toInt()/*+r.toInt()+o.toInt()+s.toInt()*/;
       qDebug()<< total;

       ui->tot->setNum(total);
       ui->foodex->setText(f);
       /*ui->rentex->setText(r);
       ui->statex->setText(o);
       ui->totalex->setText(s);*/

       QSqlQueryModel *bqmodel= new QSqlQueryModel();
       bqmodel->setQuery("SELECT Item,Price FROM Info");
       ui->expta->setModel(bqmodel);

       budgetdb.close();




}

Budget::~Budget()
{
    delete ui;
}

void Budget::on_pushButton_1_clicked()
{
    Food dialog;
    dialog.setModal(true);
    dialog.exec();
}


void Budget::on_pushButton_3_clicked()
{
    Rent dialog;
    dialog.setModal(true);
    dialog.exec();
}

void Budget::on_pushButton_5_clicked()
{
    Stationery dialog;
    dialog.setModal(true);
    dialog.exec();
}


void Budget::on_pushButton_7_clicked()
{
    Other dialog;
    dialog.setModal(true);
    dialog.exec();
}

