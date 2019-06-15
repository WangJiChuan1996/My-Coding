#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <wiringPi.h>
#include <QStringList>
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTcpSocket *tcpsocket;
    QString PATH="/home/pi/Mobile_Light";

public slots:
    void TcpReadData();

private slots:
    void on_R_clicked();

    void on_G_clicked();

    void on_B_clicked();

    void on_WATCH_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
