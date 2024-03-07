#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupServer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NewClientConnected(QTcpSocket *client)
{
    auto id = client->property("id").toInt();
    ui->lstClients->addItem(QString("New Client added: %1").arg(id));
}

void MainWindow::ClientDisconnected(QTcpSocket *client)
{

}

void MainWindow::setupServer()
{
    _server = new ServerManager;
    connect = (_server, &ServerManager::newClientConnected, this, &MainWindow::NewClientConnected);
    connect = (_server, &ServerManager::ClientDisconnected, this, &MainWindow::ClientDisconnected);
}

