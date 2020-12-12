#ifndef SHOPSDATA_H
#define SHOPSDATA_H

#define MAX_SIZE 5000
#define inf 0x7fffffff

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QStringList>
#include <QDebug>
#include <ctime>
#include <cstring>


class foodNode
{
public:
    QString food_id;
    QString food_name;
    QString food_price;
};

class shopNode
{
public:
    bool deled = false;
    QString shop_id;
    QString shop_name;
    int hash_code;
    QString shop_type;
    QString shop_passwd;
    QString avg_score;
    QString avg_price;
    QString address;
    QString phone;
    QVector<foodNode> foods;
    QVector<QString> comments;
    bool operator==(const shopNode & node);
    void ini();
};

class hashMap
{
public:
    hashMap();
    void ini();
    void AddData(shopNode  node);
    shopNode& SearchData(QString shopname);
    void DelData(QString shopname);
    int size();
    shopNode null_node;
    shopNode * data;
private:
    QVector<shopNode> hashmap;
    int Time33(QString str);
    long int shop_num;
};

class ShopData
{
public:
    ShopData();
    void GetData();
    void WriteData();
    void AddData(shopNode & node);
    int size();
    shopNode SearchData(QString name);
    shopNode null_node;
    
private:
    hashMap *data;

};


class AdjacencyMatrix
{
public:
    AdjacencyMatrix();
    void GetData();
    //void Dijkstra();


private:
    float ** matrix;
    float * dis;
    ShopData * shop;

};

#endif // SHOPSDATA_H
