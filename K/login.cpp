#include "login.h"
#include "ui_login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"


Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
       ui->username->setPlaceholderText("Enter username");
       ui->password->setPlaceholderText("Enter password");

}

Login::~Login()
{
    delete ui;
}

void Login::createTable(QString username){
    QSqlQuery quz;
    quz.prepare("insert into current_user(current) values ('"+username+"')");
    if(quz.exec()){
      qDebug()<<"Table created";
    } else {
       qDebug()<<"Table not created";
    }
    quz.clear();
}

void Login::on_loginbutt_clicked()
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
            ui->textdis->setText("Please enter username or password to log in.");
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
                createTable(username);
                   mydb.close();
                   this->hide();
               Planner *p=new Planner(this);
               p->show();
           }
           else if (count<1){
               qDebug()<< "Username and Password does not exist.";
               ui->textdis->setText("Invalid Username or Password!");
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

void Login::on_signupbut_clicked()
{
    signup *s;
    s = new signup(this);
    s->show();

}

