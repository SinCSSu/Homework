#include "salor_manage_admin.h"
#include "ui_salor_manage_admin.h"

salor_manage_admin::salor_manage_admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::salor_manage_admin)
{
    ui->setupUi(this);
}

salor_manage_admin::~salor_manage_admin()
{
    delete ui;
}
