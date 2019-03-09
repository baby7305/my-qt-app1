#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);
    bool event(QEvent *);
    void mousePressEvent(QMouseEvent *);

signals:

public slots:
};

#endif // MYWIDGET_H