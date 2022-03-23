#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "planner.h"
#include <QMainWindow>
#include <QSql>
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

private slots:
    void on_pushButton_clicked();

private:
    Ui::signup *ui;
    QSqlDatabase mydb;
};

#endif // SIGNUP_H
