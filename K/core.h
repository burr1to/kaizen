#ifndef CORE_H
#define CORE_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class core;
}

class core : public QDialog
{
    Q_OBJECT

public:
    explicit core(QWidget *parent = nullptr);
    ~core();

private slots:
    void on_pushButton_goback_clicked();

    void on_pushButton_start_workout_clicked();

    void on_pushButton_stop_timer_clicked();

    void timerr();

private:
    Ui::core *ui;
    short int minutes;
    short int seconds;
    QTimer time;
};

#endif // CORE_H
