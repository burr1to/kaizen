#ifndef LOWER_BODY_H
#define LOWER_BODY_H

#include <QDialog>
#include <QTimer>
#include <QDebug>
#include <QDateTime>
#include <QDateEdit>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
namespace Ui {
class lower_body;
}

class lower_body : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QString current;
public:

    explicit lower_body(QWidget *parent = nullptr);
    ~lower_body();

private slots:


    void on_pushButton_stop_timer_clicked();

    void timerr();

    void getfitnessdata(QString username, QString fi[]);

    void on_home_clicked();

    void on_pushButton_start_workout_clicked();

private:
    Ui::lower_body *ui;
    short int minutes;
    short int seconds;
    bool pause;
    QTimer time;
};

#endif // LOWER_BODY_H
