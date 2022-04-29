#include "budget.h"
#include "ui_budget.h"
#include <QtDebug>


Budget::Budget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Budget)
{
    ui->setupUi(this);
//    Food conn;
//    QString f,r,o,s,totstr;
//    conn.connOpen();
//    if (!conn.connOpen()){
//        qDebug()<< "Fail to open";
//    }
//    QSqlQuery sumq;
//    if(sumq.exec("select sum(Price) from Info where Category = 'Food'")){
//        sumq.first();
//        f = sumq.value(0).toString();
//        sumq.clear();
//    }
//    qDebug()<< f;
//    if(sumq.exec("select sum(Price) from Info where Category = 'Rent'")){
//        sumq.first();
//        r = sumq.value(0).toString();
//        sumq.clear();
//    }
//    qDebug()<< r;
//    if(sumq.exec("select sum(Price) from Info where Category = 'Stationery'")){
//        sumq.first();
//        o = sumq.value(0).toString();
//        sumq.clear();
//    }
//    qDebug()<< o;
//    if(sumq.exec("select sum(Price) from Info where Category = 'Other'")){
//        sumq.first();
//        s = sumq.value(0).toString();
//        sumq.clear();
//    }
//    int total=f.toInt()+r.toInt()+o.toInt()+s.toInt();
//    qDebug()<< total;

//    ui->tot->setNum(total);
//    ui->foodex->setText(f);
//    ui->rentex->setText(r);
//    ui->totalex->setText(s);

//    QSqlQueryModel *bqmodel= new QSqlQueryModel();
//    QSqlQuery bq;
//    bqmodel->setQuery("SELECT Item,Price FROM Info");
//    ui->expta->setModel(bqmodel);
//    conn.connClose();
}

Budget::~Budget()
{
    delete ui;
};


void Budget::on_pushButton_5_clicked()
{
    hide();
        QWidget *parent = this->parentWidget();
        parent->show();
}

