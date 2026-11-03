#ifndef FRIEND_H
#define FRIEND_H

#include "chat.h"
#include "onlineuser.h"

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class Friend;
}

class Friend : public QDialog
{
    Q_OBJECT

public:
    explicit Friend(QWidget *parent = nullptr);
    ~Friend();
    OnlineUser* m_pOnlineUser;
    Chat* m_pChat;
    void flushFriend();
    void updateListWidget(QStringList slName);

private slots:
    void on_findUser_PB_clicked();
    void on_onlineUser_PB_clicked();

    void on_update_PB_clicked();

    void on_delete_PB_clicked();

    void on_chat_PB_clicked();

private:
    Ui::Friend *ui;
};

#endif // FRIEND_H
