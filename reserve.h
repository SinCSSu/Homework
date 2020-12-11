#ifndef RESERVE_H
#define RESERVE_H

#include <QWidget>

namespace Ui {
class Reserve;
}

class Reserve : public QWidget
{
    Q_OBJECT

public:
    explicit Reserve(QWidget *parent = nullptr);
    ~Reserve();

private:
    Ui::Reserve *ui;
};

#endif // RESERVE_H
