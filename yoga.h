#ifndef YOGA_H
#define YOGA_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class yoga;
}

class yoga : public QDialog
{
    Q_OBJECT

public:
    explicit yoga(QWidget *parent = nullptr);
    ~yoga();

private slots:
    void on_pushButton_goback_clicked();

    void on_pushButton_start_workout_clicked();

    void on_pushButton_stop_timer_clicked();

    void timerr();

private:
    Ui::yoga *ui;
    short int minutes;
    short int seconds;
    QTimer time;
};

#endif // YOGA_H
