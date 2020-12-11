#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QString>
#include "searchsalor.h"
#include "personmanage.h"


namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QString name,QWidget *parent = nullptr);
    ~User();
    void ini_search(QWidget *parent = nullptr);
    void ini_manger(QWidget *parent = nullptr);

private:
    Ui::User *ui;
    void ini();
    QString name;
    SearchSalor *search;
    PersonManage * manger;


signals:
    void click_back();
    void click_search();
    void click_manage();
};

#endif // USER_H
