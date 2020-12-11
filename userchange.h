#ifndef USERCHANGE_H
#define USERCHANGE_H

#include <QWidget>
#include <QRegExp>
#include <QValidator>
#include <QMessageBox>
#include "userdata.h"

namespace Ui {
class UserChange;
}

class UserChange : public QWidget
{
    Q_OBJECT

public:
    explicit UserChange(QString name,QWidget *parent = nullptr);
    ~UserChange();

private:
    Ui::UserChange *ui;
    void ini();
    void change();
    UserData * user;
    QString name;

signals:
    void back();
};

#endif // USERCHANGE_H
