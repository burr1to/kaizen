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
    budgetdb = QSqlDatabase::database();
    QString price, item;
    item = ui->lineEdit->text();
    price = ui->lineEdit_2->text();

    if (!budgetdb.open()){
        qDebug()<<"Failed to connect";
        return;
    }
    QSqlQuery qry;
    qry.prepare("INSERT INTO Info(item, price, category,username) VALUES(:item, :price, :category,:usr)");
    qry.bindValue(":price", price);
    qry.bindValue(":item", item);
    qry.bindValue(":category", "Food");
    qry.bindValue(":usr","burrito");
    if (qry.exec()){
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        qry.clear();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
    budgetdb.close();
}

