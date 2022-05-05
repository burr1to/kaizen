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
    QString getdate;
    int inc,bud,exp,total,netval,extotal,intotal,alltotal,allocated,balance;
    QString price, item,budget,tempo,temp, current,variable;
    QString f,e,o,s;
    QSqlDatabase budgetdb;
    Budget(QWidget *parent = nullptr);
    ~Budget();

private slots:

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();


    void on_pushButton_9_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_4_clicked();


    QString addItemstoDatabase(QString,QString,QString);

    void allocatesomeofthis(QString);

    void setTotals(QString);

    QString on_expta_activated(const QModelIndex &index);



    QString on_allocating_returnPressed();


    void on_planner_clicked();

    void on_fit_butt_clicked();

    void on_bud_butt_clicked();

    void on_updatebutt_clicked();

    void on_deletebutt_clicked();



private:
    Ui::Budget *ui;
};
#endif // BUDGET_H
