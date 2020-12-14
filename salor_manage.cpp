#include "salor_manage.h"
#include "ui_salor_manage.h"

salor_manage::salor_manage(shopNode shop,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::salor_manage),
    shop(shop)
{
    ui->setupUi(this);
    ini();
}

salor_manage::~salor_manage()
{
    delete ui;
}

void salor_manage::ini()
{
    connect(ui->check_button,&QPushButton::clicked,this,[=](){
        check = new SalorManagerCheck(shop,this->parentWidget());
        check->show();
        this->close();

        connect(check,&SalorManagerCheck::click_back,this,[=](){
            check->close();
            this->show();
        });
    });


    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });

}
