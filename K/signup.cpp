#include "signup.h"
#include "ui_signup.h"
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
    /*mydb = QSqlDatabase::database();
    queryCreate();
    mydb.close();*/

}

signup::~signup()
{
    delete ui;
}





void signup::on_regBut_clicked()
{

    QString username = ui->user->text();
    QString password = ui->pass->text();
    QString f_name = ui->fname->text();
    QString l_name = ui->lname->text();
    QString email = ui->emailID->text();


    QString latvalue;
    int lv;
    mydb = QSqlDatabase::database();


    if (!mydb.open()){
        qDebug()<< "Failed database";
    } else {
        qDebug()<< "Connect";
        QSqlQuery q;
        if (q.exec("select userid from user order by userid")){
            while (q.next()){
            latvalue = q.value(0).toString();
            }
        }
        qDebug()<<latvalue;
        lv = latvalue.toInt();

        q.clear();
        if (username == ""){
            qDebug()<<"Please don't leave fields without data";
        }
        else{
         lv = lv+1;

        QSqlQuery qu;
        QDate clickdate = ui->DOB->date();
        QString s = clickdate.toString("yyyy-MM-dd");
        qDebug()<< s;

        qu.prepare("insert into user(userid,username,password,fname,lname,dob,email) values (:id,:usr,:pss,:f,:l,:dob,:em)");
        qu.bindValue(":id",lv);
        qu.bindValue(":usr",username);
        qu.bindValue(":pss",password);
        qu.bindValue(":f",f_name);
        qu.bindValue(":l",l_name);
        qu.bindValue(":em",email);
        qu.bindValue(":dob",s);


           if (qu.exec()){

            qDebug()<< "Ok";
            hide();
            qu.clear();

           } else {
               qDebug()<< "No";
               //hide();
               qu.clear();

           }
        }

}
    mydb.close();
}

