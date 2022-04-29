#include "fitness.h"
#include "ui_fitness.h"
#include <QTimer>
#include <QDateTime>
#include "fitness_edit.h"
#include <QSql>
#include <QSqlDatabase>

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
    QString height, weight, bmi;

    //QTimer *datetime = new QTimer(this);

    //show_chart();

}


fitness::~fitness()
{
    delete ui;
}

/*void fitness::show_chart()
{
    QSqlQuery qry1, qry2,qry3;

    qry2.prepare("select count(*) from fitness where username = '""+current+'");
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

    qry1.prepare("select * from fitness username = '"+current+"' limit 5 offset :offsetvalue");
    qry1.bindValue(":offsetvalue",offset);
    qry1.exec();

    for (i=0; i<count; i++){
        qry1.next();
        QStringList dates = qry1.value(0).toString().split("-").mid(0,3);
        QDateTime momentInTime;
        momentInTime.setDate(QDate(dates[0].toInt(), dates[1].toInt() , dates[2].toInt()));
        series -> append(momentInTime.toMSecsSinceEpoch(), qry1.value(1).toDouble());
    }

    QChart *chart = new QChart();
    chart -> addSeries(series);
    chart -> legend() -> hide();
    chart -> setTitle("Weight Record");
    chart -> setTheme(QChart::ChartThemeHighContrast);

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("dd MMM");
    axisX->setTitleText("Date");
    axisX->setTickCount(count);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis;
    axisY->setLabelFormat("%i");
    axisY->setRange(66,75);
    axisY->setTickCount(10);
    axisY->setTitleText("Weight");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart -> setAnimationOptions(QChart::GridAxisAnimations);
    chart -> setAnimationOptions(QChart::SeriesAnimations);
    chart -> setAnimationEasingCurve(QEasingCurve::OutCubic);

    QChartView *chartView = new QChartView(chart);
    chartView -> setRenderHint(QPainter::Antialiasing);
    chartView -> setParent(ui->horizontalFrame_chart);
}
*/
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


void fitness::on_refresh_clicked()
{

}


void fitness::on_home_clicked()
{

}

