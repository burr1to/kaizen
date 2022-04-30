#include "lower_body.h"
#include "ui_lower_body.h"

lower_body::lower_body(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lower_body)
{
    ui->setupUi(this);
    minutes = 14;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

lower_body::~lower_body()
{
    delete ui;
}

void lower_body::on_pushButton_goback_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void lower_body::on_pushButton_start_timer_clicked()
{
    time.start(1000);
}


void lower_body::on_pushButton_stop_timer_clicked()
{
    minutes = 14;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
}

void lower_body::timerr()
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

