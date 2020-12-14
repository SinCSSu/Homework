#include "recommendresult.h"
#include "ui_recommendresult.h"

RecommendResult::RecommendResult(QVector<shopNode> data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RecommendResult),
    data(data)
{
    ui->setupUi(this);
}

RecommendResult::~RecommendResult()
{
    delete ui;
}

void RecommendResult::ini()
{
    QStringList header;
    header << "店铺名称" << "店铺类型" << "评分" <<  "人均消费" <<  "地址" << "联系方式";
    ui->result->setColumnCount(6);
    ui->result->setHorizontalHeaderLabels(header);

    int rowcount = 0;

    for(int i = 0 ; i < data.size();i++)
    {
        ui->result->insertRow(rowcount++);
        ui->result->setItem(rowcount - 1,0,new QTableWidgetItem(data[i].shop_name));
        ui->result->setItem(rowcount - 1,1,new QTableWidgetItem(data[i].shop_type));
        ui->result->setItem(rowcount - 1,2,new QTableWidgetItem(data[i].avg_score));
        ui->result->setItem(rowcount - 1,3,new QTableWidgetItem(data[i].avg_price));
        ui->result->setItem(rowcount - 1,4,new QTableWidgetItem(data[i].address));
        ui->result->setItem(rowcount - 1,5,new QTableWidgetItem(data[i].phone));
    }

    ui->result->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->result->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->result->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui->result->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
    ui->result->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
    ui->result->horizontalHeader()->setSectionResizeMode(5,QHeaderView::ResizeToContents);

}
