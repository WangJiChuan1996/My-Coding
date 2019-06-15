#ifndef SERVER_H
#define SERVER_H
#include "serversocket.h"
#include <QTcpServer>
#include <QMap>


class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
    int serverSocketCount=0;//用于统计连接的用户数，
public:
    QMap<int,ServerSocket *> idSocketMap;
    QMap<int,QString> idUserMap;


protected:
    void incomingConnection(qintptr serverSocketID);

signals:
    void hasData(qintptr serverSocketID,QString IP,int Port,QByteArray data);//这三个信号用于告诉dialog信息，用于dialog的UI的信息显示，比如更新显示用户连接数
    void hasConnect(qintptr serverSocketID,QString IP,int Port);
    void hasDisConnect(qintptr serverSocketID,QString IP,int Port);
    void ListSocket(QMap<int,ServerSocket *> idSocketMap,QMap<int,QString> idUserMap);


private slots:
    void ReadData(qintptr serverSocketID,QString IP,int Port,QByteArray data);//连接到ServerSocket的void serverSocketReadData……信号
    void DisConnect(qintptr serverSocketID,QString IP,int Port);


};

#endif // SERVER_H
