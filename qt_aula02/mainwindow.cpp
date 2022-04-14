#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Botao_clicked()
{
    ui->Etiqueta->setText("Olá Mundo!");
}

void MainWindow::on_Botao2_clicked()
{
    ui->Etiqueta->setText("Prazer em conhecê-lo");
}
