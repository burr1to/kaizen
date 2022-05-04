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
    delete ui;
}


void fitness_edit::insertData(QString weight, QString height, QString clock_text, float bmi, QString current){
    QSqlQuery qry;
    qry.prepare("INSERT INTO fitness(currentdate,weight,height,bmi,username) VALUES (:d,:w,:h,:b,:usr)");
    qry.bindValue(":w", weight);
    qry.bindValue(":h", height);
    qry.bindValue(":b", bmi);
    qry.bindValue(":usr", current);
    qry.bindValue(":d",clock_text);
    if (qry.exec()){
        qDebug()<<"done";
        qry.clear();

        ui->weight->clear();
        ui->height->clear();
    }
    else{
        qDebug()<<"no";
    }
    qry.clear();
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
    clock_text=clock.toString("yyyy-MM-dd-hh-mm-ss");
    float bmi = 10.0;
    weight = ui->weight->text();
    height = ui->height->text();
    insertData(weight,height,clock_text,bmi,current);
    fitness_db.close();
    //this->close();


}


void fitness_edit::on_pushButton_clicked()
{
    this->close();
}

