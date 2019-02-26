#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.setParent(&widget);
    lineEdit.setGeometry(30, 30, 100, 30);

    widget.show();
    return app.exec();
}
