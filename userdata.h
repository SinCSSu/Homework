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
    QString id;
    QString passwd;
    QString phone;
};

class UserData : public List<userNode>
{
public:
    UserData();
    void GetData();
    int SearchData(QString id);
    bool DelData(int pos);
private:
    int usernum = 0;
};

#endif // USERDATA_H
