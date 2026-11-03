#ifndef CLIENT_H
#define CLIENT_H

#include "protocol.h"
#include "reshandler.h"

#include <QWidget>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    ~Client();
    void loadconfig();
    static Client& getInstance();
    QString m_strLoginName;
    void sendMsg(PDU* pdu);
    PDU* readPDU();
    void handleMsg(PDU* pdu);
    ResHandler* m_prh;
    QString m_strRootPath;
    QByteArray buffer;
    QTcpSocket m_socket;

public slots:
    void showConnected();
    void recvMsg();

private slots:
    //void on_send_PB_clicked();

    void on_regist_PB_clicked();

    void on_login_PB_clicked();

private:
    Ui::Client *ui;
    QString m_strIP;
    quint16 m_usPort;

    Client(QWidget *parent = nullptr);
    Client(const Client& instance)=delete;
    Client& operator=(const Client&)=delete;
};
#endif // CLIENT_H
