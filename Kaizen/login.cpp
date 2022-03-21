#include "login.h"
#include "ui_login.h"
#include "planner.h"
#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/burr1to/Desktop/db/testdb.db");
    if (!mydb.open()){
        qDebug()<< "Failed";
    } else {
        qDebug()<< "Success";

    }

}

login::~login()
{
    delete ui;
}

void login::on_loginbutt_clicked()
{

    QString username = ui->username->text();
    QString password = ui->password->text();
    if (!mydb.open()){
        return;
    }
    QSqlQuery qry;

    if(qry.exec("select * from user where username = '"+username+"' and password = '"+password+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if (count==1){
            qDebug()<< "Successful login";
            mydb.close();
            hide();
            p.show();
        }
        if (count<1){
            qDebug()<< "NOT Successful login";
        }
    }

}




void login::on_signupbut_clicked()
{
    hide();
    signup.show();

}

