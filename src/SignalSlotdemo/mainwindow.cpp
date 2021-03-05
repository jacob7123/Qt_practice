#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //TODO
    //Different objects can connect each other
    //connect(ui->lineEdit, &QLineEdit::textChanged, ui->lblcount1, &QLabel::setText);

    //multiple object
    QLineEdit * lineEdit[] = {
        ui->lineEdit,
        ui->lineEdit_2
    };

    QLabel *plabel[] = {
        ui->label_2,
        ui->lblcount1
    };
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            connect(lineEdit[i], &QLineEdit::textChanged, plabel[j], &QLabel::setText);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
