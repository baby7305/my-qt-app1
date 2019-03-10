#include <QApplication>
#include "MyWidget.h"
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyWidget widget;
    widget.show();

    qDebug() << "begin send";
    app.postEvent(&widget, new QEvent(QEvent::User));
    app.sendEvent(&widget, new QEvent(QEvent::User));
    qDebug() << "end send";

    return app.exec();
}
