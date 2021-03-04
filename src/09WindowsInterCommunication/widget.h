#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
private:
    QPushButton *pB1;
    SubWidget subWin;
public:
    void slotHideMe();
    void slotShowMe();
};

#endif // WIDGET_H
