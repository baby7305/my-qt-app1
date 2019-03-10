#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    button = new QPushButton("This button", this);
    connect(button, SIGNAL(clicked()), this, SLOT(close()));
}
