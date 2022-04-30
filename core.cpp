#include "core.h"
#include "ui_core.h"

core::core(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::core)
{
    ui->setupUi(this);
    minutes = 14;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

core::~core()
{
    delete ui;
}

void core::on_pushButton_goback_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void core::on_pushButton_start_workout_clicked()
{
    time.start(1000);
}


void core::on_pushButton_stop_timer_clicked()
{
    minutes = 14;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
}

void core::timerr()
{
    seconds = seconds -1;
    if(seconds < 0){
        minutes = minutes -1;
    }
    else{
        ui->seconds->display(seconds);
        ui->minutes->display(minutes);
    }
}

