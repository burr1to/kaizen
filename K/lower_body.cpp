#include "lower_body.h"
#include "ui_lower_body.h"
#include "fitness.h"
#include "login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"

QString fi[3];

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
    ui->bmi->setText(fi[2]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
    show_age();

}

lower_body::~lower_body()
{
    delete ui;
}
void lower_body::getfitnessdata(QString username,QString fi[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height,bmi from fitness where username = '"+username+"' order by currentdate desc limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fi[0] = fitqry.value(0).toString();
                fi[1] = fitqry.value(1).toString();
                fi[2] = fitqry.value(2).toString();


        }
    }


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
    this->close();
    Planner *p = new Planner(this);
    p->show();
}


void lower_body::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void lower_body::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}

void lower_body::on_logo_clicked()
{
    this->close();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void lower_body::show_age()
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


