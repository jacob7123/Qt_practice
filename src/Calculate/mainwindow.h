#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //new object/logic by chingyen
    //TODO
    bool calculate(double operand, QString pendingOperator);
    //stop running and return error
    void abortOperation();
    //connect signal and slot
    void connectSlots();

    //store symbol of operation
    QString pendingOperator;
    //store answer
    double ans;
    //commend whether waiting a operation
    bool waitForOperand;

    //Add new slot function
private slots:
    void on_clearBtn_clicked();
    void on_clearAllBtn_clicked();
    void on_ansBtn_clicked();
    void digitBtn_clicked();
    void on_signBtn_clicked();
    void operatorClicked();
    void on_pointBtn_clicked();
};

#endif // MAINWINDOW_H
