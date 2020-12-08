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
        connect(ui->sign_up,&QPushButton::clicked,this,[=](){
           signin_user = new Signin();
           signin_user->show();

           connect(signin_user,&Signin::succeed,this,[=](QString id){
                signin_user->close();
                emit succeed(id);
           });

//           connect(signin_user,&Signin::click_back,this,[=](){
//               ini(0);
//               signin_user->close();
//           });
        });

        break;
    case 1: //salor mood
        break;
    case 2: //admin mood
        break;
    }

    connect(ui->back_button,&QPushButton::clicked,this,[=](){
       emit click_back();
    });

}

void Login::login_user()
{
    UserData userdata;
    //qDebug() << "1" ;
    userdata.GetData();
    QString username,passwd;
    username = ui->username->text();
    passwd = ui->passwd->text();
    if(username.size()==0)
    {
        ui->massage->setText("请输入用户名");
    }
    else if(passwd.size()==0)
    {
        ui->massage->setText("请输入密码");
    }
    else
    {
        int pos = userdata.SearchData(username);
        if(pos == -1)
        {
            ui->massage->setText("该用户不存在");
        }
        else
        {
            passwd = QCryptographicHash::hash(passwd.toUtf8(),QCryptographicHash::Md5).toHex();
            if(passwd == userdata.arr[pos].passwd)
            {
                emit succeed(username);
            }
            else
                ui->massage->setText("密码错误");
        }
    }
}
