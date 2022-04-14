#include "login.h"
#include "ui_login.h"
#include "planner.h"
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <iostream>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("Enter username");
    ui->password->setPlaceholderText("Enter password");





}

login::~login()
{
    delete ui;
}





void login::on_loginbutt_clicked()
{

    if (!mydb.open()){
        qDebug()<<"Db problem";
    } else {
        qDebug()<< "Success";

    }

    QString username = ui->username->text();
    QString password = ui->password->text();
    QSqlQuery qry;

    if (username == "" && password == ""){
        qDebug() << "nigjhghjg";
    }

    else{

    if(qry.exec("select * from user where username = '"+username+"' and password = '"+password+"'")){

        int count=0;
        while(qry.next()){
            count++;
        }
        if (count==1){
            qDebug()<< "Successful login";
            qry.clear();
            /*QSqlQuery newtable;
            newtable.prepare("create table test()");*/
            mydb.close();
            hide();
            p = new planner(this);
            p->show();

        }
        else if (count<1){
            qDebug()<< "Username and Password does not exist.";
            ui->textdis->setText("Username and Password not found");
            qry.clear();
            mydb.close();
        } else if(count>1){
            qDebug() << "Bad";
        } else {
            qDebug()<< "Uhm ok";
        }

    }
    }

}




void login::on_signupbut_clicked()
{
    s = new signup(this);
    s->show();

}




