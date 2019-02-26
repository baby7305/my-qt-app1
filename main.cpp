#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.show();
    lineEdit.setParent(&widget);

    lineEdit.setEchoMode(QLineEdit::PasswordEchoOnEdit);  //设置密码输入样式
    lineEdit.text();    //获取输入内容
    lineEdit.setPlaceholderText("要输入密码");

    widget.show();
    return app.exec();
}
