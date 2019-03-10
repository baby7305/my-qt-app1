#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QtWidgets/QPushButton>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);
    QPushButton* button;
    bool eventFilter(QObject *, QEvent *);
    bool event(QEvent *);

signals:

public slots:
};

#endif // MYWIDGET_H