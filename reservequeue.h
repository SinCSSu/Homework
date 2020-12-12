#ifndef RESERVEQUEUE_H
#define RESERVEQUEUE_H

#include "linkqueue.h"
#include <QString>
#include <QFile>
#include <QTextStream>

class queueNode
{
public:
    QString name;
    QString date;
    QString user;
};

class ReserveQueue: public LinkQueue<queueNode>
{
public:
    ReserveQueue();
    void GetData();
    void WriteData();
};

#endif // RESERVEQUEUE_H
