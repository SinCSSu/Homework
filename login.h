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

signals:
    void succeed();
    void failed();
};

#endif // LOGIN_H
