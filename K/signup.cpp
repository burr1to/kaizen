#include "signup.h"
#include "ui_signup.h"


signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_regbut_clicked()
{
    QString username = ui->username->text();
        QString password = ui->password->text();
        QString f_name = ui->fname->text();
        QString l_name = ui->lname->text();
        QString email = ui->email->text();


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
            QDate clickdate = ui->dob->date();
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

