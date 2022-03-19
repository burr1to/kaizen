#ifndef PLANNER_H
#define PLANNER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class planner; }
QT_END_NAMESPACE

class planner : public QMainWindow
{
    Q_OBJECT

public:
    planner(QWidget *parent = nullptr);
    ~planner();

private:
    Ui::planner *ui;
};
#endif // PLANNER_H
