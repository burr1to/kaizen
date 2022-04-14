#ifndef LOGIN_H
#define LOGIN_H

#include "planner.h"
#include "signup.h"
#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>



namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    QString temp = "Ok";
    planner *p;
    signup *s;
    QSqlDatabase mydb;
signals:
    void sendData();
public:
    explicit login(QWidget *parent = nullptr);
    ~login();
public slots:
    void myfunction(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/burr1to/Desktop/Kaizen/K/database.db");
    };

    void connClose(){

        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

private slots:
    void on_loginbutt_clicked();

    void on_signupbut_clicked();



private:
    Ui::login *ui;
};









#endif // LOGIN_H
