#ifndef FOOD_H
#define FOOD_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QFileInfo>


namespace Ui {
class Food;
}

class Food : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase budgetdb;
public:
    explicit Food(QWidget *parent = nullptr);
    ~Food();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Food *ui;  
};

#endif // FOOD_H
