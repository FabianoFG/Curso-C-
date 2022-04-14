#ifndef JANELA02_H
#define JANELA02_H

#include <QDialog>

namespace Ui {
class Janela02;
}

class Janela02 : public QDialog
{
    Q_OBJECT

public:
    explicit Janela02(QWidget *parent = nullptr);
    ~Janela02();

private:
    Ui::Janela02 *ui;
};

#endif // JANELA02_H
