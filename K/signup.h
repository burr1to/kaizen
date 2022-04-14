#ifndef SIGNUP_H
#define SIGNUP_H
#include <QDialog>
#include "planner.h"
#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:

    explicit signup(QWidget *parent = nullptr);
    ~signup();


public:

    QSqlDatabase mydb;



private slots:

    void on_regBut_clicked();

private:
    Ui::signup *ui;

};


#endif // SIGNUP_H
