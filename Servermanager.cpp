#include "Servermanager.h"

ServerManager::ServerManager(ushort port, QObject *parent)
    : QObject(parent)
{
    setupServer(port);
}

void ServerManager::newClientConnectionReceived()
{
    auto client = _server->nextPendingConnection();
    _clients << client;
    auto id = _clients.length();
    client->setProperty("id", id);
    connect(client, &QTcpSocket::disconnected, this, &ServerManager::onClientDisconnected);
    emit newClientConnected(client);
}

void ServerManager::onClientDisconnected()
{
    auto client = qobject_cast<QTcpSocket *>(sender());
    int id = client->property("id").toInt();
    _clients.removeOne(client);
    emit ClientDisconnected(client);
}

void ServerManager::setupServer(ushort port)
{
    _server = new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &ServerManager::newClientConnectionReceived);
    _server->listen(QHostAddress::Any, port);
}
