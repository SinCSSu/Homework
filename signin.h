#ifndef SIGNIN_H
#define SIGNIN_H

#define MAXSIZE 100

#include <QWidget>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QRegExp>
#include <QValidator>
#include <QMessageBox>
#include <QDebug>
#include "userdata.h"

namespace Ui {
class Signin;
}

class Signin : public QWidget
{
    Q_OBJECT

public:
    explicit Signin(QWidget *parent = nullptr);
    ~Signin();

private:
    Ui::Signin *ui;
    UserData *user;
    void ini();
    void sign();

signals:
    void click_back();
    void succeed(QString id);
};

#endif // SIGNIN_H
