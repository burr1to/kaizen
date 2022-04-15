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
signals:
    void getData();
public:
    QSqlDatabase db;
    QString ok,ok2;


public:
    planner(QWidget *parent = nullptr);
    ~planner();

public slots:



private slots:

    void on_dataSend_clicked();

    void on_pushButton_clicked();

    void on_budgetbut_clicked();

    int on_listView_activated(const QModelIndex &index);

    void on_updateBut_clicked();

    void on_deleteBut_clicked();

private:
    Ui::planner *ui;


};





#endif // PLANNER_H

