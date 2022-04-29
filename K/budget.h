#ifndef BUDGET_H
#define BUDGET_H
#include <QtCharts>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Budget; }
QT_END_NAMESPACE

class Budget : public QMainWindow
{
    Q_OBJECT

public:
    Budget(QWidget *parent = nullptr);
    ~Budget();

private slots:

    void on_pushButton_5_clicked();

private:
    Ui::Budget *ui;
};
#endif // BUDGET_H
