#include "upper_body.h"
#include "ui_upper_body.h"
#include "fitness.h"
#include "login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"

QString fitd[3];
upper_body::upper_body(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upper_body)
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
    getfitnessdata(current,fitd);
    ui->weight->setText(fitd[0]);
    ui->height->setText(fitd[1]);
    ui->bmi->setText(fitd[2]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
}

upper_body::~upper_body()
{
    delete ui;
}
void upper_body::getfitnessdata(QString username,QString fitd[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height,bmi from fitness where username = '"+username+"'  order by currentdate desc limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fitd[0] = fitqry.value(0).toString();
                fitd[1] = fitqry.value(1).toString();
                 fitd[2] = fitqry.value(2).toString();


        }
    }
    qDebug()<<fitd[0];
    qDebug()<<fitd[1];

}



void upper_body::on_pushButton_start_workout_clicked()
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


void upper_body::on_pushButton_stop_timer_clicked()
{
    minutes = 4;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
    ui->pushButton_start_workout->setText("Start Workout");
}


void upper_body::on_home_clicked()
{
    this->close();
    Planner *p = new Planner(this);
    p->show();
}


void upper_body::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void upper_body::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}

void upper_body::on_logo_clicked()
{

        this->close();
        QWidget *parent = this->parentWidget();
        parent->show();


}

