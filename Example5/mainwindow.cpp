#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::red,4,Qt::DashLine));
    switch (choiced1) {
    case 1:
        painter.drawRect(ui->R_on->geometry().x()-5,ui->R_on->geometry().y()+8,ui->R_on->width()+10,ui->R_on->height()+10);
        break;
    case 2:
        painter.drawRect(ui->R_off->geometry().x()-5,ui->R_off->geometry().y()+8,ui->R_off->width()+10,ui->R_off->height()+10);
        break;
    case 3:
        painter.drawRect(ui->G_on->geometry().x()-5,ui->G_on->geometry().y()+8,ui->G_on->width()+10,ui->G_on->height()+10);
        break;
    case 4:
        painter.drawRect(ui->G_off->geometry().x()-5,ui->G_off->geometry().y()+8,ui->G_off->width()+10,ui->G_off->height()+10);
        break;
    case 5:
        painter.drawRect(ui->B_on->geometry().x()-5,ui->B_on->geometry().y()+8,ui->B_on->width()+10,ui->B_on->height()+10);
        break;
    case 6:
        painter.drawRect(ui->B_off->geometry().x()-5,ui->B_off->geometry().y()+8,ui->B_off->width()+10,ui->B_off->height()+10);
        break;
    case 7:
        painter.drawRect(ui->progressBar_R->geometry().x()-5,ui->progressBar_R->geometry().y()+8,ui->progressBar_R->width()+10,ui->progressBar_R->height()+10);
        break;
    case 8:
        painter.drawRect(ui->progressBar_G->geometry().x()-5,ui->progressBar_G->geometry().y()+8,ui->progressBar_G->width()+10,ui->progressBar_G->height()+10);
        break;
    case 9:
        painter.drawRect(ui->progressBar_B->geometry().x()-5,ui->progressBar_B->geometry().y()+8,ui->progressBar_B->width()+10,ui->progressBar_B->height()+10);
        break;
    default:
        break;
    }
    if(choiced2==1)
        painter.drawRect(ui->UP->geometry().x()-5,ui->UP->geometry().y()+8,ui->UP->width()+10,ui->UP->height()+10);
    if(choiced2==2)
        painter.drawRect(ui->DOWN->geometry().x()-5,ui->DOWN->geometry().y()+8,ui->DOWN->width()+10,ui->DOWN->height()+10);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A)
    {
        if(!entered)
        {
            if(now>=2)
                now--;
            else
                now=9;
            choiced1=now;
            repaint();
        }
        entered=false;
        choiced2=0;

    }
    if(event->key()==Qt::Key_D)
    {
        if(!entered)
        {
            if(now<=8)
                now++;
            else
                now=1;
            choiced1=now;
            repaint();
        }
        else
        {
            choiced2++;
            if(choiced2>2)
                choiced2=1;
            repaint();
        }

    }
    if(event->key()==Qt::Key_S)
    {
        if(choiced1==1)
            qDebug()<<"红灯  亮";
        if(choiced1==2)
            qDebug()<<"红灯  灭";
        if(choiced1==3)
            qDebug()<<"绿灯  亮";
        if(choiced1==4)
            qDebug()<<"绿灯  灭";
        if(choiced1==5)
            qDebug()<<"蓝灯  亮";
        if(choiced1==6)
            qDebug()<<"蓝灯  灭";
        if(choiced1==7)
        {
            entered=true;
            if(choiced1==7 && entered)
            {
                int Value_R=ui->progressBar_R->value();
                if(choiced2==1)
                {
                    ui->progressBar_R->setValue(Value_R+1);
                }
                if(choiced2==2)
                {
                    ui->progressBar_R->setValue(Value_R-1);
                }
            }
        }
        if(choiced1==8)
        {
            entered=true;
            if(choiced1==8 && entered)
            {
                int Value_G=ui->progressBar_G->value();
                if(choiced2==1)
                {
                    ui->progressBar_G->setValue(Value_G+1);
                }
                if(choiced2==2)
                {
                    ui->progressBar_G->setValue(Value_G-1);
                }
            }
        }
        if(choiced1==9)
        {
            entered=true;
            if(choiced1==9 && entered)
            {
                int Value_B=ui->progressBar_B->value();
                if(choiced2==1)
                {
                    ui->progressBar_B->setValue(Value_B+1);
                }
                if(choiced2==2)
                {
                    ui->progressBar_B->setValue(Value_B-1);
                }
            }
        }



    }
}
