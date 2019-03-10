#include "MyWidget.h"
#include <QEvent>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    button = new QPushButton("This button", this);
    connect(button, SIGNAL(clicked()), this, SLOT(close()));

    button->installEventFilter(this);
}

bool MyWidget::eventFilter(QObject *o, QEvent *e)
{
    if (o == (QObject *)button && (e->type() == QEvent::MouseButtonRelease ||
                                   e->type() == QEvent::MouseButtonDblClick ||
                                   e->type() == QEvent::MouseButtonPress))
    {
        return true;
    }
    return QWidget::eventFilter(o, e);
}

bool MyWidget::event(QEvent *e)
{
    if (e->type() == QEvent::User)
    {
        qDebug() << "User event is comming";
    }
    return QWidget::event(e);
}
