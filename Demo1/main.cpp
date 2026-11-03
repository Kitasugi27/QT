#include "client.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //创建应用程序类的对象（实例）
    QApplication a(argc, argv);

    //创建继承QWidget类的对象，初始化ui
    Client w;

    //通过窗口对象(w)调用成员函数把窗口显示出来
    w.show();

    //运行应用程序
    return a.exec();
}
