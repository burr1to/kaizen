#ifndef BUDGET_H
#define BUDGET_H
#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Budget; }
QT_END_NAMESPACE

class Budget : public QMainWindow
{
    Q_OBJECT

public:
    QString f,e,o,s;
    int extotal,intotal,alltotal;
    QString current,variable;
        QSqlDatabase budgetdb;
    Budget(QWidget *parent = nullptr);
    ~Budget();

private slots:

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void addItemstoDatabase();

private:
    Ui::Budget *ui;
};
#endif // BUDGET_H
