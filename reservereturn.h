#ifndef RESERVERETURN_H
#define RESERVERETURN_H

#include <QWidget>

namespace Ui {
class ReserveReturn;
}

class ReserveReturn : public QWidget
{
    Q_OBJECT

public:
    explicit ReserveReturn(QWidget *parent = nullptr);
    ~ReserveReturn();

private:
    Ui::ReserveReturn *ui;
};

#endif // RESERVERETURN_H
