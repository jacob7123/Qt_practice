#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent)
{
    b1.setParent(this);
    b1.setText("Window1");
    b1.resize(100, 100);
    connect(&b1, QPushButton::clicked, this, SubWidget::myslot);
}
void SubWidget :: myslot(){
    emit sigSub();
}
