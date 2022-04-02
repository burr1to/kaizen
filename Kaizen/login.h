#ifndef LOGIN_H
#define LOGIN_H
#include "signup.h"
#include "planner.h"
#include <QMainWindow>
#include <QSql>
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

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
public slots:
    void myfunction(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/burr1to/Desktop/Kaizen/Kaizen/testdb.db");
    };
private slots:
    void on_loginbutt_clicked();

    void on_signupbut_clicked();

private:
    Ui::login *ui;
    planner p;
    signup s;
    QSqlDatabase mydb;


};


class userdetails{
    QString username, password, f_name, l_name, email, phone;

};







#endif // LOGIN_H
