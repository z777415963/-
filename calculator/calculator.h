#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

QT_BEGIN_NAMESPACE
enum Button_Type{
    Num,
    Op,
    Delete,
    Back,
    Dot,
    Equ
};

namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QWidget
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private:
    Ui::calculator *ui;

    QString num1;
    QString num2;
    QString op;

public slots:
    void On_clicked(Button_Type _type,QString _btn);

};
#endif // CALCULATOR_H
