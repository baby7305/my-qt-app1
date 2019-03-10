#include <QtGui/QPainter>
#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
}

void MyWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawLine(QPoint(0, 0), QPoint(100, 100));
    p.drawEllipse(QPoint(95, 333), 50, 50);
    p.drawText(QPoint(300, 50), "Hello world");
    p.drawRect(QRect(40, 60, 100, 50));
    p.drawRoundRect(QRect(80, 80, 150, 150));
}
