#ifndef SIGNUP_H
#define SIGNUP_H
#include "planner.h"
#include <QMainWindow>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <QMainWindow>

namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT
public:

    QSqlDatabase mydb;
public:
    QString current;
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_regbut_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
