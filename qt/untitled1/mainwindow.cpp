#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qmessagebox.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();

    QString password = ui->lineEdit_password->text();

    if (username == "burrito123" && password == "nigga" ){
        QMessageBox::information(this,"Login","Username and Password is correct.");}
    else{
        QMessageBox::warning(this,"Login","Fuck off");
    }
}
