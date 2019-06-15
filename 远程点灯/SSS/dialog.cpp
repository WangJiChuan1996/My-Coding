#include "dialog.h"
#include "ui_dialog.h"
#include <QHostAddress>
#include <QString>
#include <QNetworkInterface>
int _count;
QByteArray data_all;
Database *database=new Database;
//=============构造函数===============================================================
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);_count=1;
    myserver = new Server(this);
    connect(myserver,SIGNAL(hasConnect(qintptr,QString,int)),this,SLOT(updateCount()));
    connect(myserver,SIGNAL(hasDisConnect(qintptr,QString,int)),this,SLOT(updateCount()));

    connect(myserver,SIGNAL(hasData(qintptr,QString,int,QByteArray)),
            this,SLOT(updateData(qintptr,QString,int,QByteArray)));
    connect(this,SIGNAL(has_reback(qintptr,QString,int,QByteArray)),
                        this,SLOT(reback_message(qintptr,QString,int,QByteArray)));
    connect(this,SIGNAL(has_order(qintptr,QString,int,QString)),
            this,SLOT(judge_order(qintptr,QString,int,QString)));
    connect(this,SIGNAL(has_order_reback(qintptr,QString,int,QString)),
            this,SLOT(order_reback(qintptr,QString,int,QString)));
    connect(this,SIGNAL(has_order_Broadcast(QString)),
            this,SLOT(order_Broadcast(QString)));


}
//=============虚造函数===============================================================
Dialog::~Dialog()
{
    delete ui;
}

//=============开启服务器===============================================================
void Dialog::on_pushButton_open_clicked()
{
    ui->pushButton_open->setEnabled(false);
    ui->pushButton_close->setEnabled(true);
    int Port = 6666;
    //================================
    ui->label_IP->setText("47.101.217.158");
    //================================
    myserver->listen(QHostAddress::Any,Port);//监听客户端连接
    ui->label_Port->setText(QString::number(Port));
    ui->label_status->setText("运行中！");
}
//=============关闭服务器===============================================================
void Dialog::on_pushButton_close_clicked()
{
    myserver->close();
    ui->pushButton_close->setEnabled(false);
    ui->pushButton_open->setEnabled(true);
    ui->label_status->setText("关闭！");
    ui->label_IP->setText("");
    ui->label_Port->setText("");
    ui->label_num->setText("0");
    ui->plainTextEdit_show->clear();
}
//=============更新在线数===============================================================
void Dialog::updateCount()
{
    ui->label_num->setText(QString::number(myserver->serverSocketCount));
}
//=============接收数据===============================================================
void Dialog::updateData(qintptr serverSocketID,QString IP,int Port,QByteArray data)
{
    QString DATA=data;
    QString str=QString("从  socket: %1   ip: %2    port: %3   收到\n->: %4").arg(serverSocketID).arg(IP).arg(Port).arg(DATA);
    ui->plainTextEdit_show->appendPlainText(str);


    if(DATA.startsWith('@')&&DATA.endsWith('#'))//judge if order
    {
        emit has_order(serverSocketID,IP,Port,DATA);
    }//judge if order

    //emit has_reback(serverSocketID,IP,Port,data);
}
//============================================================================
void Dialog::judge_order(qintptr serverSocketID,QString IP,int Port,QString order)//judge which order
{
    QByteArray change = order.toUtf8();
    data_all=change;
    QString ORDER=order.mid(1,order.length()-2);
    QStringList List=ORDER.split(";");
//=====================================================================================
    if(List[0]==QString::fromLocal8Bit("data"))
    {

        emit has_order_Broadcast(order);

    }

}
//=====================================================================
void Dialog::order_Broadcast(QString DATA)
{
    QByteArray Broadcast = DATA.toUtf8();
    QMap <int,ServerSocket *>::const_iterator Device;
    for(Device=myserver->idSocketMap.constBegin();Device!=myserver->idSocketMap.constEnd();++Device)
    {

        Device.value()->write(Broadcast);
    }
}
//=====================================================================
void Dialog::reback_message(qintptr serverSocketID, QString IP, int Port, QByteArray data)
{
    tcpSocket=new QTcpSocket;
    tcpSocket->setSocketDescriptor(serverSocketID);
    tcpSocket->write(data);
}
//=====================================================================
void Dialog::order_reback(qintptr serverSocketID, QString IP, int Port, QString order)
{
    order=order+"\n";
    QByteArray byteArray=order.toUtf8();
    tcpSocket1=new QTcpSocket;
    tcpSocket1->setSocketDescriptor(serverSocketID);
    tcpSocket1->write(byteArray);
}
//=====================================================================
void Dialog::on_pushButton_clear_clicked()
{
    ui->plainTextEdit_show->clear();
}
