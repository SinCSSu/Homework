#include "recommend.h"
#include "ui_recommend.h"

Recommend::Recommend(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Recommend)
{
    ui->setupUi(this);
}

Recommend::~Recommend()
{
    delete ui;
}
