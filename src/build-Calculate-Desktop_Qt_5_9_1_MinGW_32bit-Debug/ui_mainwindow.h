/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *clearBtn;
    QPushButton *ClearAllBtn;
    QPushButton *ansBtn;
    QPushButton *digitBtn1;
    QPushButton *digitBtn2;
    QPushButton *digitBtn3;
    QPushButton *addBtn;
    QPushButton *digitBtn4;
    QPushButton *digitBtn5;
    QPushButton *digitBtn6;
    QPushButton *minBtn;
    QPushButton *digitBtn7;
    QPushButton *digitBtn8;
    QPushButton *digitBtn9;
    QPushButton *mulBtn;
    QPushButton *pointBtn;
    QPushButton *digitBtn0;
    QPushButton *signBtn;
    QPushButton *dividBtn;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(640, 408);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        clearBtn = new QPushButton(centralWidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(40, 100, 75, 23));
        ClearAllBtn = new QPushButton(centralWidget);
        ClearAllBtn->setObjectName(QStringLiteral("ClearAllBtn"));
        ClearAllBtn->setGeometry(QRect(150, 100, 75, 23));
        ansBtn = new QPushButton(centralWidget);
        ansBtn->setObjectName(QStringLiteral("ansBtn"));
        ansBtn->setGeometry(QRect(270, 100, 161, 23));
        digitBtn1 = new QPushButton(centralWidget);
        digitBtn1->setObjectName(QStringLiteral("digitBtn1"));
        digitBtn1->setGeometry(QRect(40, 140, 75, 23));
        digitBtn2 = new QPushButton(centralWidget);
        digitBtn2->setObjectName(QStringLiteral("digitBtn2"));
        digitBtn2->setGeometry(QRect(150, 140, 75, 23));
        digitBtn3 = new QPushButton(centralWidget);
        digitBtn3->setObjectName(QStringLiteral("digitBtn3"));
        digitBtn3->setGeometry(QRect(270, 140, 75, 23));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setGeometry(QRect(360, 140, 75, 23));
        digitBtn4 = new QPushButton(centralWidget);
        digitBtn4->setObjectName(QStringLiteral("digitBtn4"));
        digitBtn4->setGeometry(QRect(40, 180, 75, 23));
        digitBtn5 = new QPushButton(centralWidget);
        digitBtn5->setObjectName(QStringLiteral("digitBtn5"));
        digitBtn5->setGeometry(QRect(150, 180, 75, 23));
        digitBtn6 = new QPushButton(centralWidget);
        digitBtn6->setObjectName(QStringLiteral("digitBtn6"));
        digitBtn6->setGeometry(QRect(270, 180, 75, 23));
        minBtn = new QPushButton(centralWidget);
        minBtn->setObjectName(QStringLiteral("minBtn"));
        minBtn->setGeometry(QRect(360, 180, 75, 23));
        digitBtn7 = new QPushButton(centralWidget);
        digitBtn7->setObjectName(QStringLiteral("digitBtn7"));
        digitBtn7->setGeometry(QRect(40, 220, 75, 23));
        digitBtn8 = new QPushButton(centralWidget);
        digitBtn8->setObjectName(QStringLiteral("digitBtn8"));
        digitBtn8->setGeometry(QRect(150, 220, 75, 23));
        digitBtn9 = new QPushButton(centralWidget);
        digitBtn9->setObjectName(QStringLiteral("digitBtn9"));
        digitBtn9->setGeometry(QRect(270, 220, 75, 23));
        mulBtn = new QPushButton(centralWidget);
        mulBtn->setObjectName(QStringLiteral("mulBtn"));
        mulBtn->setGeometry(QRect(360, 220, 75, 23));
        pointBtn = new QPushButton(centralWidget);
        pointBtn->setObjectName(QStringLiteral("pointBtn"));
        pointBtn->setGeometry(QRect(40, 270, 75, 23));
        digitBtn0 = new QPushButton(centralWidget);
        digitBtn0->setObjectName(QStringLiteral("digitBtn0"));
        digitBtn0->setGeometry(QRect(150, 270, 75, 23));
        signBtn = new QPushButton(centralWidget);
        signBtn->setObjectName(QStringLiteral("signBtn"));
        signBtn->setGeometry(QRect(270, 270, 75, 23));
        dividBtn = new QPushButton(centralWidget);
        dividBtn->setObjectName(QStringLiteral("dividBtn"));
        dividBtn->setGeometry(QRect(360, 270, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 391, 71));
        lineEdit->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        ClearAllBtn->setText(QApplication::translate("MainWindow", "ClearAll", Q_NULLPTR));
        ansBtn->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        digitBtn1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        digitBtn2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        digitBtn3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        addBtn->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        digitBtn4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        digitBtn5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        digitBtn6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        minBtn->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        digitBtn7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        digitBtn8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        digitBtn9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        mulBtn->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        pointBtn->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        digitBtn0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        signBtn->setText(QApplication::translate("MainWindow", "+/-", Q_NULLPTR));
        dividBtn->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
