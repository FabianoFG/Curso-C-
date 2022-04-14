#include "janela02.h"
#include "ui_janela02.h"

Janela02::Janela02(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Janela02)
{
    ui->setupUi(this);
}

Janela02::~Janela02()
{
    delete ui;
}
