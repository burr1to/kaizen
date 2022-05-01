#ifndef ALLPLANS_H
#define ALLPLANS_H
#include "planner.h"
#include <QDebug>
#include <QDateTime>
#include <QSql>
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class allplans;
}

class allplans : public QDialog
{
    Q_OBJECT

public:
    QString current;
    QSqlDatabase db;
      QString ok,ok2;
    explicit allplans(QWidget *parent = nullptr);
    ~allplans();

private slots:
    void on_pushButton_clicked();

    int on_listView_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void refresh();

private:
    Ui::allplans *ui;
};

#endif // ALLPLANS_H
