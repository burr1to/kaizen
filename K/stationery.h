#ifndef STATIONERY_H
#define STATIONERY_H

#include <QDialog>

namespace Ui {
class Stationery;
}

class Stationery : public QDialog
{
    Q_OBJECT

public:
    explicit Stationery(QWidget *parent = nullptr);
    ~Stationery();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Stationery *ui;
};

#endif // STATIONERY_H
