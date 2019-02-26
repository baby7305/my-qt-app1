#include <QApplication>
#include <QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QWidget widget;

    QLineEdit lineEdit;
    lineEdit.setPlaceholderText("要输入密码");

    QPushButton pushButton;
    pushButton.setText("button");

    QGridLayout layout;
    layout.setColumnStretch(3, 1);
    layout.setRowStretch(4, 1);
    layout.setColumnStretch(0, 1);
    layout.setRowStretch(0, 1);

    QLineEdit *password;
    layout.addWidget(new QLabel("Username:"), 1, 1);
    layout.addWidget(new QLineEdit(), 1, 2);
    layout.addWidget(new QLabel("Password:"), 2, 1);
    layout.addWidget(password = new QLineEdit(), 2, 2);
    password->setEchoMode(QLineEdit::Password);

    QHBoxLayout *hBox;
    layout.addLayout(hBox = new QHBoxLayout, 3, 2);
    hBox->addStretch(1);
    hBox->addWidget(new QPushButton("Login"));


    widget.show();
    widget.setLayout(&layout);
    return app.exec();
}
