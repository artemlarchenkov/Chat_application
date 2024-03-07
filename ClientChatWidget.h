#ifndef CLIENTCHATWIDGET_H
#define CLIENTCHATWIDGET_H

#include <QWidget>
#include <QTcpSocket>
namespace Ui {
class ClientChatWidget;
}

class ClientChatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientChatWidget(QTcpSocket* client, QWidget *parent = nullptr);
    ~ClientChatWidget();

private slots:
    dataReceived();

private:
    Ui::ClientChatWidget *ui;
    QTcpSocket * _client;
};

#endif // CLIENTCHATWIDGET_H
