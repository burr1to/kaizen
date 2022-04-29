#include "budget.h"
#include "ui_budget.h"
#include <QtDebug>


Budget::Budget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Budget)
{
    ui->setupUi(this);

    QString f,r,o,s,totstr;
    budgetdb = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("select current from current_user");
    if (qry.exec()){
        qry.first();
    current = qry.value(0).toString();
    qry.clear();
    }

       if (!budgetdb.open()){
           qDebug()<< "Fail to open";
       }
       QSqlQuery sumq;
       if(sumq.exec("select sum(Price) from Info where Category = 'Food' and username = '"+current+"'")){
           sumq.first();
           f = sumq.value(0).toString();
           sumq.clear();
        }
    qDebug()<< f;
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
    }
    int total=f.toInt()+r.toInt()+o.toInt()+s.toInt();
    qDebug()<< total;

    QSqlQueryModel *bqmodel= new QSqlQueryModel();
    QSqlQuery bq;
    bqmodel->setQuery("SELECT Item,Price FROM Info");
    ui->expta->setModel(bqmodel);

}

Budget::~Budget()
{
    QSqlQuery dest;
       dest.prepare("delete from current_user");
       if (dest.exec()){
            qDebug()<< "Destructor called";
        }
        dest.clear();
    delete ui;
}






