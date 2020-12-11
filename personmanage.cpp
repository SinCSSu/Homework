#include "personmanage.h"
#include "ui_personmanage.h"

PersonManage::PersonManage(QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonManage),
    name(name)
{
    ui->setupUi(this);
    ini();
}

PersonManage::~PersonManage()
{
    delete ui;
}

void PersonManage::ini()
{
    user = new UserData();
    user->GetData();

    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });

    connect(ui->view_button,&QPushButton::clicked,this,[=](){
        QString info;
        info.append("用户账号:");
        info += user->arr[user->SearchData(name)].id;
        info.append("\n联系方式:");
        info += user->arr[user->SearchData(name)].phone;
        QMessageBox::information(NULL,"信息",info);
    });

    connect(ui->logout_button,&QPushButton::clicked,this,[=](){
        QMessageBox::StandardButton result = QMessageBox::warning(NULL, "警告", "你确认要注销账户么", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if(result == QMessageBox::Yes)
        {
            user->DelData(user->SearchData(name));
            user->WriteData();
            QMessageBox::information(NULL,"注销成功","注销成功");
            emit logout();
        }
    });
    connect(ui->change_button,&QPushButton::clicked,this,[=](){
        //emit click_change();
        change = new UserChange(name,this->parentWidget());
        change->show();
        close();

        connect(change,&UserChange::back,this,[=](){
            change->close();
            show();
        });
    });
}

void PersonManage::ini_change(QString name, QWidget *parent)
{
    //close();
    change = new UserChange(name,parent);
    change->show();
    connect(change,&UserChange::back,this,[=](){
        change->close();
        show();
    });
    //close();
}
