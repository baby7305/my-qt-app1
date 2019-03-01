#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QTextBrowser>
#include <QCompleter>
#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *lay = new QVBoxLayout(this);
    QComboBox *combo;
    QPushButton *pushButton;
    QTextEdit *edit;
    QGroupBox *group;
    QSlider *slider;
    QSpinBox *spinBox;

    lay->addWidget(new QLabel("<font color=red>label</font>"));
    lay->addWidget(pushButton = new QPushButton("Button"));
    pushButton->setStyleSheet("QPushButton {font:bold 16px; color:red; padding:5px}");
    lay->addWidget(new QRadioButton("Radio"));
    lay->addWidget(new QCheckBox("check box"));

    lay->addWidget(combo = new QComboBox());
    combo->addItem("Select item1");
    combo->addItem("Select item2");
    combo->setEditable(true);
    combo->setCompleter(new QCompleter(combo->model()));

    lay->addWidget(edit = new QTextEdit);
    edit->setText("<table border=1><tr><th>head1</th><th>head2</th></tr>"
                  "<tr><td>value1</td><td>value2</td></tr>"
                  "<tr><td>value3</td><td>value4</td></tr>"
                  "</table><br>");

    lay->addWidget(new QTextBrowser);

    lay->addWidget(group = new QGroupBox("Some items"));
    QHBoxLayout *hBoxLay;
    group->setLayout(hBoxLay = new QHBoxLayout);
    hBoxLay->addWidget(new QPushButton("第一"));
    hBoxLay->addWidget(new QPushButton("第二"));

    lay->addWidget(slider = new QSlider(Qt::Horizontal));
    slider->setMaximum(100);
    slider->setMinimum(0);

    lay->addWidget(spinBox = new QSpinBox);
    spinBox->setMaximum(10);
    spinBox->setMinimum(0);

    lay->addWidget(new QDateTimeEdit);
    lay->addWidget(new QDateEdit);
    lay->addWidget(new QTimeEdit);

}