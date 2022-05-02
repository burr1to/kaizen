#ifndef FITNESS_H
#define FITNESS_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
<<<<<<< HEAD
/*#include <QtCharts>
#include <QChartView>
#include <QLineSeries>*/
=======
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
>>>>>>> 09006a73d535aa2987d32610dc6115bfd6562b12
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

    void on_home_clicked();

<<<<<<< HEAD
     void getfitnessdata(QString username, QString fitnessdata[]);
=======
    void getfitnessdata(QString username, QString fitnessdata[]);
>>>>>>> 09006a73d535aa2987d32610dc6115bfd6562b12
private:
    Ui::fitness *ui;
    upper_body *upperbody;
    lower_body *lowerbody;
    core *Core;
    yoga *Yoga;

};
#endif // FITNESS_H
