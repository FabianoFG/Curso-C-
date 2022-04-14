#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *telasplash=new QSplashScreen;
    telasplash->setPixmap(QPixmap(":/splash/Imagens/passarinho.JPG"));
    telasplash->show();

    MainWindow w;

    QTimer::singleShot(2000,telasplash,SLOT(close()));
    QTimer::singleShot(2000,&w,SLOT(show()));

    //w.show();

    return a.exec();
}
