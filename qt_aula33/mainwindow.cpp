#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>

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
    QString link="http://www.youtube.com";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_pushButton_2_clicked()
{
    QString link="file:///C:/Windows/System32/notepad.exe";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_pushButton_3_clicked()
{
    QString link="file:///C:/Windows/System32/calc.exe";
    QDesktopServices::openUrl(QUrl(link));
}
