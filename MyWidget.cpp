#include "MyWidget.h"
#include <QDebug>
#include <QMouseEvent>
#include <QtWidgets/QVBoxLayout>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *lay = new QVBoxLayout(this);
    lay->addWidget(button = new QPushButton("OK", this));
    lay->addWidget(button2 = new QPushButton("Button2"));
    button->setDefault(true);
    this->setMouseTracking(true);
    connect(button, SIGNAL(clicked()), this, SLOT(slotButtonClicked()));
    connect(button2, SIGNAL(clicked()), this, SLOT(slotButtonClicked()));
}

void MyWidget::slotButtonClicked()
{
    QPushButton *button = (QPushButton *)sender();
    qDebug() << button->text();
}

void MyWidget::mousePressEvent(QMouseEvent *ev)
{
    QPoint pt = ev->pos();
    qDebug() << pt;
    if (ev->modifiers() == Qt::ShiftModifier)
    {
        qDebug() << "shift press";
    }
    if (ev->button() == Qt::LeftButton)
    {
        if (ev->modifiers() == Qt::ControlModifier)
        {
            // handle with Control;
            return;
        }

        // handle2 without control;
    }
    else
    {
    }
}

void MyWidget::mouseReleaseEvent(QMouseEvent *)
{
}
void MyWidget::mouseMoveEvent(QMouseEvent *)
{
    static int i = 0;
    qDebug() << "mouse move" << i++;
}

void MyWidget::keyPressEvent(QKeyEvent *ev)
{
    ev->modifiers();
    int key = ev->key();
    qDebug() << key;
    char a = key;
    qDebug() << (char)a;
}

void MyWidget::keyReleaseEvent(QKeyEvent *)
{
}