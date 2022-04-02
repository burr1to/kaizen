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



void signup::on_regBut_clicked()
{

    username = ui->user->text();
    password = ui->pass->text();
    f_name = ui->fname->text();
    l_name = ui->lname->text();
    email = ui->emailID->text();

    int count = 1;


    mydb = QSqlDatabase::database();

    if (!mydb.open()){
        qDebug()<< "Failed database";
    } else {
        qDebug()<< "Connect";
        QSqlQuery qu;
        QDate clickdate = ui->DOB->date();
        QString s = clickdate.toString("yyyy-MM-dd");
        qDebug()<< s;
        qu.prepare("insert into user(userid,username,password,fname,lname,dob,email) values (:id,:usr,:pss,:f,:l,:dob,:em)");
        qu.bindValue(":usr",username);
        qu.bindValue(":pss",password);
        qu.bindValue(":f",f_name);
        qu.bindValue(":l",l_name);
        qu.bindValue(":em",email);
        qu.bindValue(":id",count);
        qu.bindValue(":dob",s);


           if (qu.exec()){
            count++;
            qDebug()<< "Ok";
    }

}
}

