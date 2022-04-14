#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString cursos[5]={"C++","Qt Creator","PHP","Unity","Javascript"};
    QString icones[5]={":/icones/icones/batatas-fritas.png",":/icones/icones/entrega-de-alimentos.png",":/icones/icones/loja-online.png",":/icones/icones/pedido-online.png",":/icones/icones/restaurante.png"};
    for(int i=0;i<5;i++){

        ui->comboBox->addItem(QIcon(icones[i]),cursos[i]);
    }

    ui->comboBox->insertItem(3,QIcon(":/icones/icones/batatas-fritas.png"),"HTML");

    /*ui->comboBox->addItem("C++");
    ui->comboBox->addItem("Qt Creator");
    ui->comboBox->addItem("PHP");
    ui->comboBox->addItem("Unity");
    ui->comboBox->addItem("Javascript");
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this,"Cursos",ui->comboBox->currentText());
}
