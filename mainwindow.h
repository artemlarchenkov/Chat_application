#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Servermanager.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void NewClientConnected(QTcpSocket * client);
    void ClientDisconnected(QTcpSocket * client);

private:  
    Ui::MainWindow *ui;
    ServerManager *_server;
private: // methods

    void setupServer();
};

#endif // MAINWINDOW_H
