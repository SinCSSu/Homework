#ifndef RESERVE_H
#define RESERVE_H

#include <QWidget>
#include <addreserver.h>

namespace Ui {
class Reserve;
}

class Reserve : public QWidget
{
    Q_OBJECT

public:
    explicit Reserve(QString name,QWidget *parent = nullptr);
    ~Reserve();

private:
    Ui::Reserve *ui;
    void ini();

    AddReserver * add;

    QString name;
signals:
    void click_back();

};

#endif // RESERVE_H
