#include "fitness_edit.h"
#include "ui_fitness_edit.h"
#include "fitness.h"
#include <QMessageBox>
fitness_edit::fitness_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fitness_edit)
{
    ui->setupUi(this);
   fitness_db = QSqlDatabase::database();

    QSqlQuery q;
    q.prepare("select current from current_user");
    if (q.exec()){
        q.first();
    current = q.value(0).toString();
    q.clear();
    }
    qDebug()<< current;
    fitness_db.close();
}

fitness_edit::~fitness_edit()
{

    /*fitness *f;
    f = new fitness(this);
    f->show();*/
    delete ui;
}




void fitness_edit::on_submit_clicked()
{
    fitness_db = QSqlDatabase::database();
    if (!fitness_db.open()){
        qDebug()<<"Failed to connect";
        return;
    } else {
        qDebug()<< "Connection done";
    }
    QDateTime clock = QDateTime::currentDateTime();
    QString clock_text=clock.toString("yyyy-MM-dd-hh-mm-ss");

    QString weight,height;
    weight = ui->weight->text();
    height = ui->height->text();
    /*int wt,ht;
    ht = height.toInt();
    wt = weight.toInt();
    float bmi;
    ht = ht/100;
    bmi = wt/(ht*ht);
    qDebug()<< bmi;*/


    QSqlQuery qry;
    qry.prepare("INSERT INTO fitness(currentdate,weight,height,bmi,username) VALUES (:d,:w,:h,:b,:usr)");
    qry.bindValue(":w", weight);
    qry.bindValue(":h", height);
    qry.bindValue(":b", 10);
    qry.bindValue(":usr", current);
    qry.bindValue(":d",clock_text);
    if (qry.exec()){
        qDebug()<<"done";
        qry.clear();

        ui->weight->clear();
        ui->height->clear();
    }
    else{
        qry.clear();
        qDebug()<<"no";
    }
    fitness_db.close();

}

