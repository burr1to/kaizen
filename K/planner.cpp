#include "planner.h"
#include "ui_planner.h"
#include "allplans.h"
#include <QDate>
 QString querystore[4],datestore[4],timestore[4],fitstore[3];

Planner::Planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Planner)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);


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

    setbudget(current);
    setfitness();
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
void Planner::setbudget(QString username){
        QString a,b;
        QSqlQuery tot;
       if(tot.exec("select sum(Price) from INFO where category = 'Income' and username = '"+username+"'")){
            tot.first();
            a = tot.value(0).toString();
        }
        tot.clear();

        if(tot.exec("select sum(Price) from INFO where username = '"+username+"'")){
             tot.first();
             b = tot.value(0).toString();
         }
        tot.clear();

        int c = b.toInt()-a.toInt();
        QString fin = QString::number(c);

        if (a.isEmpty() && b.isEmpty()){
            ui->exp->setText("N/A");
            ui->net->setText("Rs. " + fin);
            ui->inc->setText("N/A");

        }
        else{
            ui->exp->setText("Rs. " + b);

            ui->net->setText("Rs. " + fin);
            ui->inc->setText("Rs. " + a);
        }


}
void Planner::setfitness(){
    //QString we,he,bmi;
    //float bee;
    QSqlQuery g;
    g.prepare("select weight,height,bmi from fitness where username = '"+current+"' order by currentdate desc limit 1");
    if (g.exec()){
        qDebug()<<"Cool";
        g.first();
           fitstore[0] = g.value(0).toString();
          fitstore[1] = g.value(1).toString();
           fitstore[2] = g.value(2).toString();

    }
    else{
        qDebug()<<"No";
    }
    ui->bmit->setText(fitstore[2]);
    ui->weightt->setText(fitstore[0]);
    ui->heightt->setText(fitstore[1]);
    g.clear();

}

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

           ui->plan_1->setText(querystore[0] + "\n" +  "\n"  + datestore[0] + "       " + timestore[0]);
           ui->plan_2->setText(querystore[1] + "\n" +  "\n" + datestore[1] + "        " + timestore[1]);
           ui->plan_3->setText(querystore[2] + "\n" +  "\n" + datestore[2] + "        " + timestore[2]);
           ui->plan_4->setText(querystore[3] + "\n" +  "\n" + datestore[3] + "        " + timestore[3]);

}


void Planner::on_budgetbut_clicked()
{
     db.close();
    b = new Budget(this);
        this->close();
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
    this->close();
    //Login

}


void Planner::on_fitbut_clicked()
{
    db.close();
    f = new fitness(this);
        this->close();
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


void Planner::on_allplans_clicked()
{
    allplans *ap= new allplans(this);
    ap->show();
}

void Planner::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void Planner::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}



