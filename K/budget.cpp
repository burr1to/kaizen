#include "budget.h"
#include "ui_budget.h"
#include <QtDebug>


Budget::Budget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Budget)
{
    ui->setupUi(this);
    budgetdb = QSqlDatabase::database();
       QSqlQuery qry;
       qry.prepare("select current from current_user");
       if (qry.exec()){
           qry.first();
       current = qry.value(0).toString();
       qry.clear();
       }




    QSqlQuery sumq;
   if(sumq.exec("select sum(Price) from Info where Category = 'Food' and username = '"+current+"'")){
        sumq.first();
        f = sumq.value(0).toString();
        sumq.clear();
    }
   ui->foodtot->setText(f);

    if(sumq.exec("select sum(Price) from Info where Category = 'Education' and username = '"+current+"'")){
        sumq.first();
        e = sumq.value(0).toString();
        sumq.clear();
   }
     ui->edutot->setText(e);

    if(sumq.exec("select sum(Price) from Info where Category = 'Income' and username = '"+current+"'")){
       sumq.first();
       o = sumq.value(0).toString();
        sumq.clear();
    }
     ui->intot->setText(o);

    if(sumq.exec("select sum(Price) from Info where Category = 'Other' and username = '"+current+"'")){
        sumq.first();
        s = sumq.value(0).toString();
        sumq.clear();
    }
     ui->othertot->setText(s);

     extotal=f.toInt()+e.toInt()+s.toInt();
    intotal = o.toInt();


    ui->extotal->setNum(extotal);
    ui->intotal->setNum(intotal);






 QSqlQueryModel *bqmodel= new QSqlQueryModel();
  bqmodel->setQuery("SELECT Item,Price FROM Info where username = '""+current+'");
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
       budgetdb.close();
    delete ui;
};


void Budget::addItemstoDatabase(){
    QSqlQuery sumq;
   if(sumq.exec("select sum(Price) from Info where Category = '"+variable+"' and username = '"+current+"'")){
        sumq.first();
        a = sumq.value(0).toString();
        sumq.clear();
    }
    sumq.clear();
   ui->edutot->setText(a);

}

void Budget::on_pushButton_5_clicked()
{
    hide();
        QWidget *parent = this->parentWidget();
        parent->show();
}


void Budget::on_pushButton_3_clicked()
{
    QString price, item;
        item = ui->edu_item->text();
        price = ui->edu_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        QSqlQuery qry;
        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES(:item, :price, :category,:usr)");
        qry.bindValue(":price", price);
        qry.bindValue(":item", item);
        qry.bindValue(":category", "Education");
        qry.bindValue(":usr",current);
        if (qry.exec()){
            ui->edu_item->setText("");
            ui->edu_amount->setText("");
            qry.clear();
        }
        else{
           qDebug()<<"Error";
        }

        QSqlQuery sumq;
       if(sumq.exec("select sum(Price) from Info where Category = 'Education' and username = '"+current+"'")){
            sumq.first();
            e = sumq.value(0).toString();
            sumq.clear();
        }
        sumq.clear();
       ui->edutot->setText(e);
}


void Budget::on_pushButton_12_clicked()
{
    QString price, item;
        item = ui->f_item->text();
        price = ui->f_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        QSqlQuery qry;
        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES(:item, :price, :category,:usr)");
        qry.bindValue(":price", price);
        qry.bindValue(":item", item);
        qry.bindValue(":category", "Food");
        qry.bindValue(":usr",current);
        if (qry.exec()){
            ui->f_item->setText("");
            ui->f_amount->setText("");
            qry.clear();
        }
        else{
             qDebug()<<"Error";
        }
        QSqlQuery sumq;
        if(sumq.exec("select sum(Price) from Info where Category = 'Food' and username = '"+current+"'")){
            sumq.first();
            f = sumq.value(0).toString();
            sumq.clear();
       }
         sumq.clear();
         ui->foodtot->setText(f);
}


void Budget::on_pushButton_9_clicked()
{
    QString price, item;
        item = ui->o_item->text();
        price = ui->o_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        QSqlQuery qry;
        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES(:item, :price, :category,:usr)");
        qry.bindValue(":price", price);
        qry.bindValue(":item", item);
        qry.bindValue(":category", "Other");
        qry.bindValue(":usr",current);
        if (qry.exec()){
            ui->o_item->setText("");
            ui->o_amount->setText("");
            qry.clear();
        }
        else{
            qDebug()<<"Error";
        }

           QSqlQuery sumq;
         if(sumq.exec("select sum(Price) from Info where Category = 'Other' and username = '"+current+"'")){
             sumq.first();
             s = sumq.value(0).toString();
             sumq.clear();
         }
         sumq.clear();
          ui->othertot->setText(s);
}


void Budget::on_pushButton_4_clicked()
{
    QString price, item;
        item = ui->in_item->text();
        price = ui->in_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        QSqlQuery qry;
        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES(:item, :price, :category,:usr)");
        qry.bindValue(":price", price);
        qry.bindValue(":item", item);
        qry.bindValue(":category", "Income");
        qry.bindValue(":usr",current);
        if (qry.exec()){
            ui->in_item->setText("");
            ui->in_amount->setText("");
            qry.clear();
        }
        else{
             qDebug()<<"Error";
        }
        QSqlQuery sumq;
       if(sumq.exec("select sum(Price) from Info where Category = 'Income' and username = '"+current+"'")){
          sumq.first();
          o = sumq.value(0).toString();
           sumq.clear();
       }
        sumq.clear();
        ui->intot->setText(o);
}

