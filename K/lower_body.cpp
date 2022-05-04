#include "lower_body.h"
#include "ui_lower_body.h"
#include "fitness.h"

QString fi[2];

lower_body::lower_body(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lower_body)
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
    getfitnessdata(current,fi);
    ui->weight->setText(fi[0]);
    ui->height->setText(fi[1]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);

}

lower_body::~lower_body()
{
    delete ui;
}
void lower_body::getfitnessdata(QString username,QString fi[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height from fitness where username = '"+username+"' limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fi[0] = fitqry.value(0).toString();
                fi[1] = fitqry.value(1).toString();


        }
    }
    qDebug()<<fi[0];
    qDebug()<<fi[1];

}


void lower_body::on_pushButton_start_workout_clicked()
{
    time.start(1000);
    if(pause == true){
        time.stop();
        pause = false;
        ui->pushButton_start_workout->setText("Start");
    }
    else{
        pause = true;
        time.start();
        ui->pushButton_start_workout->setText("Pause");
    }
}

void lower_body::on_pushButton_stop_timer_clicked()
{
    minutes = 4;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
    ui->pushButton_start_workout->setText("Start Workout");
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


void lower_body::on_home_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}




