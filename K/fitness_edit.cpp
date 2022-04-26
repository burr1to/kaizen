#include "fitness_edit.h"
#include "ui_fitness_edit.h"

#include "fitness.h"
#include <QMessageBox>
fitness_edit::fitness_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fitness_edit)
{
    ui->setupUi(this);
}

fitness_edit::~fitness_edit()
{
    delete ui;
}

void fitness_edit::on_pushButton_clicked()
{
        fitness_db = QSqlDatabase::database();
        QDateTime clock = QDateTime::currentDateTime();
        QString clock_text=clock.toString("yyyy-MM-dd-hh-mm-ss");

        QString weight;
        weight = ui->lineEdit->text();

        if (!fitness_db.open()){
            qDebug()<<"Failed to connect";
            return;
        } else {
            qDebug()<< "Connection done";
        }
        QSqlQuery qry;
        qry.prepare("INSERT INTO fitness(currentdate, weight) VALUES (:d,:weight)");
        qry.bindValue(":weight", weight);
        qry.bindValue(":d",clock_text);
        if (qry.exec()){
            qDebug()<<"done";
            qry.clear();
            fitness_db.close();
            ui->lineEdit->clear();
        }
        else{
            qry.clear();
            qDebug()<<"no";
        }
}

