#include "client.h"
#include "ui_client.h"
#include<QDebug>

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);//类的成员变量
}

Client::~Client()
{
    delete ui;
}


void Client::on_pushButton_clicked()
{
    qDebug()<<"已点击"<<ui->pushButton->text()<<ui->label->text();
}
