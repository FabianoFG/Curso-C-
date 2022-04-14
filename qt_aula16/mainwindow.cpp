#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString msg,cor,transp,movel;int ntransp=0;

    msg=" ";
    if(ui->rb_vermelho->isChecked()){
        cor="vermelho";
    }else if(ui->rb_verde->isChecked()){
        cor="verde";
    }else if(ui->rb_azul->isChecked()){
        cor="azul";
    }
    //outro jeito
    if(ui->rb_aviao->isChecked()){
        ntransp=1;
    }else if(ui->rb_carro->isChecked()){
        ntransp=2;
    }else if(ui->rb_navio->isChecked()){
        ntransp=3;
    }

    switch(ntransp){
        case 1:
            transp="avião";
        break;
        case 2:
            transp="carro";
        break;
        case 3:
            transp="navio";
        break;
        default:
            transp="nenhum";
        break;
    }

    QVector<bool>pro;
    pro.push_back(ui->rb_mesa->isChecked());
    pro.push_back(ui->rb_cadeira->isChecked());
    pro.push_back(ui->rb_escrivaninha->isChecked());

    if(pro[0]){
        movel="mesa";
    }if(pro[1]){
        movel="cadeira";
    }if(pro[2]){
        movel="escrivaninha";
    }

    msg=cor+"\n"+transp+"\n"+movel;

    QMessageBox::information(this,"Curso de QT",msg);
}
