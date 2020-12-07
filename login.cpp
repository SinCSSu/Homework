#include "login.h"
#include "ui_login.h"

Login::Login(int mood,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ini(mood);
}

Login::~Login()
{
    delete ui;
}

void Login::ini(int mood)
{
    ui->passwd->setEchoMode(QLineEdit::Password);
    ui->username->setPlaceholderText("用户名");
    ui->passwd->setPlaceholderText("密码");


    switch (mood)
    {
    case 0: //user mood
        connect(ui->log_in,&QPushButton::clicked,this,&Login::login_user);
        break;
    case 1: //salor mood
        break;
    case 2: //admin mood
        break;
    }
}

void Login::login_user()
{
    UserData userdata;
    //qDebug() << "1" ;
    userdata.GetData();
    QString username,passwd;
    username = ui->username->text();
    passwd = ui->passwd->text();

}
