#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.setPlaceholderText("要输入密码");

    QPushButton pushButton;
    pushButton.setText("button");

    QGridLayout layout;
    layout.addWidget(&pushButton, 1, 1);
    layout.addWidget(&lineEdit, 1, 2);
    layout.addWidget(new QPushButton("确定"), 2, 1);
    layout.addWidget(new QPushButton("取消"), 2, 2);

    widget.setLayout(&layout);
    widget.show();
    return app.exec();
}
