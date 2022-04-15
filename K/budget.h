#ifndef BUDGET_H
#define BUDGET_H
#include <QSql>
#include <QSqlDatabase>


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Budget; }
QT_END_NAMESPACE

class Budget : public QMainWindow
{
    Q_OBJECT

public:
     QSqlDatabase budgetdb;
    Budget(QWidget *parent = nullptr);
    ~Budget();

private slots:
    void on_pushButton_1_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();

private:
    Ui::Budget *ui;
};
#endif // BUDGET_H
