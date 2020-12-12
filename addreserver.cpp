#include "addreserver.h"
#include "ui_addreserver.h"

AddReserver::AddReserver(QString user,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddReserver),
    user(user)
{
    ui->setupUi(this);
    ini();
}

AddReserver::~AddReserver()
{
    delete ui;
}

void AddReserver::ini()
{
    shopdata = new ShopData;
    shopdata->GetData();

    meal_choice = new QButtonGroup;
    meal_choice->addButton(ui->lunch);
    meal_choice->addButton(ui->dinner);
    ui->lunch->setChecked(true);

    QDate date = QDate::currentDate();
    ui->date->setDate(date);

    connect(ui->confirm_button,&QPushButton::clicked,this,&AddReserver::add);
    connect(ui->back_button,&QPushButton::clicked,this,[=](){
        emit click_back();
    });
}

void AddReserver::add()
{
    QString shopname = ui->shopname->text();
    QDate date = ui->date->date();

    shopNode temp = shopdata->SearchData(shopname);
    if(!(temp == shopdata->null_node))
    {
        QFile output("./data/order.txt");
        output.open(QFile::WriteOnly|QFile::Append);
        QTextStream out(&output);
        out.setCodec("UTF-8");
        out << user << ' ' << temp.shop_name << ' ' << date.month() << QString("月") << date.day() <<QString("日") << '\n';
        if(meal_choice->checkedId() == 0)
        {
            out << QString("午餐");
        }
        else
        {
            out << QString("晚餐");
        }
        QMessageBox::information(NULL,"成功","添加预定成功！");
        emit click_back();
    }
}
