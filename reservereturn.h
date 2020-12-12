#ifndef RESERVERETURN_H
#define RESERVERETURN_H

#include <QWidget>
#include <QStringList>
#include "linklist.h"
#include "reservequeue.h"

namespace Ui {
class ReserveReturn;
}

class ReserveReturn : public QWidget
{
    Q_OBJECT

public:
    explicit ReserveReturn(QString name,QWidget *parent = nullptr);
    ~ReserveReturn();

private:
    Ui::ReserveReturn *ui;
    QString name;
    void ini();
    ReserveQueue * que;
    LinkList<queueNode> list;

signals:
    void click_back();


};


#endif // RESERVERETURN_H
