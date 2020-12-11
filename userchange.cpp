#include "userchange.h"
#include "ui_userchange.h"

UserChange::UserChange(QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserChange),
    name(name)
{

    ui->setupUi(this);
    ini();
}

UserChange::~UserChange()
{
    delete ui;
}

void UserChange::ini()
{
    user = new UserData;

    QRegExp format_username("[0-9]+$");
    QValidator * phone = new QRegExpValidator(format_username,ui->phone);
    ui->phone->setValidator(phone);
    ui->phone->setMaxLength(11);

    connect(ui->cancle_button,&QPushButton::clicked,this,[=](){
        emit back();
        });

    connect(ui->corfirm_button,&QPushButton::clicked,this,&UserChange::change);

}

void UserChange::change()
{
    user->GetData();
    QString passwd = ui->newpasswd->text();
    QString passwd_re = ui->confirm_passwd->text();
    QString phone = ui->phone->text();
    if(phone.size()!=0 && phone.size()!=11)
    {
        ui->message->setText("手机号格式有误");
    }
    else if(passwd!=passwd_re)
    {
        ui->message->setText("两次输入的密码不符");
    }
    if(phone.size()!= 0)
    {
        user->arr[user->SearchData(name)].phone = phone;
    }
    if(passwd.size()!= 0)
    {
        passwd = QCryptographicHash::hash(passwd.toUtf8(),QCryptographicHash::Md5).toHex();
        user->arr[user->SearchData(name)].passwd = passwd;
    }
    user->WriteData();
    QMessageBox::information(NULL,"成功","修改完成");
    emit back();
}

