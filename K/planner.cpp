#include "planner.h"
#include "ui_planner.h"
#include "allplans.h"

Planner::Planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Planner)
{
    ui->setupUi(this);


    QString querystore[4];
     db = QSqlDatabase::database();
     QSqlQuery qry;
     qry.prepare("select current from current_user");
     if (qry.exec()){
         qry.first();
     current = qry.value(0).toString();
     qry.clear();


     }

      if (!db.open()){
           qDebug()<< "Fail to open in planner";
       } else qDebug()<< "Open in planner";
       QSqlQuery qq;
       qq.prepare("select plandetails from plan where planuser = '"+current+"' order by plandate desc, plantime desc limit 4");
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


       ui->plan_1->setText(querystore[0]);
       ui->plan_2->setText(querystore[1]);
       ui->plan_3->setText(querystore[2]);
       ui->plan_4->setText(querystore[3]);
       qq.clear();

       //db.close();

}

Planner::~Planner()
{
    QSqlQuery dest;
    dest.prepare("delete from current_user");
    if (dest.exec()){
        qDebug()<< "Destructor called";
    }
    db.close();
    delete ui;


}




void Planner::on_addbut_clicked()
{
    //db = QSqlDatabase::database();
           if (!db.open()){
               qDebug()<< "Failed";
               return;
           } else {
               qDebug()<< "Success";
           }
           QString newPlan = ui->addPlan->text();
           QDate date = ui->plandate->date();
           QString plandate = date.toString("yyyy-MM-dd");
           QTime time = ui->plantime->time();
           QString plantime = time.toString("HH:mm:ss");


           QSqlQuery q;

           if (newPlan.isEmpty()){
               ui->planerr->setText("No plan input!");
           }
           else{

               q.prepare("insert into plan(plandate,plantime,plandetails,planuser) values (:dt,:tm,:plan,:usr)");
               q.bindValue(":plan",newPlan);
               q.bindValue(":usr",current);
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

           //db.close();
}


void Planner::on_budgetbut_clicked()
{
    b = new Budget(this);
        this->hide();
        b->show();
}


void Planner::on_Logout_clicked()
{
    //db = QSqlDatabase::database();
    QSqlQuery destroy;
    destroy.prepare("delete * from current_user");
    if (destroy.exec()){
        qDebug()<< "Destructor called";
    }

    destroy.clear();
    //db.close();
    QCoreApplication::exit();
}


void Planner::on_fitbut_clicked()
{
    f = new fitness(this);
        this->hide();
        f->show();
}


void Planner::on_showplans_clicked()
{
    allplans *ap;
    ap = new allplans(this);
        ap->show();
}

