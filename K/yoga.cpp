#include "yoga.h"
#include "ui_yoga.h"
#include "fitness.h"
  QString fdata[2];
yoga::yoga(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::yoga)
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
    getfitnessdata(current,fdata);
    ui->weight->setText(fdata[0]);
    ui->height->setText(fdata[1]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

yoga::~yoga()
{
    delete ui;
}
void yoga::getfitnessdata(QString username,QString fdata[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height from fitness where username = '"+username+"' limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fdata[0] = fitqry.value(0).toString();
                fdata[1] = fitqry.value(1).toString();


        }
    }
    qDebug()<<fdata[0];
    qDebug()<<fdata[1];

}



void yoga::on_pushButton_start_workout_clicked()
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


void yoga::on_pushButton_stop_timer_clicked()
{
    minutes = 14;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
    ui->pushButton_start_workout->setText("Start Workout");
}

void yoga::timerr()
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


void yoga::on_home_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}

