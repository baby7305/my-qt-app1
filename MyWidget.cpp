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
#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *lay = new QVBoxLayout(this);
    QLabel *label;
    QComboBox *combo;
    QTextEdit *edit;

    lay->addWidget(label = new QLabel("label"));
    label->setPixmap(QPixmap("./aaa.png"));
    lay->addWidget(new QPushButton("Button"));
    lay->addWidget(new QRadioButton("Radio"));
    lay->addWidget(new QCheckBox("check box"));
    lay->addWidget(combo = new QComboBox());
    combo->addItem("Select item1");
    combo->addItem("Select item2");

    lay->addWidget(edit = new QTextEdit);
    edit->setText("<img src=./aaa.png></img>");

    lay->addWidget(new QTextBrowser);
    lay->addWidget(new QGroupBox("Some items"));
    lay->addWidget(new QSlider);
    lay->addWidget(new QSpinBox);

    lay->addWidget(new QDateTimeEdit);
    lay->addWidget(new QDateEdit);
    lay->addWidget(new QTimeEdit);
}