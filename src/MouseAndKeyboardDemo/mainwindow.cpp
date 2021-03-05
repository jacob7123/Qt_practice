#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMouseTracking(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        ui->lblMotition->setText("left button pressed");
    }
    else{
        ui->lblMotition->setText("rught button pressed");
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        ui->lblMotition->setText("left button released");
    }
    else{
        ui->lblMotition->setText("rught button released");
    }
}

void MainWindow::mouseDoubleClickEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
        ui->lblMotition->setText("left button dblclicked");
    }
    else{
        ui->lblMotition->setText("rught button dblclicked");
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    QPoint pos = event->globalPos();
    ui->lblpos->setText(QString("(%1, %2)").arg(pos.rx()).arg(pos.ry()));
}

void MainWindow::wheelEvent(QWheelEvent *event){
    if(event->delta() > 0)
        ui->lblMotition->setText("wheel up");
    else
        ui->lblMotition->setText("wheel down");
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_0)
        ui->lblMotition->setText("key 0 pressed");
}
