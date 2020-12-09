#include "searchsalor.h"
#include "ui_searchsalor.h"

SearchSalor::SearchSalor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchSalor)
{
    ui->setupUi(this);
    ini();
}

SearchSalor::~SearchSalor()
{
    delete ui;
}

void SearchSalor::ini()
{
    data = new ShopData;

    connect(ui->back_button,&QPushButton::clicked,this,[=](){
       emit click_back();
    });

    connect(ui->search_button,&QPushButton::clicked,this,[=](){
        QString input = ui->input->text();
        shopNode result = data->SearchData(input);
        if(result == data->null_node)
        {
            ui->result->setText("无此餐馆");
        }
        else
        {
            ui->result->setText("shoptype:" + result.shop_type + '\n' + "address:" + result.address);

        }
    });
}
