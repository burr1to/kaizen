#include "planner.h"
#include "ui_planner.h"
#include <iostream>
using namespace std;
planner::planner(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::planner)
{
    ui->setupUi(this);
}

planner::~planner()
{
    delete ui;
}


/*void databaseCon(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
      db.setHostName("localhost");
      db.setDatabaseName("kaizen");
      db.setUserName("mojito");
      db.setPassword("J0a1m8");
      bool ok = db.open();
}
*/
