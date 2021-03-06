#ifndef FITNESS_H
#define FITNESS_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QString>
#include <QTimer>
#include <QDateTime>

#include "upper_body.h"
#include "lower_body.h"
#include "core.h"
#include "yoga.h"


QT_BEGIN_NAMESPACE
namespace Ui { class fitness; }
QT_END_NAMESPACE

class fitness : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase db;
    QString current;
public:
    fitness(QWidget *parent = nullptr);
    ~fitness();


public slots:



private slots:


    void on_pushButton_uperbody_clicked();

    void on_pushButton_lowerbody_clicked();

    void on_pushButton_core_clicked();


    void on_pushButton_yoga_clicked();

    void show_chart();

    void on_editstuff_clicked();


    void getfitnessdata(QString username, QString fitnessdata[]);

     void on_home_clicked();
    void on_fit_butt_clicked();

    void on_bud_butt_clicked();

    void on_logo_clicked();

    void on_refresh_clicked();
    void show_age();


private:
    Ui::fitness *ui;
    upper_body *upperbody;
    lower_body *lowerbody;
    core *Core;
    yoga *Yoga;

};
#endif // FITNESS_H
