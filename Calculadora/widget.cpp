#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this); //Mi Ventana
    setWindowTitle("Calculadora");
    ui->resultado->setText(" ");


}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_suma_clicked()
{
  ui->resultado->setText(QString::number(ui->n1->value()+ui->n2->value()));
}


void Widget::on_resta_clicked()
{
  ui->resultado->setText(QString::number(ui->n1->value()-ui->n2->value()));

}


void Widget::on_multi_clicked()
{
  ui->resultado->setText(QString::number(ui->n1->value()*ui->n2->value()));
}


void Widget::on_division_clicked()
{
  ui->resultado->setText(QString::number(ui->n1->value()/ui->n2->value()));
}

