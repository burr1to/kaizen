#ifndef PLANNER_H
#define PLANNER_H

#include <QDebug>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class planner; }
QT_END_NAMESPACE

class planner : public QMainWindow
{
    Q_OBJECT



public:
    planner(QWidget *parent = nullptr);
    ~planner();


private slots:

    void on_dataSend_clicked();

    void on_pushButton_clicked();

private:
    Ui::planner *ui;
    QSqlDatabase db;

};





#endif // PLANNER_H

