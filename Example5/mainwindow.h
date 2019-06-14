#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QDebug>
#include <QPainter>
#include <QPen>
#include <QPaintEvent>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *);
    int choiced1,choiced2=0,now=0;
    bool entered;


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
