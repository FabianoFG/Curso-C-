#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap imagem_1(":/mgs/Imagens/passarinho.JPG");
    ui->lb_passarinho->setPixmap(imagem_1);

    QPixmap imagem_2(":/mgs/Imagens/wideputin.jpg");
    ui->lb_wideputin->setPixmap(imagem_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

