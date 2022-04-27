#ifndef PLANNER_H
#define PLANNER_H

#include "budget.h"
#include "login.h"

#include "fitness.h"
#include <QDebug>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class Planner; }
QT_END_NAMESPACE

class Planner : public QMainWindow
{
    Q_OBJECT
public:
    QString current;
    QSqlDatabase db;
    QString ok,ok2;
    Budget *b;
    fitness *f;

public:
    Planner(QWidget *parent = nullptr);
    ~Planner();


private slots:

    void on_addbut_clicked();

    void on_budgetbut_clicked();

    void on_Logout_clicked();

    void on_fitbut_clicked();

    void on_showplans_clicked();

private:
    Ui::Planner *ui;
};
#endif // PLANNER_H
