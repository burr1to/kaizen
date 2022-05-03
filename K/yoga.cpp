#include "yoga.h"
#include "ui_yoga.h"

yoga::yoga(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yoga)
{
    ui->setupUi(this);
    minutes = 14;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

yoga::~yoga()
{
    delete ui;
}

void yoga::on_pushButton_goback_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void yoga::on_pushButton_start_workout_clicked()
{
    time.start(1000);
}


void yoga::on_pushButton_stop_timer_clicked()
{
    minutes = 14;
    seconds = 59;
    ui->seconds_2->display(seconds);
    ui->minutes_2->display(minutes);
    time.stop();
}

void yoga::timerr()
{
    seconds = seconds -1;
    if(seconds < 0){
        minutes = minutes -1;
    }
    else{
        ui->seconds_2->display(seconds);
        ui->minutes_2->display(minutes);
    }
}

