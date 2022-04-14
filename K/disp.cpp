#include "disp.h"
#include "ui_disp.h"

disp::disp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::disp)
{
    ui->setupUi(this);
}

disp::~disp()
{
    delete ui;
}

