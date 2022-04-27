#include "food.h"
#include "ui_food.h"
#include "QMessageBox"

Food::Food(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Food)
{

    ui->setupUi(this);
    budgetdb = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("select current from current_user");
    if (qry.exec()){
        qry.first();
    current = qry.value(0).toString();
    qry.clear();
}
}

Food::~Food()
{
    QSqlQuery dest;
    dest.prepare("delete from current_user");
    if (dest.exec()){
        qDebug()<< "Destructor called";
    }
    dest.clear();
    budgetdb.close();
    delete ui;
}

void Food::on_pushButton_clicked()
{

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
    qry.bindValue(":usr",current);
    if (qry.exec()){
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        qry.clear();
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

