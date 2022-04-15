#include "rent.h"
#include "ui_rent.h"
#include "food.h"
#include "QMessageBox"

Rent::Rent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rent)
{
    ui->setupUi(this);
}

Rent::~Rent()
{
    delete ui;
}

void Rent::on_pushButton_clicked()
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
    qry.bindValue(":category", "Rent");
    if (qry.exec()){
        conn.connClose();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }*/
}

