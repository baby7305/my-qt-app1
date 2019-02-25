#include <QApplication>     //应用程序抽象类
#include <QWidget>          //窗口类
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;     //构造一个窗口
    widget.setWindowTitle("hello world");

    QPushButton pushButton;
    pushButton.setText("button");
    pushButton.setParent(&widget);

    QObject::connect(&pushButton, SIGNAL(clicked()), &widget, SLOT(close()));

    widget.show();      //显示窗口
    return app.exec();  //在exec中有一个消息循环
}
