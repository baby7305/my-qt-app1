#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QtWidgets/QLineEdit>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);
    QLineEdit* edit;

signals:

public slots:
    void slotButtonClicked();
};

#endif // MYWIDGET_H