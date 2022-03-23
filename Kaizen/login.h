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
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_loginbutt_clicked();

    void on_signupbut_clicked();

private:
    Ui::login *ui;
    planner p;
    signup s;
    QSqlDatabase mydb;


};







#endif // LOGIN_H
