#ifndef RENT_H
#define RENT_H

#include <QDialog>

namespace Ui {
class Rent;
}

class Rent : public QDialog
{
    Q_OBJECT

public:
    explicit Rent(QWidget *parent = nullptr);
    ~Rent();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rent *ui;
};

#endif // RENT_H
