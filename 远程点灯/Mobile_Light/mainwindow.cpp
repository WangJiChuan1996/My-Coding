#include "mainwindow.h"
#include "ui_mainwindow.h"
QString user_choice;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tcpsocket=new QTcpSocket;
    wiringPiSetup();
    pinMode(23,OUTPUT);
    pinMode(24,OUTPUT);
    pinMode(25,OUTPUT);

    tcpsocket->connectToHost("47.101.217.158",6666);
    connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(TcpReadData()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TcpReadData()
{
    QString buf=tcpsocket->readAll();
    if(buf.startsWith("@")&&buf.endsWith("#"))
    {
        int s,q;
        s=buf.indexOf("@");q=buf.indexOf("#");
        QString msg = buf.mid(s+1,q-1);
        qDebug()<<msg;
        QStringList List = msg.split(";");
        if(List[0]==QString::fromLocal8Bit("data"))
        {
            if(List[1]==QString::fromLocal8Bit("R"))
            {
                if(List[2]==QString::fromLocal8Bit("1"))
                {
                    digitalWrite(23,1);
                    ui->R->setText("open");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "open the red light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";
                }else{
                    digitalWrite(23,0);
                    ui->R->setText("close");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "close the red light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";
                }
            }
            if(List[1]==QString::fromLocal8Bit("G"))
            {
                if(List[2]==QString::fromLocal8Bit("1"))
                {
                    digitalWrite(24,1);
                    ui->G->setText("open");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "open the green light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";
                }else{
                    digitalWrite(24,0);
                    ui->G->setText("close");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "close  the green light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";
                }
            }
            if(List[1]==QString::fromLocal8Bit("B"))
            {
                if(List[2]==QString::fromLocal8Bit("1"))
                {
                    digitalWrite(25,1);
                    ui->B->setText("open");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "open the blue light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";
                }else{
                    digitalWrite(25,0);
                    ui->B->setText("close");
                    QDateTime time = QDateTime::currentDateTime();
                    QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
                    QString deal = "close the blue light";
                    QString file_path=PATH+"/history.txt";
                    QFile file(file_path);
                    if(file.open(QIODevice::WriteOnly | QIODevice::Append))
                    {
                         QTextStream stream(&file);
                         stream<<data_save_time<<"    "<<deal<<endl;

                         file.close();

                    }
                    else
                         qDebug()<<"File writing filed!";

                }
            }
        }
    }
}

void MainWindow::on_R_clicked()
{
    QString statu=ui->R->text();
    if(statu==QString::fromLocal8Bit("close"))
    {
        digitalWrite(23,1);
        ui->R->setText("open");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "open the red light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
    else
    {
        digitalWrite(23,0);
        ui->R->setText("close");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "close the red light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
}

void MainWindow::on_G_clicked()
{
    QString statu=ui->G->text();
    if(statu==QString::fromLocal8Bit("close"))
    {
        digitalWrite(24,1);
        ui->G->setText("open");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "open the green light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
    else
    {
        digitalWrite(24,0);
        ui->G->setText("close");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "close  the green light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
}

void MainWindow::on_B_clicked()
{
    QString statu=ui->B->text();
    if(statu==QString::fromLocal8Bit("close"))
    {
        digitalWrite(25,1);
        ui->B->setText("open");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "open the blue light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
    else
    {
        digitalWrite(25,0);
        ui->B->setText("close");
        QDateTime time = QDateTime::currentDateTime();
        QString data_save_time = time.toString("yyyy-MM-dd hh:mm:ss");
        QString deal = "close the blue light";
        QString file_path=PATH+"/history.txt";
        QFile file(file_path);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append))
        {
             QTextStream stream(&file);
             stream<<data_save_time<<"    "<<deal<<endl;

             file.close();

        }
        else
             qDebug()<<"File writing filed!";
    }
}

void MainWindow::on_WATCH_clicked()
{
    user_choice=QFileDialog::getOpenFileName(this, tr("打开文件"), PATH);
    if(!user_choice.isEmpty())
        {
              QFile file(user_choice);
              if(file.open(QIODevice::ReadOnly | QIODevice::Text))
              {
                    while (!file.atEnd())
                    {
                        QString line_data = QString(file.readLine());
                        ui->watch->append(line_data);
                     }
                     file.close();

              }
              else
                     qDebug()<<"File read filed!";
        }
}


