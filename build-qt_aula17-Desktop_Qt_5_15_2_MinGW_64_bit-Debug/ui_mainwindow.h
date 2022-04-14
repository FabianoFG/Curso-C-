/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionEdit;
    QAction *actionSair;
    QAction *actionPrograma;
    QAction *actionProjeto;
    QAction *actionPesquisar;
    QAction *actionArquivo;
    QAction *actionProjeto_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuNovo_2;
    QMenu *menuEditar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("\303\215cones/batatas-fritas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("\303\215cones/entrega-de-alimentos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon1);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionPrograma = new QAction(MainWindow);
        actionPrograma->setObjectName(QString::fromUtf8("actionPrograma"));
        actionProjeto = new QAction(MainWindow);
        actionProjeto->setObjectName(QString::fromUtf8("actionProjeto"));
        actionPesquisar = new QAction(MainWindow);
        actionPesquisar->setObjectName(QString::fromUtf8("actionPesquisar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("\303\215cones/restaurante.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPesquisar->setIcon(icon2);
        actionArquivo = new QAction(MainWindow);
        actionArquivo->setObjectName(QString::fromUtf8("actionArquivo"));
        actionProjeto_2 = new QAction(MainWindow);
        actionProjeto_2->setObjectName(QString::fromUtf8("actionProjeto_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuNovo_2 = new QMenu(menuArquivo);
        menuNovo_2->setObjectName(QString::fromUtf8("menuNovo_2"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArquivo->addAction(menuNovo_2->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionEdit);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuNovo_2->addAction(actionArquivo);
        menuNovo_2->addAction(actionProjeto_2);
        menuEditar->addAction(actionPesquisar);
        toolBar->addAction(actionSalvar);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionPesquisar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionPrograma->setText(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        actionProjeto->setText(QCoreApplication::translate("MainWindow", "Projeto", nullptr));
        actionPesquisar->setText(QCoreApplication::translate("MainWindow", "Pesquisar", nullptr));
        actionArquivo->setText(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        actionProjeto_2->setText(QCoreApplication::translate("MainWindow", "Projeto", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuNovo_2->setTitle(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        menuEditar->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
