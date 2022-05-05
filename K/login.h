#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>



namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

  public:

    QSqlDatabase mydb;


    void myfunction(){
           mydb = QSqlDatabase::addDatabase("QSQLITE");
           mydb.setDatabaseName("C:/Users/burr1to/Desktop/Kaizen/K/database.db");
           //mydb.setDatabaseName("D:/01_Prasun/Home/Coding/Kaizen/K/database.db");

           //mydb.setDatabaseName("D:/Users/krish/DEV/Qt/kaizen/K/database.db");

       };


public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();


private slots:


    void on_loginbutt_clicked();

    void on_signupbut_clicked();

    void createTable(QString);

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
