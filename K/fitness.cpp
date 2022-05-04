#include "fitness.h"
#include "ui_fitness.h"
#include "login.h"
#include "planner.h"
#include "budget.h"
#include "signup.h"
#include <QTimer>
#include <QDateTime>
#include <QSql>
#include <QSqlDatabase>
#include "fitness_edit.h"

  QString fitdata[3];
fitness::fitness(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fitness)
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
    getfitnessdata(current,fitdata);
    ui->weight->setText(fitdata[0]);
    ui->height->setText(fitdata[1]);
    ui->bmi->setText(fitdata[2]);



    show_chart();

}

fitness::~fitness()
{
    delete ui;
}

void fitness::getfitnessdata(QString username,QString fitdata[]){
    QSqlQuery fitqry;
    if (fitqry.exec("select weight,height,bmi from fitness where username = '"+username+"' order by currentdate desc limit 1")){
        qDebug()<<"Executed";

            while(fitqry.next()){


                fitdata[0] = fitqry.value(0).toString();
                fitdata[1] = fitqry.value(1).toString();
                fitdata[2] = fitqry.value(2).toString();
        }
    }
    qDebug()<<fitdata[0];
    qDebug()<<fitdata[1];
    fitqry.clear();

}

void fitness::show_chart()
{
    QSqlQuery qry1, qry2,qry3;
    int a;
    qry2.prepare("select count(*) from fitness where username = '"+current+"'");
    qry2.exec();
    qry2.first();
    int noofrows = qry2.value(0).toInt();


    int offset = noofrows - 5;

    QLineSeries *series = new QLineSeries();
    int i;
    qry3.prepare("select * from fitness where username = '"+current+"' limit 5 offset :offsetvalue ");
    qry3.bindValue(":offsetvalue",offset);


    int count = 0;
    if (qry3.exec()){
        while (qry3.next()){
            count = count + 1;
        }
    }
    qDebug() << count;

    qry1.prepare("select * from fitness where username = '"+current+"' limit 5 offset :offsetvalue");
    qry1.bindValue(":offsetvalue",offset);
    qry1.exec();


    for (i=0; i<count; i++){
        qry1.next();
        if (i == 0){
            a = qry1.value(1).toInt();

        }
        QStringList dates = qry1.value(0).toString().split("-").mid(0,3);
        QDateTime momentInTime;
        momentInTime.setDate(QDate(dates[0].toInt(), dates[1].toInt(), dates[2].toInt()));
        series -> append(momentInTime.toMSecsSinceEpoch(), qry1.value(1).toDouble());
        //qDebug() << momentInTime;
    }

    QChart *chart = new QChart();
    chart -> addSeries(series);
    chart -> legend() -> hide();
    chart -> setTitle("Weight Record");
    chart -> setTheme(QChart::ChartThemeBlueIcy);

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(count);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setRange(a-4, a+5);
    axisY->setTickCount(10);
    axisY->setTitleText("Weight");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart -> setAnimationOptions(QChart::GridAxisAnimations);
    chart -> setAnimationOptions(QChart::SeriesAnimations);
    chart -> setAnimationEasingCurve(QEasingCurve::OutCubic);
    chart->setPlotArea(QRectF(45, 20, 530, 230));
    chart->setMargins(QMargins(0,0,0,0));

    QChartView *chartView = new QChartView(chart);
    chartView -> setRenderHint(QPainter::Antialiasing);
    chartView -> setParent(ui->horizontalFrame_chart);
}

void fitness::on_pushButton_uperbody_clicked()
{
    hide();
    upperbody = new upper_body(this);
    upperbody->show();
}


void fitness::on_pushButton_lowerbody_clicked()
{
    hide();
    lowerbody = new lower_body(this);
    lowerbody->show();
}


void fitness::on_pushButton_core_clicked()
{
    hide();
    Core = new core(this);
    Core->show();
}

void fitness::on_pushButton_yoga_clicked()
{
    hide();
    Yoga = new yoga(this);
    Yoga->show();
}


void fitness::on_editstuff_clicked()
{
    fitness_edit *fit;
    fit = new fitness_edit(this);
    fit->show();

}

void fitness::on_home_clicked()
{
    this->close();
    Planner *p = new Planner(this);
    p->show();
}

void fitness::on_fit_butt_clicked()
{

    this->close();
    fitness *f = new fitness(this);
    f->show();

}

void fitness::on_bud_butt_clicked()
{
    this->close();
    Budget *b = new Budget(this);
    b->show();
}

void fitness::on_logo_clicked()
{
    hide();
    QWidget *parent = this->parentWidget();
    parent->show();
}


void fitness::on_refresh_clicked()
{
    this->close();
    fitness *f = new fitness(this);
    f->show();
}

