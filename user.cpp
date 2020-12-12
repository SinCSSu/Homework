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

    connect(ui->search_salor_button,&QPushButton::clicked,this,[=](){
        emit click_search();
    });
    connect(ui->manage_button,&QPushButton::clicked,this,[=](){
        emit click_manage();
    });

    connect(ui->due_button,&QPushButton::clicked,this,[=](){
        reserve = new Reserve(name,this->parentWidget());
        reserve->show();
        close();

        connect(reserve,&Reserve::click_back,this,[=](){
            reserve->close();
            show();
        });
    });
}

void User::ini_search(QWidget *parent)
{
    search = new SearchSalor(parent);
    search->show();

    connect(search,&SearchSalor::click_back,this,[=](){
        search->close();
        this->show();
    });
}

void User::ini_manger(QWidget *parent)
{
    manger = new PersonManage(name,parent);
    manger->show();

    connect(manger,&PersonManage::click_back,this,[=](){
        manger->close();
        this->show();
    });
    connect(manger,&PersonManage::logout,this,[=](){
        manger->close();
        emit click_back();
    });
    connect(manger,&PersonManage::click_change,this,[=](){
        manger->ini_change(name,this->parentWidget());
        manger->close();
    });
}
