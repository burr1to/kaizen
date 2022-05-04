#include "budget.h"
#include "ui_budget.h"
#include "planner.h"


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

ui->hellotxt->setText("Hello " + current.toUpper() + " !");

   ui->foodtot->setText(addItemstoDatabase(current,"Food",f));
   ui->edutot->setText(addItemstoDatabase(current,"Education",e));
   ui->othertot->setText(addItemstoDatabase(current,"Other",s));
   ui->intot->setText(addItemstoDatabase(current,"Income",o));

   setTotals();

 QSqlQueryModel *bqmodel= new QSqlQueryModel();
  bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"'");
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

void Budget::setTotals(){
    QString a,b;
    QSqlQuery tot;
   if(tot.exec("select sum(Price) from INFO where category = 'Income'")){
        tot.first();
        a = tot.value(0).toString();
    }

    ui->intotal->setNum(a.toInt());
    tot.clear();
    if(tot.exec("select sum(Price) from INFO")){
         tot.first();
         b = tot.value(0).toString();
     }
    tot.clear();

   ui->extotal->setNum(b.toInt());
   ui->net->setNum(b.toInt()-a.toInt());

}

QString Budget::addItemstoDatabase(QString current, QString variable,QString a){
    QSqlQuery sumq;
   if(sumq.exec("select sum(Price) from Info where Category = '"+variable+"' and username = '"+current+"'")){
        sumq.first();
        a = sumq.value(0).toString();
    }
    sumq.clear();
    return a;

}

void Budget::on_pushButton_5_clicked()
{
    hide();
        QWidget *parent = this->parentWidget();
        parent->show();
}


void Budget::on_pushButton_3_clicked()
{

        item = ui->edu_item->text();
        price = ui->edu_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        if (!item.isEmpty() && !price.isEmpty()){
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



       ui->edutot->setText(addItemstoDatabase(current,"Education",e));
       extotal=f.toInt()+e.toInt()+s.toInt();
       intotal = o.toInt();

        setTotals();
        QSqlQueryModel *bqmodel= new QSqlQueryModel();
         bqmodel->setQuery("SELECT Item,Price FROM Info where username = '"+current+"'");
         ui->expta->setModel(bqmodel);

        }
        else{
            qDebug()<<"No empty please";
        }

}


void Budget::on_pushButton_12_clicked()
{

        item = ui->f_item->text();
        price = ui->f_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
         if (!item.isEmpty() && !price.isEmpty()){
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
         ui->foodtot->setText(addItemstoDatabase(current,"Food",f));
            setTotals();
            QSqlQueryModel *bqmodel= new QSqlQueryModel();
             bqmodel->setQuery("SELECT Item,Price FROM Info where username = '"+current+"'");
             ui->expta->setModel(bqmodel);
         }
         else{
             qDebug()<<"No empty please";
         }

}


void Budget::on_pushButton_9_clicked()
{

        item = ui->o_item->text();
        price = ui->o_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        if (!item.isEmpty() && !price.isEmpty()){
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

          ui->othertot->setText(addItemstoDatabase(current,"Other",s));
          setTotals();
          QSqlQueryModel *bqmodel= new QSqlQueryModel();
           bqmodel->setQuery("SELECT Item,Price FROM Info where username = '"+current+"'");
           ui->expta->setModel(bqmodel);
        }
        else{
                qDebug()<<"No empty please";
        }

}


void Budget::on_pushButton_4_clicked()
{

        item = ui->in_item->text();
        price = ui->in_amount->text();

        if (!budgetdb.open()){
            qDebug()<<"Failed to connect";
            return;
        }
        if (!item.isEmpty() && !price.isEmpty()){
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
         ui->intot->setText(addItemstoDatabase(current,"Income",o));
           setTotals();
           QSqlQueryModel *bqmodel= new QSqlQueryModel();
            bqmodel->setQuery("SELECT Item,Price FROM Info where username = '"+current+"'");
            ui->expta->setModel(bqmodel);
        }
        else{
           qDebug()<<"No empty please";
        }

}





int Budget::on_expta_activated(const QModelIndex &index)
{
    QString val= ui->expta->model()->data(index).toString();
    qDebug()<< val;
}



void Budget::on_allocating_returnPressed()
{
    QString test = ui->allbudget->text();
    QString tempo,temp;
    int inc,bud,exp,allocated;

    QString budget = ui->allocating->text();
    bud = budget.toInt();
    QSqlQuery quer;

    if (quer.exec("select sum(Price) from INFO where category = 'Income'")){
    quer.first();
    temp = quer.value(0).toString();
    quer.clear();
    }


    if (quer.exec("select sum(Price) from INFO")){
    quer.first();
    tempo = quer.value(0).toString();
    qDebug()<<tempo;
    quer.clear();
    }

    inc = temp.toInt();
    exp = tempo.toInt();
    int netval = inc-exp;

    if (netval<0){
        allocated = bud + netval;
        ui->rem->setNum(allocated);
    } else if(netval>0){
        allocated = bud - netval;
        ui->rem->setNum(allocated);
    }
    else{
        qDebug()<< "Eror";
    }


    ui->allbudget->setNum(bud);
    ui->allocating->clear();


}

