#ifndef YOGA_H
#define YOGA_H

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
class yoga;
}

class yoga : public QDialog
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QString current;
public:

    explicit yoga(QWidget *parent = nullptr);
    ~yoga();

private slots:

    void on_pushButton_start_workout_clicked();

    void on_pushButton_stop_timer_clicked();

    void getfitnessdata(QString username, QString fdata[]);

    void timerr();

    void on_home_clicked();
   void on_fit_butt_clicked();

   void on_bud_butt_clicked();

   void on_logo_clicked();
    void show_age();

private:
    Ui::yoga *ui;
    short int minutes;
    short int seconds;
    bool pause;
    QTimer time;
};

#endif // YOGA_H
