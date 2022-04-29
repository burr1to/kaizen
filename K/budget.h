#ifndef BUDGET_H
#define BUDGET_H

#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Budget; }
QT_END_NAMESPACE

class Budget : public QMainWindow
{
    Q_OBJECT

public:
    QString current;
    QSqlDatabase budgetdb;
    Budget(QWidget *parent = nullptr);
    ~Budget();

private slots:


private:
    Ui::Budget *ui;
};
#endif // BUDGET_H
