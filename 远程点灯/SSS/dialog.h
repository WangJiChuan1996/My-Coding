#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "server.h"
#include <QTcpSocket>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QMessageBox>
#include <QString>
#include <QStringList>
#include <database.h>
#include <string>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QTextStream>
#include <QMapIterator>
#include <string>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QMap<int,ServerSocket *> ids;

private:
    Ui::Dialog *ui;
    Server *myserver;
    QTcpSocket *tcpSocket;
    QTcpSocket *tcpSocket1;
    QTcpSocket *tcpSocket2;


signals:
    void has_reback(qintptr serverSocketID,QString IP,int Port,QByteArray data);
    void has_order(qintptr serverSocketID,QString IP,int Port,QString order);
    void has_order_reback(qintptr serverSocketID,QString IP,int Port,QString order);
    void has_order_Broadcast(QString DATA);


public slots:
    void updateCount();
    void updateData(qintptr serverSocketID,QString IP,int Port,QByteArray data);
    void reback_message(qintptr serverSocketID,QString IP,int Port,QByteArray data);
    void judge_order(qintptr serverSocketID,QString IP,int Port,QString order);
    void order_reback(qintptr serverSocketID,QString IP,int Port,QString order);
    void order_Broadcast(QString DATA);
private slots:
    void on_pushButton_open_clicked();
    void on_pushButton_close_clicked();
    void on_pushButton_clear_clicked();
};

#endif // DIALOG_H
