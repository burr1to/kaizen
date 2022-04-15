#include "other.h"
#include "ui_other.h"
#include "food.h"
#include "QMessageBox"

Other::Other(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Other)
{
    ui->setupUi(this);
}

Other::~Other()
{
    delete ui;
}

void Other::on_pushButton_clicked()
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
    qry.bindValue(":category", "Other");
    if (qry.exec()){
        conn.connClose();
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }*/
}

