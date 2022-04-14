#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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
    QMessageBox::about(this,"testando123","testandodenovo");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this,"testando123");
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this,"testando123","exemplodeerro");
}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"testando123","informação");
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::question(this,"testando123","umaperguntaqualquer?");
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this,"testando123","AlertaQualquer!");
}
