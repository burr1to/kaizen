#ifndef CORE_H
#define CORE_H

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
class core;
}

class core : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QString current;
public:

    explicit core(QWidget *parent = nullptr);
    ~core();

private slots:


    void on_pushButton_start_workout_clicked();

    void on_pushButton_stop_timer_clicked();

    void timerr();

    void getfitnessdata(QString username, QString f[]);

    void on_home_clicked();
   void on_fit_butt_clicked();

   void on_bud_butt_clicked();

   void on_logo_clicked();
   void show_age();

private:
    Ui::core *ui;
    short int minutes;
    short int seconds;
    bool pause;
    QTimer time;
};

#endif // CORE_H
