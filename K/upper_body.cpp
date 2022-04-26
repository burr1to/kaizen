#include "upper_body.h"
#include "ui_upper_body.h"

upper_body::upper_body(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upper_body)
{
    ui->setupUi(this);
    minutes = 14;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

upper_body::~upper_body()
{
    delete ui;
}

void upper_body::on_pushButton_goback_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void upper_body::on_pushButton_start_workout_clicked()
{
    time.start(1000);
}


void upper_body::on_pushButton_stop_clicked()
{
    minutes = 14;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
}

void upper_body::timerr()
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

