#ifndef LOWER_BODY_H
#define LOWER_BODY_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class lower_body;
}

class lower_body : public QDialog
{
    Q_OBJECT

public:
    explicit lower_body(QWidget *parent = nullptr);
    ~lower_body();

private slots:
    void on_pushButton_goback_clicked();

    void on_pushButton_start_timer_clicked();

    void on_pushButton_stop_timer_clicked();

    void timerr();

private:
    Ui::lower_body *ui;
    short int minutes;
    short int seconds;
    QTimer time;
};

#endif // LOWER_BODY_H
