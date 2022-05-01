#include "planner.h"
#include "ui_planner.h"
#include "allplans.h"
 QString querystore[4],datestore[4],timestore[4];

Planner::Planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Planner)
{
    ui->setupUi(this);

     ui->plandate->setDate(QDate::currentDate());

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

       ui->heytxt->setText("Hello " + current.toUpper() + " !");

       showfour(current,querystore,datestore,timestore);

       ui->plan_1->setText(querystore[0] + "\n" +  "\n" + datestore[0] + "   " + timestore[0]);
       ui->plan_2->setText(querystore[1] + "\n" +  "\n" + datestore[1] + "   " + timestore[1]);
       ui->plan_3->setText(querystore[2] + "\n" +  "\n" + datestore[2] + "   " + timestore[2]);
       ui->plan_4->setText(querystore[3] + "\n" +  "\n" + datestore[3] + "   " + timestore[3]);


       //db.close();

}

Planner::~Planner()
{
    QSqlQuery dest;
    dest.prepare("delete from current_user");
    if (dest.exec()){
        qDebug()<< "Destructor called";
    }
    dest.clear();
    db.close();
    delete ui;


}
void Planner::setbudget(){}
void Planner::setfitness(){}

void Planner::showfour(QString current,QString querystore[],QString datestore[],QString timestore[]){
    QSqlQuery qq;
    qq.prepare("select plandetails,plandate,plantime from plan where planuser = '"+current+"' order by plandate desc, plantime desc limit 4");
    if(qq.exec()){
        qDebug()<<"Exec";

        while(qq.next()){

        for (int i = 0; i < 4;i++){
            querystore[i] = qq.value(0).toString();
            datestore[i] = qq.value(1).toString();
            timestore[i] = qq.value(2).toString();

            qq.next();
        }
        }

    }
    else{
        qDebug()<<"Error";
        qq.clear();
    }
}

void Planner::on_addbut_clicked()
{

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
           showfour(current,querystore,datestore,timestore);

           ui->plan_1->setText(querystore[0] + "\n" +  "\n" + datestore[0] + "   " + timestore[0]);
           ui->plan_2->setText(querystore[1] + "\n" +  "\n" + datestore[1] + "   " + timestore[1]);
           ui->plan_3->setText(querystore[2] + "\n" +  "\n" + datestore[2] + "   " + timestore[2]);
           ui->plan_4->setText(querystore[3] + "\n" +  "\n" + datestore[3] + "   " + timestore[3]);

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
    db.close();
    f = new fitness(this);
        this->hide();
        f->show();
}


void Planner::on_showplans_clicked()
{
    allplans *ap= new allplans(this);
    ap->show();
}


void Planner::on_pushButton_clicked()
{
    this->close();
    Planner *back = new Planner(this);
    back->show();
}

