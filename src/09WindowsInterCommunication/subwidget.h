#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>
class SubWidget : public QWidget
{
//    public:
//        SubWidget();
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = 0);
signals:
    void sigSub();
public slots:
    void myslot();

private:
    QPushButton b1;
};

#endif // SUBWIDGET_H
