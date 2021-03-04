#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setText("0");
    ans = 0.0;
    waitForOperand = true;

    //Have to connect signal and slot
    connectSlots();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::calculate(double operand, QString pendingOperator){
    if(pendingOperator == "+"){
        ans += operand;
    }
    else if(pendingOperator == "-"){
        ans -= operand;
    }
    else if(pendingOperator == "*"){
        ans *= operand;
    }
    else if(pendingOperator == "/"){
        if(operand == 0.0)
            return false;
        ans /= operand;
    }
    return true;
}

void MainWindow:: abortOperation(){
    ans = 0.0;
    pendingOperator.clear();
    //return error to user
    ui->lineEdit->setText("0");
    waitForOperand = true;
    QMessageBox::warning(this, "Error happen", "Can't divid 0");
}
void MainWindow::connectSlots(){
    //Loop every bottom and set them to same type slot function
    QPushButton *digitBtns[10] = {
        ui->digitBtn0, ui->digitBtn1, ui->digitBtn2, ui->digitBtn3,
        ui->digitBtn4, ui->digitBtn5, ui->digitBtn6, ui->digitBtn7,
        ui->digitBtn8, ui->digitBtn9
    };
    for(auto btn : digitBtns){
        connect(btn, &QPushButton::clicked, this, &MainWindow::digitBtn_clicked);
    }

    QPushButton* operatorBtns[4] = {
      ui->addBtn, ui->dividBtn, ui->mulBtn, ui->minBtn
    };
    for(auto btn : operatorBtns){
        connect(btn, &QPushButton::clicked, this, &MainWindow::operatorClicked);
    }

    QPushButton* clearBtns = ui->clearBtn;
    connect(clearBtns, &QPushButton::clicked, this, &MainWindow::on_clearBtn_clicked);

    QPushButton* clearAllBtns = ui->ClearAllBtn;
    connect(clearAllBtns, &QPushButton::clicked, this, &MainWindow::on_clearAllBtn_clicked);

}

void MainWindow::on_clearBtn_clicked(){
    //change current numberr to 0
    ui->lineEdit->setText("0");
    waitForOperand = true;
}
void MainWindow::on_clearAllBtn_clicked(){
    //clean all data
    ui->lineEdit->setText("0");
    waitForOperand = true;
    ans = 0.0;
    pendingOperator.clear();
}

void MainWindow::digitBtn_clicked(){
    QPushButton *digitBtn = static_cast<QPushButton*>(sender());
    QString value = digitBtn->text();
    if(ui->lineEdit->text() == "0" && value == "0"){
        return;
    }
    if(waitForOperand){
        ui->lineEdit->setText(value);
        waitForOperand = false;
    }
    else{
        ui->lineEdit->setText(ui->lineEdit->text() + value);
    }
}
void MainWindow::on_ansBtn_clicked(){
    double operand = ui->lineEdit->text().toDouble();
    if(pendingOperator.isEmpty())
        return;
    if(!calculate(operand, pendingOperator)){
        abortOperation();
        return;
    }
    ui->lineEdit->setText(QString::number(ans));
    pendingOperator.clear();
    ans = 0;
    waitForOperand = true;
}

void MainWindow::on_signBtn_clicked(){
    QString text = ui->lineEdit->text();
    double value = text.toDouble();
    if(value > 0){
        text.prepend('-');
    }
    else if(value < 0){
        text.remove(0, 1);
    }
    ui->lineEdit->setText(text);
}

void MainWindow::on_pointBtn_clicked(){
    if(waitForOperand)
        ui->lineEdit->setText("0");
    if(!ui->lineEdit->text().contains('.'))
        ui->lineEdit->setText(ui->lineEdit->text() + ".");
    waitForOperand = false;
}

void MainWindow::operatorClicked(){
    QPushButton *clickedBtn = qobject_cast<QPushButton*>(sender());
    QString clickedOperator = clickedBtn->text();
    double operand = ui->lineEdit->text().toDouble();
    if(!pendingOperator.isEmpty()){
        if(calculate(operand, pendingOperator)){
            abortOperation();
            return;
        }
        ui->lineEdit->setText(QString::number(ans));
    }
    else{
        ans = operand;
    }
    pendingOperator = clickedOperator;
    waitForOperand  = true;
}
