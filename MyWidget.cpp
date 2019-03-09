#include "MyWidget.h"
#include <QDebug>
#include <QEvent>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{

}

bool MyWidget::event(QEvent *ev)
{
    if (ev->type() == QEvent::MouseButtonPress)
    {
        qDebug() << "mouse press";
    }

    return QWidget::event(ev);
}