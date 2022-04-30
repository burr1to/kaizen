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
//#include "fitness_edit.h"

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

private slots:


    void on_pushButton_uperbody_clicked();

    void on_pushButton_lowerbody_clicked();

    void on_pushButton_core_clicked();


    void on_pushButton_yoga_clicked();


    //void show_chart();


    void on_editstuff_clicked();

    void on_refresh_clicked();

    void on_home_clicked();

private:
    Ui::fitness *ui;
    upper_body *upperbody;
    lower_body *lowerbody;
    core *Core;
    yoga *Yoga;

};
#endif // FITNESS_H
