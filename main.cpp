#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.setPlaceholderText("要输入密码");

    QPushButton pushButton;
    pushButton.setText("button");

    widget.show();
    return app.exec();
}
