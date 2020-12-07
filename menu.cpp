#include "menu.h"
#include "ui_menu.h"
#include "QDebug"
#include "QString"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    ini();
}

Menu::~Menu()
{
    delete ui;
}

void Menu::ini()
{
    connect(ui->user_button,&QPushButton::clicked,this,[=](){
        emit click_user();
    });
    connect(ui->salor_button,&QPushButton::clicked,this,[=](){
        emit click_salor();
    });
    connect(ui->admin_button,&QPushButton::clicked,this,[=](){
        emit click_admin();
    });
    connect(ui->exit_button,&QPushButton::clicked,this,[=](){
        emit click_exit();
    });

}
