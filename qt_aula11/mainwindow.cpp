#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(ui->pushButton);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bto_ok_clicked()
{
    ui->statusbar->showMessage("Nome: "+ui->txt_nome->text()+" | E-mail: "+ui->txt_email->text());
}

void MainWindow::on_pushButton_clicked()
{
    QString msg="Uma frase qualquer";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this,"Canal",msg);


}
