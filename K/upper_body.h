#ifndef UPPER_BODY_H
#define UPPER_BODY_H

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
class upper_body;
}

class upper_body : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;
    QString current;
public:

    explicit upper_body(QWidget *parent = nullptr);
    ~upper_body();

private slots:

    void on_pushButton_start_workout_clicked();

    void getfitnessdata(QString username, QString fitd[]);

    void timerr();

    void on_pushButton_stop_timer_clicked();

    void on_home_clicked();
   void on_fit_butt_clicked();

   void on_bud_butt_clicked();



   void on_logo_clicked();


private:
    Ui::upper_body *ui;
    short int minutes;
    short int seconds;
    bool pause;
    QTimer time;
};

#endif // UPPER_BODY_H
