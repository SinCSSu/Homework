#include "user.h"
#include "ui_user.h"

User::User(QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User),
    name(name)
{
    ui->setupUi(this);
    ini();
}

User::~User()
{
    delete ui;
}

void User::ini()
{
    ui->userinfo->setText("欢迎你，用户"+name);
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
}
