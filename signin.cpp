#include "signin.h"
#include "ui_signin.h"

Signin::Signin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Signin)
{
    ui->setupUi(this);
    ini();
}

Signin::~Signin()
{
    delete ui;
}


void Signin::ini()
{
    setWindowTitle("注册");
    setWindowModality(Qt::ApplicationModal);

    QRegExp format_username("[0-9]+$");
    QValidator * username = new QRegExpValidator(format_username,ui->user_name);
    ui->user_name->setValidator(username);
    ui->user_name->setPlaceholderText("用户名仅有数字构成");

    ui->passwd->setEchoMode(QLineEdit::Password);
    ui->passwd->setPlaceholderText("请输入密码");

    ui->passwd_confirm->setEchoMode(QLineEdit::Password);
    ui->passwd_confirm->setPlaceholderText("请确认你的密码");

    ui->phone->setValidator(username);
    ui->phone->setMaxLength(11);


    user = new UserData;
    user->GetData();

    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
    connect(ui->signin_button,&QPushButton::clicked,this,&Signin::sign);
    connect(ui->back_button,&QPushButton::clicked,this,&Signin::close);
}

void Signin::sign()
{
    QString username,passwd,passwd_confirm,phone;
    username = ui->user_name->text();
    passwd = ui->passwd->text();
    passwd_confirm = ui->passwd_confirm->text();
    phone = ui->phone->text();
    if(username.size() == 0)
    {
        ui->massage->setText("请输入用户名");
    }
    else if(passwd.size()==0)
    {
        ui->massage->setText("请输入密码");
    }
    else if(phone.size() == 0)
    {
        ui->massage->setText("请输入手机号");
    }
    else if(phone.size()!= 11)
    {
        ui->massage->setText("手机号格式不正确");
    }
    else if(passwd != passwd_confirm)
    {
        ui->massage->setText("输入的密码不相符");
    }
    else
    {
        int pos = user->SearchData(username);
        if(pos!= -1)
        {
            ui->massage->setText("该用户已存在");
        }
        else
        {
            bool added = false;
            int i;

            for(i = 0;i<user->size();i++)
            {
                if(username.toInt() > user->arr[i].id.toInt())
                {
                    continue;
                }
                user->AddData(userNode(username,passwd,phone),i);
                added = true;
                break;
            }

            if(!added)
            {
                user->AddData(userNode(username,passwd,phone),user->size());
            }
            for(int i = 0 ; i < user->size();i++)
            {
                qDebug() << user->arr[i].id << ' ' << user->arr[i].phone << user->arr[i].passwd << '\n';
            }
            QMessageBox::StandardButton result =  QMessageBox::information(NULL,"注册成功","注册成功");
            if(result == QMessageBox::Ok)
            {
                emit succeed(username);
            }
        }
    }
}
