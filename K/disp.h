#ifndef DISP_H
#define DISP_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class disp; }
QT_END_NAMESPACE

class disp : public QDialog
{
    Q_OBJECT

public:
    disp(QWidget *parent = nullptr);
    ~disp();

private:
    Ui::disp *ui;
};
#endif // DISP_H
