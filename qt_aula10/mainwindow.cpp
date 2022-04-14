#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap imagem("C:/Users/Fabiano/Documents/qt_aula10/wideputin.jpg");
    ui->label->setPixmap(imagem.scaled(301,168,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap imagem2("C:/Users/Fabiano/Documents/qt_aula10/passarinho.JPG");
    ui->label->setPixmap(imagem2.scaled(301,168,Qt::KeepAspectRatio));
}
