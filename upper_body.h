#ifndef UPPER_BODY_H
#define UPPER_BODY_H

#include <QDialog>
#include <QTimer>
namespace Ui {
class upper_body;
}

class upper_body : public QDialog
{
    Q_OBJECT

public:
    explicit upper_body(QWidget *parent = nullptr);
    ~upper_body();

private slots:
    void on_pushButton_goback_clicked();

    void on_pushButton_start_workout_clicked();

    void on_pushButton_stop_clicked();

    void timerr();

private:
    Ui::upper_body *ui;
    short int minutes;
    short int seconds;
    QTimer time;
};

#endif // UPPER_BODY_H
