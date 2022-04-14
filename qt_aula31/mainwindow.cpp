#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>

static int cont=0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempo=new QTimer(this);
    connect(tempo,SIGNAL(timeout()),this,SLOT(minha_funcao()));
    connect(tempo,SIGNAL(timeout()),this,SLOT(atualiza_relogio()));
    tempo->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::minha_funcao(){
    cont++;
    qDebug() << "Curso Qt - Timer" << cont;
}

void MainWindow::atualiza_relogio(){
    QTime tempo_atual=QTime::currentTime();
    QString tempo_texto=tempo_atual.toString("hh:mm:ss");
    ui->label->setText(tempo_texto);
}

