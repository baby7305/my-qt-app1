#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.setPlaceholderText("要输入密码");
    lineEdit.setParent(&widget);

    QPushButton pushButton;
    pushButton.setText("button");
    pushButton.setParent(&widget);

    QHBoxLayout layout;
    layout.addStretch(1);
    layout.addWidget(&pushButton);
    layout.addSpacing(50);
    layout.addWidget(&lineEdit);
    layout.addStretch(1);

    widget.setLayout(&layout);
    widget.show();
    return app.exec();
}
