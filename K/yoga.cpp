#include "yoga.h"
#include "ui_yoga.h"
#include "fitness.h"
#include "login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"

  QString fdata[3];
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
    ui->bmi->setText(fdata[2]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
    show_age();
}

yoga::~yoga()
{
    delete ui;
}
void yoga::getfitnessdata(QString username,QString fdata[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height,bmi from fitness where username = '"+username+"' order by currentdate desc limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fdata[0] = fitqry.value(0).toString();
                fdata[1] = fitqry.value(1).toString();
                fdata[2] = fitqry.value(2).toString();


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
    minutes = 4;
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
    this->close();
    Planner *p = new Planner(this);
    p->show();
}


void yoga::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void yoga::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}

void yoga::on_logo_clicked()
{

    this->close();
    Planner *p = new Planner(this);
    p->show();


}

void yoga::show_age()
{
    QSqlQuery qry1;
    int age;
    int current_year = QDate::currentDate().year();
    qry1.prepare("select dob from user where username = '"+current+"'");
    qry1.exec();
    qry1.first();
    QStringList dates = qry1.value(0).toString().split("-").mid(0,3);

    qDebug() << "-------";
    age = current_year - dates.first().toInt();
    qDebug() << age;
    QString s = QString::number(age);
    ui->age->setText(s);
    qry1.clear();

}


