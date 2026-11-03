#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);//QWidget父对象而不是父类
    //父类是通过继承关系获得的，而父对象是QT框架中​​对象树结构​​的组成部分

    //析构函数
    ~Client();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Client *ui;
};
#endif // CLIENT_H
