#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(MudaTexto()));
}

void MainWindow::MudaTexto()
{
  ui->label->setText("Um texto qualquer");
}

MainWindow::~MainWindow()
{
    delete ui;
}
