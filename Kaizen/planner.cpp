#include "planner.h"
#include "ui_planner.h"

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

