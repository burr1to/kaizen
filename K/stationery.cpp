#include "stationery.h"
#include "ui_stationery.h"
#include "food.h"
#include "QMessageBox"

Stationery::Stationery(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stationery)
{
    ui->setupUi(this);
}

Stationery::~Stationery()
{
    delete ui;
}

void Stationery::on_pushButton_clicked()
{
    /*Food conn;
    QString price, item;
    item = ui->lineEdit->text();
    price = ui->lineEdit_2->text();

    if (!conn.connOpen()){
        qDebug()<<"Failed to connect";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO Info(item, price, category) VALUES(:item, :price, :category)");
    qry.bindValue(":price", price);
    qry.bindValue(":item", item);
    qry.bindValue(":category", "Stationery");
    if (qry.exec()){
        conn.connClose();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }*/
}

