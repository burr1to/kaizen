#ifndef FITNESS_EDIT_H
#define FITNESS_EDIT_H
#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <QDialog>

namespace Ui {
class fitness_edit;
}

class fitness_edit : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase fitness_db;
    explicit fitness_edit(QWidget *parent = nullptr);
    ~fitness_edit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::fitness_edit *ui;
};

#endif // FITNESS_EDIT_H
