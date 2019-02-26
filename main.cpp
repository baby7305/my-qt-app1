#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QCompleter>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.show();
    lineEdit.setParent(&widget);

    QCompleter completer(QStringList() << "aab" << "123" << "998");
    completer.setFilterMode(Qt::MatchContains);
    lineEdit.setCompleter(&completer);

    widget.show();
    return app.exec();
}
