#ifndef ADDRESERVER_H
#define ADDRESERVER_H

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QButtonGroup>
#include <QMessageBox>
#include <QDate>
#include "shopdata.h"
#include "reservequeue.h"

namespace Ui {
class AddReserver;
}

class AddReserver : public QWidget
{
    Q_OBJECT

public:
    explicit AddReserver(QString user,QWidget *parent = nullptr);
    ~AddReserver();

private:
    Ui::AddReserver *ui;
    QButtonGroup * meal_choice;
    void ini();
    void add();
    QString user;
    ShopData * shopdata;

signals:
    void click_back();
};

#endif // ADDRESERVER_H
