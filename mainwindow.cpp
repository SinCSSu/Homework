#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("美团餐馆预定管理信息系统");
    ini();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ini()
{
    menu = new Menu(this);
    menu->show();
    show();

    connect(menu,&Menu::click_exit,this,[=](){
        exit(0);
    });
    connect(menu,&Menu::click_user,this,[=](){
        user = new User(this);
        menu->close();
        user->show();

        connect(user,&User::click_back,this,[=](){
            user->close();
            ini();
        });
    });
    connect(menu,&Menu::click_salor,this,[=](){
        salor = new Salor(this);
        menu->close();
        salor->show();

        connect(salor,&Salor::click_back,this,[=](){
            salor->close();
            ini();
        });
    });
    connect(menu,&Menu::click_admin,this,[=](){
        admin = new Administrator(this);
        menu->close();
        admin->show();

        connect(admin,&Administrator::click_back,this,[=](){
            admin->close();
            ini();
        });
    });
}
