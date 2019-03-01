#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT
  public:
    explicit MyWidget(QWidget *parent = nullptr);

  signals:

  public slots:
    void slotComboBoxIndexChanged(const QString &);
};

#endif // MYWIDGET_H