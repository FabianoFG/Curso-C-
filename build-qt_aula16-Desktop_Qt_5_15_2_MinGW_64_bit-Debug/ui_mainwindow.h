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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rb_mesa;
    QRadioButton *rb_cadeira;
    QRadioButton *rb_escrivaninha;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rb_aviao;
    QRadioButton *rb_carro;
    QRadioButton *rb_navio;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_vermelho;
    QRadioButton *rb_verde;
    QRadioButton *rb_azul;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(336, 248);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 20, 120, 80));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 85, 65));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rb_mesa = new QRadioButton(widget);
        rb_mesa->setObjectName(QString::fromUtf8("rb_mesa"));

        verticalLayout_2->addWidget(rb_mesa);

        rb_cadeira = new QRadioButton(widget);
        rb_cadeira->setObjectName(QString::fromUtf8("rb_cadeira"));

        verticalLayout_2->addWidget(rb_cadeira);

        rb_escrivaninha = new QRadioButton(widget);
        rb_escrivaninha->setObjectName(QString::fromUtf8("rb_escrivaninha"));

        verticalLayout_2->addWidget(rb_escrivaninha);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 150, 75, 23));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 120, 84, 65));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        rb_aviao = new QRadioButton(widget1);
        rb_aviao->setObjectName(QString::fromUtf8("rb_aviao"));

        verticalLayout_3->addWidget(rb_aviao);

        rb_carro = new QRadioButton(widget1);
        rb_carro->setObjectName(QString::fromUtf8("rb_carro"));

        verticalLayout_3->addWidget(rb_carro);

        rb_navio = new QRadioButton(widget1);
        rb_navio->setObjectName(QString::fromUtf8("rb_navio"));

        verticalLayout_3->addWidget(rb_navio);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 30, 84, 65));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rb_vermelho = new QRadioButton(widget2);
        rb_vermelho->setObjectName(QString::fromUtf8("rb_vermelho"));

        verticalLayout->addWidget(rb_vermelho);

        rb_verde = new QRadioButton(widget2);
        rb_verde->setObjectName(QString::fromUtf8("rb_verde"));

        verticalLayout->addWidget(rb_verde);

        rb_azul = new QRadioButton(widget2);
        rb_azul->setObjectName(QString::fromUtf8("rb_azul"));

        verticalLayout->addWidget(rb_azul);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 336, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "M\303\263veis", nullptr));
        rb_mesa->setText(QCoreApplication::translate("MainWindow", "Mesa", nullptr));
        rb_cadeira->setText(QCoreApplication::translate("MainWindow", "Cadeira", nullptr));
        rb_escrivaninha->setText(QCoreApplication::translate("MainWindow", "Escrivaninha", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Verificar", nullptr));
        rb_aviao->setText(QCoreApplication::translate("MainWindow", "Avi\303\243o", nullptr));
        rb_carro->setText(QCoreApplication::translate("MainWindow", "Carro", nullptr));
        rb_navio->setText(QCoreApplication::translate("MainWindow", "Navio", nullptr));
        rb_vermelho->setText(QCoreApplication::translate("MainWindow", "vermelho", nullptr));
        rb_verde->setText(QCoreApplication::translate("MainWindow", "Verde ", nullptr));
        rb_azul->setText(QCoreApplication::translate("MainWindow", "Azul", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
