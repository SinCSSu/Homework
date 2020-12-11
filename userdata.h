#ifndef USERDATA_H
#define USERDATA_H

#define MAX_USER_NUM 1000

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCryptographicHash>
#include <QByteArray>
#include <QDebug>
#include "list.h"

class userNode
{
public:
    userNode();
    userNode(const QString &id,const QString & passwd,const QString& phone);
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
    void AddData(const userNode & node,int pos);
    void WriteData();
    void _hashcode();
    int size();

private:
    int usernum = 0;
};

#endif // USERDATA_H
