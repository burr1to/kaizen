#include "core.h"
#include "ui_core.h"
#include "fitness.h"

QString f[2];

core::core(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::core)
{
    ui->setupUi(this);
    db = QSqlDatabase::database();
    QSqlQuery qry;
    qry.prepare("select current from current_user");
    if (qry.exec()){
        qry.first();
    current = qry.value(0).toString();
    qry.clear();
    }


    ui->helloname->setText(current);
    getfitnessdata(current,f);
    ui->weight->setText(f[0]);
    ui->height->setText(f[1]);


    minutes = 14;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

core::~core()
{
    delete ui;
}
void core::getfitnessdata(QString username,QString f[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height from fitness where username = '"+username+"' limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                f[0] = fitqry.value(0).toString();
                f[1] = fitqry.value(1).toString();


        }
    }
    qDebug()<<f[0];
    qDebug()<<f[1];

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


void core::on_home_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

