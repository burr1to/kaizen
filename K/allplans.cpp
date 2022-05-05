#include "allplans.h"
#include "ui_allplans.h"

allplans::allplans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::allplans)
{
    ui->setupUi(this);
    ui->datecome->setDate(QDate::currentDate());
    db = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("select current from current_user");
    if (qry.exec()){
        qry.first();
    current = qry.value(0).toString();
    qry.clear();
    qDebug()<<current;

    }
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setQuery("select plandetails from plan where planuser = '"+current+"'");
    ui->listView->setModel(model);

}
int a;
allplans::~allplans()
{
    db.close();
    delete ui;
}

int allplans::on_listView_activated(const QModelIndex &index)
{
    QString val= ui->listView->model()->data(index).toString();
       QSqlQuery que;
       que.prepare("select * from plan where plandetails = '"+val+"'");

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

       return a;
}

void allplans::on_pushButton_clicked()
{
    QString upplan,update,uptime;
     upplan = ui->editingPlan->text();
     QDate d = ui->datecome->date();
     update = d.toString("yyyy-MM-dd");
     QTime t = ui->timecome->time();
     uptime = t.toString("HH:mm:ss");

    if (!upplan.isEmpty()){
        QSqlQuery sq;
        sq.prepare("update plan set plandate = '"+update+"', plantime = '"+uptime+"', plandetails = '"+upplan+"' where planid = :pl");
        sq.bindValue(":pl",a);
       if (sq.exec()){
           qDebug()<< "Edit updated";
           ui->editingPlan->clear();
           ui->datecome->clear();
           ui->timecome->clear();
       }
       else{
           qDebug()<< "Nope";
       }
       sq.clear();
       QSqlQueryModel * model = new QSqlQueryModel();
       model->setQuery("select plandetails from plan where planuser = '"+current+"'");
       ui->listView->setModel(model);
    }
    else{
        ui->txterr->setText("Add something on plan!");
    }
}

void allplans::on_pushButton_3_clicked()
{

        qDebug()<<a;
        QSqlQuery qu;
        qu.prepare("delete from plan where planid = :psl");
        qu.bindValue(":psl",a);
        if (qu.exec()){
            qDebug()<<"Exec";
        }else {
            qDebug()<<"Um";
        }
        qu.clear();

        ui->editingPlan->clear();
        ui->datecome->clear();
        ui->timecome->clear();
        QSqlQueryModel * model = new QSqlQueryModel();
        model->setQuery("select plandetails from plan where planuser = '"+current+"'");
        ui->listView->setModel(model);

    }





