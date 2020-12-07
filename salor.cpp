#include "salor.h"
#include "ui_salor.h"

Salor::Salor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Salor)
{
    ui->setupUi(this);
    ini();
}

Salor::~Salor()
{
    delete ui;
}

void Salor::ini()
{
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
}
