#include "core.h"
#include "ui_core.h"
#include "fitness.h"
#include "login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"


QString f[3];

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
    ui->bmi->setText(f[2]);


    minutes = 4;
    seconds = 59;
    connect(&time, SIGNAL(timeout()), this, SLOT(timerr()));
    this->setWindowState(Qt::WindowMaximized);
    show_age();
}

core::~core()
{
    delete ui;
}
void core::getfitnessdata(QString username,QString f[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height,bmi from fitness where username = '"+username+"' order by currentdate desc limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                f[0] = fitqry.value(0).toString();
                f[1] = fitqry.value(1).toString();
                f[2] = fitqry.value(2).toString();
        }
    }

}


void core::on_pushButton_start_workout_clicked()
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

void core::on_pushButton_stop_timer_clicked()
{
    minutes = 4;
    seconds = 59;
    ui->seconds->display(seconds);
    ui->minutes->display(minutes);
    time.stop();
    ui->pushButton_start_workout->setText("Start Workout");
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
    this->close();
    Planner *p = new Planner(this);
    p->show();
}

void core::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void core::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}


void core::on_logo_clicked()
{
    this->close();
    QWidget *parent = this->parentWidget();
    parent->show();
}

void core::show_age()
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


