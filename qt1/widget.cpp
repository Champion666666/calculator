#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Button_clicked()
{
    QString num;
    QString display;
    float value;
    bool ok;
    num = ui->lineEdit->text();
    value=num.toFloat(&ok);
    value=value*value*3.1415926;
    ui->label->setText(display.setNum(value));
}

