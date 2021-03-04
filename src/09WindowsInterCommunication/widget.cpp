#include "widget.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pB1 = new QPushButton("Window2", this);
    connect(pB1, QPushButton::pressed, this, Widget::slotHideMe);
    //this->subWin;
    connect(&subWin, SubWidget::sigSub, this, Widget::slotShowMe);
}

void Widget :: slotHideMe(){
    hide();
    subWin.show();
}
void Widget :: slotShowMe(){
    subWin.hide();
    this->show();
}

Widget::~Widget()
{

}
