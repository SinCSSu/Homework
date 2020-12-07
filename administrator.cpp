#include "administrator.h"
#include "ui_administrator.h"

Administrator::Administrator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Administrator)
{
    ui->setupUi(this);
    ini();
}

Administrator::~Administrator()
{
    delete ui;
}

void Administrator::ini()
{
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
}
