#ifndef USERDATA_H
#define USERDATA_H

#define MAX_USER_NUM 100

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "list.h"

class userNode
{
public:
    QString id = 0;
    QString passwd = 0;
    QString phone = 0;
};

class UserData : public List<userNode>
{
public:
    UserData();
    void GetData();
    int SearchData(QString id);
    bool DelData(int pos);
    int size();
private:
    int usernum = 0;
};

#endif // USERDATA_H
