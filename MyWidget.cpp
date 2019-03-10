#include "MyWidget.h"
#include <QDebug>
#include <QEvent>
#include <QtWidgets/QVBoxLayout>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *lay = new QVBoxLayout(this);
    lay->addWidget(edit = new QLineEdit());
    connect(edit, SIGNAL(returnPressed()), this, SLOT(slotButtonClicked()));
}

void MyWidget::slotButtonClicked()
{
    QLineEdit *button = (QLineEdit *)sender();
    qDebug() << button->text();
}
