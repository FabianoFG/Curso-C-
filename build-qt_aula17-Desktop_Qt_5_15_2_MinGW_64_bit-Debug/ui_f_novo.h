/********************************************************************************
** Form generated from reading UI file 'f_novo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_F_NOVO_H
#define UI_F_NOVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_F_Novo
{
public:
    QLabel *label;

    void setupUi(QDialog *F_Novo)
    {
        if (F_Novo->objectName().isEmpty())
            F_Novo->setObjectName(QString::fromUtf8("F_Novo"));
        F_Novo->resize(400, 300);
        label = new QLabel(F_Novo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 81, 16));

        retranslateUi(F_Novo);

        QMetaObject::connectSlotsByName(F_Novo);
    } // setupUi

    void retranslateUi(QDialog *F_Novo)
    {
        F_Novo->setWindowTitle(QCoreApplication::translate("F_Novo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("F_Novo", "Novo Formul\303\241rio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class F_Novo: public Ui_F_Novo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_F_NOVO_H
