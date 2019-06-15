#include "server.h"
#include "serversocket.h"
#include <QDebug>
#include <dialog.h>
Server::Server(QObject *parent) :
    QTcpServer(parent)
{

}
//复写函数incomingConnection(qintptr serverSocketID)
void Server::incomingConnection(qintptr serverSocketID)
{
    ServerSocket *serverSocket=new ServerSocket(this,serverSocketID);
    serverSocket->setSocketDescriptor(serverSocketID);

    connect(serverSocket,SIGNAL(serverSocketReadData(qintptr,QString,int,QByteArray)),
            this,SLOT(ReadData(qintptr,QString,int,QByteArray)));
    connect(serverSocket,SIGNAL(serverSocketDisConnect(qintptr,QString,int)),
            this,SLOT(DisConnect(qintptr,QString,int)));
    connect(serverSocket,SIGNAL(aboutToClose()),
            this,SLOT(deleteLater()));//关闭监听时，对象自动删除

    idSocketMap.insert(serverSocketID,serverSocket);
    serverSocketCount++;


    emit hasConnect(serverSocketID, serverSocket->peerAddress().toString(),serverSocket->peerPort());
    emit ListSocket(idSocketMap,idUserMap);
}

void Server::ReadData(qintptr serverSocketID,QString IP,int Port,QByteArray data)
{
    emit hasData(serverSocketID,IP,Port,data);
}

void Server::DisConnect(qintptr serverSocketID,QString IP,int Port)
{
    idSocketMap.remove(serverSocketID);
    idUserMap.remove(serverSocketID);
    serverSocketCount--;
    emit hasDisConnect(serverSocketID,IP,Port);
}
