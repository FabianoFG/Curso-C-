/********************************************************************************
** Form generated from reading UI file 'janela02.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELA02_H
#define UI_JANELA02_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Janela02
{
public:
    QLabel *label;

    void setupUi(QDialog *Janela02)
    {
        if (Janela02->objectName().isEmpty())
            Janela02->setObjectName(QString::fromUtf8("Janela02"));
        Janela02->resize(400, 300);
        label = new QLabel(Janela02);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 47, 13));

        retranslateUi(Janela02);

        QMetaObject::connectSlotsByName(Janela02);
    } // setupUi

    void retranslateUi(QDialog *Janela02)
    {
        Janela02->setWindowTitle(QCoreApplication::translate("Janela02", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Janela02", "Janela02", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Janela02: public Ui_Janela02 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELA02_H
