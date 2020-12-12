#include "reservereturn.h"
#include "ui_reservereturn.h"

ReserveReturn::ReserveReturn(QString name,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReserveReturn),
    name(name)
{
    ui->setupUi(this);
    ini();
}

ReserveReturn::~ReserveReturn()
{
    delete ui;
}

void ReserveReturn::ini()
{
    que = new ReserveQueue;
    que->GetData();
    ui->result->setColumnCount(2);
    ui->result->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QStringList headline;
    headline << "商家名称" << "预定时间";
    ui->result->setHorizontalHeaderLabels(headline);
    for(int i = 0 ; i< que->size();i++)
    {
        if(que->front().user == name)
        {
            QStringList buff;
            buff << que->front().name << que->front().date;
            ui->result->insertRow(ui->result->rowCount());
            //ui->resu
        }
    }
}
