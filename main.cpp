#include <QApplication>     //应用程序抽象类
#include <QWidget>          //窗口类

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;     //构造一个窗口
    widget.show();      //显示窗口
    return app.exec();  //在exec中有一个消息循环
}
