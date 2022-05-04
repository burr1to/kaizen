#include "food.h"
#include "ui_food.h"
#include "QMessageBox"

Food::Food(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Food)
{
    ui->setupUi(this);
}

Food::~Food()
{
    delete ui;
}

void Food::on_pushButton_clicked()
{
    Food conn;
    QString price, item;
    item = ui->lineEdit->text();
    price = ui->lineEdit_2->text();

    if (!conn.connOpen()){
        qDebug()<<"Failed to connect";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO Info(item, price, category) VALUES(:item, :price, :category)");
    qry.bindValue(":price", price);
    qry.bindValue(":item", item);
    qry.bindValue(":category", "Food");
    if (qry.exec()){
        conn.connClose();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}

