#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <userdata.h>
#include <QDebug>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(int mood,QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
    void ini(int mood);
    void login_user();
    //void login_admin();
    //void login_salor();

signals:
    void succeed(QString name);
    void click_back();
};

#endif // LOGIN_H
