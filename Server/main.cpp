#include "server.h"
#include"operatedb.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OperateDB::getInstance().connect();
    Server::getInstance();
  //  w.show();
    return a.exec();
}
