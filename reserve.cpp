#include "reserve.h"
#include "ui_reserve.h"

Reserve::Reserve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Reserve)
{
    ui->setupUi(this);
}

Reserve::~Reserve()
{
    delete ui;
}
