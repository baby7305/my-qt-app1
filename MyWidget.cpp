#include "MyWidget.h"
#include <QDebug>
#include <QMouseEvent>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

bool MyWidget::event(QEvent *ev)
{
    if (ev->type() == QEvent::MouseButtonPress)
    {
        return true;
    }
    return QWidget::event(ev);
}

void MyWidget::mousePressEvent(QMouseEvent *ev)
{
    QPoint pt = ev->pos();
    qDebug() << pt;
}