#include "reservereturn.h"
#include "ui_reservereturn.h"

ReserveReturn::ReserveReturn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReserveReturn)
{
    ui->setupUi(this);
}

ReserveReturn::~ReserveReturn()
{
    delete ui;
}
