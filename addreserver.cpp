#include "addreserver.h"
#include "ui_addreserver.h"

AddReserver::AddReserver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddReserver)
{
    ui->setupUi(this);
}

AddReserver::~AddReserver()
{
    delete ui;
}
