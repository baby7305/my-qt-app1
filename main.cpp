#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.show();
    lineEdit.setParent(&widget);

    widget.show();
    return app.exec();
}
