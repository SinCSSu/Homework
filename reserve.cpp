#include "reserve.h"
#include "ui_reserve.h"

Reserve::Reserve(QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reserve),
    name(name)
{
    ui->setupUi(this);
    ini();
}

Reserve::~Reserve()
{
    delete ui;
}

void Reserve::ini()
{
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });

    connect(ui->add_button,&QPushButton::clicked,this,[=](){
        add = new AddReserver(name,this->parentWidget());
        add->show();
        close();

        connect(add,&AddReserver::click_back,this,[=](){
            add->close();
            show();
        });
    });

}
