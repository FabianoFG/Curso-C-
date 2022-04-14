#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

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


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton resposta=QMessageBox::question(this,"Aula05","Deseja fechar esse programa?",QMessageBox::Yes|QMessageBox::No);
    if(resposta==QMessageBox::Yes){
        QApplication::quit();
    }else{
        //QMessageBox::about(this,"Aula05","Esse programa não foi fechado.");
        qDebug() << "O programa não foi fechado";
    }
}
