#include "signup.h"
#include "ui_signup.h"
#include "login.h"
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <iostream>


signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);

}

signup::~signup()
{
    delete ui;
}


void signup::on_pushButton_clicked()
{
    QString username,password,f_name,l_name,email,phone;
    /*int weight,height;*/
    username = ui->username->text();
    password = ui->password->text();
    f_name = ui->f_name->text();
    l_name = ui->l_name->text();
    email = ui->email->text();
    phone = ui->phone->text();
   /* weight = ui->weight->text();
    height = ui->height->text();*/

    mydb = QSqlDatabase::database();

    if (!mydb.open()){
        qDebug()<< "Failed database";
    } else {
        qDebug()<< "Connect";
        QSqlQuery qu;
        qu.prepare("insert into user(username,password,f_name,l_name) values (:usr,:pss,:f,:l)");
        qu.bindValue(":usr",username);
        qu.bindValue(":pss",password);
        qu.bindValue(":f",f_name);
        qu.bindValue(":l",l_name);
        if (qu.exec()){
            qDebug()<< "Ok";
    }

}
}

