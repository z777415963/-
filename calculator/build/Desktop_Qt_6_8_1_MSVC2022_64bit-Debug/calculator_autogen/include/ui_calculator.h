/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Num3;
    QPushButton *Add;
    QPushButton *Num4;
    QPushButton *Num5;
    QPushButton *Num6;
    QPushButton *Num7;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *Num0;
    QPushButton *Dot;
    QPushButton *Equ;
    QPushButton *Sub;
    QPushButton *Mul;
    QPushButton *Div;
    QPushButton *Back;
    QPushButton *Delete;
    QTextEdit *textEdit;

    void setupUi(QWidget *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(480, 565);
        Num1 = new QPushButton(calculator);
        Num1->setObjectName("Num1");
        Num1->setGeometry(QRect(1, 120, 120, 90));
        QFont font;
        font.setPointSize(30);
        Num1->setFont(font);
        Num2 = new QPushButton(calculator);
        Num2->setObjectName("Num2");
        Num2->setGeometry(QRect(123, 120, 120, 90));
        Num2->setFont(font);
        Num3 = new QPushButton(calculator);
        Num3->setObjectName("Num3");
        Num3->setGeometry(QRect(244, 120, 120, 90));
        Num3->setFont(font);
        Add = new QPushButton(calculator);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(366, 120, 120, 90));
        Add->setFont(font);
        Num4 = new QPushButton(calculator);
        Num4->setObjectName("Num4");
        Num4->setGeometry(QRect(1, 209, 120, 90));
        Num4->setFont(font);
        Num5 = new QPushButton(calculator);
        Num5->setObjectName("Num5");
        Num5->setGeometry(QRect(123, 209, 120, 90));
        Num5->setFont(font);
        Num6 = new QPushButton(calculator);
        Num6->setObjectName("Num6");
        Num6->setGeometry(QRect(244, 209, 120, 90));
        Num6->setFont(font);
        Num7 = new QPushButton(calculator);
        Num7->setObjectName("Num7");
        Num7->setGeometry(QRect(1, 298, 120, 90));
        Num7->setFont(font);
        Num8 = new QPushButton(calculator);
        Num8->setObjectName("Num8");
        Num8->setGeometry(QRect(123, 298, 120, 90));
        Num8->setFont(font);
        Num9 = new QPushButton(calculator);
        Num9->setObjectName("Num9");
        Num9->setGeometry(QRect(244, 298, 120, 90));
        Num9->setFont(font);
        Num0 = new QPushButton(calculator);
        Num0->setObjectName("Num0");
        Num0->setGeometry(QRect(123, 387, 120, 90));
        Num0->setFont(font);
        Dot = new QPushButton(calculator);
        Dot->setObjectName("Dot");
        Dot->setGeometry(QRect(1, 387, 120, 90));
        Dot->setFont(font);
        Equ = new QPushButton(calculator);
        Equ->setObjectName("Equ");
        Equ->setGeometry(QRect(244, 387, 120, 90));
        Equ->setFont(font);
        Sub = new QPushButton(calculator);
        Sub->setObjectName("Sub");
        Sub->setGeometry(QRect(366, 209, 120, 90));
        Sub->setFont(font);
        Mul = new QPushButton(calculator);
        Mul->setObjectName("Mul");
        Mul->setGeometry(QRect(366, 298, 120, 90));
        Mul->setFont(font);
        Div = new QPushButton(calculator);
        Div->setObjectName("Div");
        Div->setGeometry(QRect(366, 387, 120, 90));
        Div->setFont(font);
        Back = new QPushButton(calculator);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(1, 476, 240, 90));
        Back->setFont(font);
        Delete = new QPushButton(calculator);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(244, 476, 240, 90));
        Delete->setFont(font);
        textEdit = new QTextEdit(calculator);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 491, 121));

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QWidget *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        Num1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        Num2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        Num3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        Add->setText(QCoreApplication::translate("calculator", "+", nullptr));
        Num4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        Num5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        Num6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        Num7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        Num8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        Num9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        Num0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        Dot->setText(QCoreApplication::translate("calculator", ".", nullptr));
        Equ->setText(QCoreApplication::translate("calculator", "=", nullptr));
        Sub->setText(QCoreApplication::translate("calculator", "-", nullptr));
        Mul->setText(QCoreApplication::translate("calculator", "*", nullptr));
        Div->setText(QCoreApplication::translate("calculator", "/", nullptr));
        Back->setText(QCoreApplication::translate("calculator", "<-", nullptr));
        Delete->setText(QCoreApplication::translate("calculator", "CE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
