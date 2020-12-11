#ifndef PERSONMANAGE_H
#define PERSONMANAGE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include "userdata.h"
#include "userchange.h"

namespace Ui {
class PersonManage;
}

class PersonManage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonManage(QString name,QWidget *parent = nullptr);
    ~PersonManage();
    void ini_change(QString name,QWidget *parent = nullptr);

private:
    Ui::PersonManage *ui;
    void ini();

    UserData *user;
    QString name;
    UserChange * change;


signals:
    void click_back();
    void logout();
    void click_change();
};

#endif // PERSONMANAGE_H
