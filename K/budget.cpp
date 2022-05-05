#include "budget.h"
#include "ui_budget.h"
#include "planner.h"
#include "fitness.h"


Budget::Budget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Budget)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);


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

   setTotals(current);

 QSqlQueryModel *bqmodel= new QSqlQueryModel();
  bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10");
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


void Budget::setTotals(QString username){
    QString a,b;
    QSqlQuery tot;
   if(tot.exec("select sum(Price) from INFO where category = 'Income' and username = '"+username+"'")){
        tot.first();
        a = tot.value(0).toString();
    }
    ui->intotal->setNum(a.toInt());
    tot.clear();
    if(tot.exec("select sum(Price) from INFO where  username = '"+username+"'")){
         tot.first();
         b = tot.value(0).toString();
     }
    tot.clear();
   if (b.isEmpty()){
       ui->extotal->setNum(0);
   }
   else{
       ui->extotal->setNum(b.toInt()-a.toInt());
   }
   int c = b.toInt()-a.toInt();

   ui->net->setNum(a.toInt()-c);

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

        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES (:item, :price, :category,:usr)");
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

        setTotals(current);
        QSqlQueryModel *bqmodel= new QSqlQueryModel();
         bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10");
         ui->expta->setModel(bqmodel);
        }
        else{
            qDebug()<<"No empty please";
        }

         allocatesomeofthis(budget);
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
        qry.prepare("INSERT INTO Info(item, price, category,username) VALUES (:item, :price, :category,:usr)");
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
          setTotals(current);
          QSqlQueryModel *bqmodel= new QSqlQueryModel();
           bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10");
           ui->expta->setModel(bqmodel);
        }
        else{
                qDebug()<<"No empty please";
        }

         allocatesomeofthis(budget);
}




int Budget::on_expta_activated(const QModelIndex &index)
{
    QString sui;
    QString val= ui->expta->model()->data(index).toString();
    qDebug()<< val;
    QSqlQuery q;
    q.prepare("select Item, Price, EID, Category from Info where EID ='"+val+"' or Item = '"+val+"' or Price = '"+val+"' or Category = '"+val+"'");
    if (q.exec()){
        while (q.next()){
            ui->itemr->setText(q.value(0).toString());
             ui-> pricer->setText(q.value(1).toString());
           ui->catr->setText(q.value(3).toString());
           sui = q.value(2).toString();

           //getdate = q.value
        }
    } else {
        qDebug()<< "Damn";
    }
    q.clear();
    getid = sui.toInt();
    return getid;
}



void Budget::allocatesomeofthis(QString budget){

    bud = budget.toInt();
    QSqlQuery quer;

    if (quer.exec("select sum(Price) from INFO where category = 'Income' and username = '"+current+"'")){
    quer.first();
    temp = quer.value(0).toString();
    quer.clear();
    qDebug()<< temp;
    }
    if (quer.exec("select sum(Price) from INFO where username = '"+current+"'")){
    quer.first();
    tempo = quer.value(0).toString();

    quer.clear();
    }

    inc = temp.toInt();
    total = tempo.toInt();
    exp = total-inc;
    netval = inc-exp;

    if (!temp.isEmpty() && !tempo.isEmpty()){

        qDebug()<<netval;
        allocated = bud + netval;
        ui->rem->setNum(allocated);

        ui->allbudget->setNum(bud);
        ui->allocating->clear();
    }

    else if(temp.isEmpty()){
        ui->intotal->setNum(0);
        ui->allbudget->setNum(bud);
        ui->rem->setNum(bud-exp);

        ui->allocating->clear();
    }
    else if (tempo.isEmpty()){
        ui->extotal->setNum(0);
        ui->allbudget->setNum(bud);
        ui->rem->setNum(bud+inc);

        ui->allocating->clear();
    }
    else{
        ui->allbudget->setNum(bud);
        ui->rem->setText("N/A");
        ui->allocating->clear();
    }
}

QString Budget::on_allocating_returnPressed()
{
    budget = ui->allocating->text();
    allocatesomeofthis(budget);
    return budget;


}


void Budget::on_planner_clicked()
{
    this->close();
    Planner *p = new Planner(this);
    p->show();
}


void Budget::on_fit_butt_clicked()
{
    this->close();
    fitness *f = new fitness(this);
    f->show();
}


void Budget::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}


void Budget::on_updatebutt_clicked()
{
    QString item,price,category;
     item = ui->itemr->text();

     price = ui->pricer->text();

     category = ui->catr->text();

    if (!item.isEmpty() && !price.isEmpty() && !category.isEmpty()){
        QSqlQuery sq;
        sq.prepare("update Info set Item = '"+item+"', Price = '"+price+"', Category = '"+category+"' where eid = :id");
        sq.bindValue(":id",getid);
       if (sq.exec()){
           qDebug()<< "Edit updated";
           ui->itemr->clear();
           ui->pricer->clear();
           ui->catr->clear();
       }
       else{
           qDebug()<< "Nope";
       }
       sq.clear();
       QSqlQueryModel *bqmodel= new QSqlQueryModel();
        bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10" );
        ui->expta->setModel(bqmodel);

        ui->foodtot->setText(addItemstoDatabase(current,"Food",f));
        ui->edutot->setText(addItemstoDatabase(current,"Education",e));
        ui->othertot->setText(addItemstoDatabase(current,"Other",s));
        ui->intot->setText(addItemstoDatabase(current,"Income",o));
        setTotals(current);
         allocatesomeofthis(budget);
    }
    else{
        qDebug()<<"suii";
    }
}


void Budget::on_deletebutt_clicked()
{
        QSqlQuery qu;
        qu.prepare("delete from Info where eid = :psl");
        qu.bindValue(":psl",getid);
        if (qu.exec()){
            qDebug()<<"Exec";
        }else {
            qDebug()<<"Um";
        }
        qu.clear();

        ui->itemr->clear();
        ui->pricer->clear();
        ui->catr->clear();
        QSqlQueryModel * model = new QSqlQueryModel();
        model->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"'");
        ui->expta->setModel(model);

        ui->foodtot->setText(addItemstoDatabase(current,"Food",f));
        ui->edutot->setText(addItemstoDatabase(current,"Education",e));
        ui->othertot->setText(addItemstoDatabase(current,"Other",s));
        ui->intot->setText(addItemstoDatabase(current,"Income",o));
        setTotals(current);
         allocatesomeofthis(budget);
}


void Budget::on_pushButton_13_clicked()
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
       setTotals(current);
       QSqlQueryModel *bqmodel= new QSqlQueryModel();
        bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10");
        ui->expta->setModel(bqmodel);
    }
    else{
       qDebug()<<"No empty please";
    }

    allocatesomeofthis(budget);
}


void Budget::on_pushButton_4_clicked()
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
        setTotals(current);
        QSqlQueryModel *bqmodel= new QSqlQueryModel();
         bqmodel->setQuery("SELECT Item,Price,Category FROM Info where username = '"+current+"' order by eid desc limit 10");
         ui->expta->setModel(bqmodel);
     }
     else{
         qDebug()<<"No empty please";
     }

      allocatesomeofthis(budget);
}


void Budget::on_logo_clicked()
{
    this->close();
    Planner *p = new Planner(this);
    p->show();
}


