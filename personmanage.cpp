#include "personmanage.h"
#include "ui_personmanage.h"

PersonManage::PersonManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonManage)
{
    ui->setupUi(this);
}

PersonManage::~PersonManage()
{
    delete ui;
}
