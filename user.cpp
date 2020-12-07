#include "user.h"
#include "ui_user.h"

User::User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User)
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
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
}
