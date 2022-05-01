#ifndef FITNESS_EDIT_H
#define FITNESS_EDIT_H
#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <QDialog>
#include "fitness.h"

namespace Ui {
class fitness_edit;
}

class fitness_edit : public QDialog
{
    Q_OBJECT

public:
    QString current,weight,height, clock_text;
    QSqlDatabase fitness_db;
    explicit fitness_edit(QWidget *parent = nullptr);
    ~fitness_edit();
signals:

    void editData();

public slots:
    //void display();

private slots:


    void on_submit_clicked();
    void insertData(QString, QString, QString, float, QString);

private:
    Ui::fitness_edit *ui;
};

#endif // FITNESS_EDIT_H
