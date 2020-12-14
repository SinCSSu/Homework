#include "user_manage.h"
#include "ui_user_manage.h"

user_manage::user_manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user_manage)
{
    ui->setupUi(this);
}

user_manage::~user_manage()
{
    delete ui;
}
