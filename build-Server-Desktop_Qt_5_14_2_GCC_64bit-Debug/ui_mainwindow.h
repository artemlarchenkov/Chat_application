/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *grpChats;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tbChats;
    QGroupBox *grpClients;
    QListWidget *lstClients;
    QPushButton *btnDisconnectAll;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 322);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        grpChats = new QGroupBox(centralwidget);
        grpChats->setObjectName(QString::fromUtf8("grpChats"));
        horizontalLayout = new QHBoxLayout(grpChats);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tbChats = new QTabWidget(grpChats);
        tbChats->setObjectName(QString::fromUtf8("tbChats"));
        tbChats->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(tbChats);


        horizontalLayout_2->addWidget(grpChats);

        grpClients = new QGroupBox(centralwidget);
        grpClients->setObjectName(QString::fromUtf8("grpClients"));
        lstClients = new QListWidget(grpClients);
        lstClients->setObjectName(QString::fromUtf8("lstClients"));
        lstClients->setGeometry(QRect(15, 31, 171, 181));
        btnDisconnectAll = new QPushButton(grpClients);
        btnDisconnectAll->setObjectName(QString::fromUtf8("btnDisconnectAll"));
        btnDisconnectAll->setGeometry(QRect(40, 220, 121, 25));

        horizontalLayout_2->addWidget(grpClients);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 799, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        grpChats->setTitle(QCoreApplication::translate("MainWindow", "Chats", nullptr));
        grpClients->setTitle(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        btnDisconnectAll->setText(QCoreApplication::translate("MainWindow", "Disconnect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
