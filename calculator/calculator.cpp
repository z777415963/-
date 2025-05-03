#include "calculator.h"
#include "./ui_calculator.h"
#include<QMessageBox>

calculator::calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    //1.符号关联
    //数字按钮
    connect(ui->Num0,&QPushButton::clicked,[this](){On_clicked(Num,"0");});
    connect(ui->Num1,&QPushButton::clicked,[this](){On_clicked(Num,"1");});
    connect(ui->Num2,&QPushButton::clicked,[this](){On_clicked(Num,"2");});
    connect(ui->Num3,&QPushButton::clicked,[this](){On_clicked(Num,"3");});
    connect(ui->Num4,&QPushButton::clicked,[this](){On_clicked(Num,"4");});
    connect(ui->Num5,&QPushButton::clicked,[this](){On_clicked(Num,"5");});
    connect(ui->Num6,&QPushButton::clicked,[this](){On_clicked(Num,"6");});
    connect(ui->Num7,&QPushButton::clicked,[this](){On_clicked(Num,"7");});
    connect(ui->Num8,&QPushButton::clicked,[this](){On_clicked(Num,"8");});
    connect(ui->Num9,&QPushButton::clicked,[this](){On_clicked(Num,"9");});
    //运算符号
    connect(ui->Add,&QPushButton::clicked,[this](){On_clicked(Op,"+");});
    connect(ui->Sub,&QPushButton::clicked,[this](){On_clicked(Op,"-");});
    connect(ui->Mul,&QPushButton::clicked,[this](){On_clicked(Op,"*");});
    connect(ui->Div,&QPushButton::clicked,[this](){On_clicked(Op,"/");});
    //特殊符号
    connect(ui->Back,&QPushButton::clicked,[this](){On_clicked(Back,"Back");});
    connect(ui->Delete,&QPushButton::clicked,[this](){On_clicked(Delete,"Delete");});
    connect(ui->Equ,&QPushButton::clicked,[this](){On_clicked(Equ,"=");});
    connect(ui->Dot,&QPushButton::clicked,[this](){On_clicked(Dot,".");});

}

calculator::~calculator()
{
    delete ui;
}



void calculator::On_clicked(Button_Type _type,QString _btn){
    ui->textEdit->setFont(QFont("Microsoft YaHei UI",30));
    bool judge = true;
    double result = 0.0;
    switch(_type){
    case Num:{
        if(op.isEmpty()){
            //输入的是num1
            num1 += _btn;
        }
        else{
            num2 += _btn;
        }
        break;
    }

    case Op:{
        op = _btn;
        break;
    }
    case Dot:{
        if(!num1.isEmpty()&&!num1.contains(".")){
            num1 += _btn;
        }
        if(!num2.isEmpty()&&!num2.contains(".")){
            num2 += _btn;
        }
        break;
    }
    case Delete:{
        num1.clear();
        num2.clear();
        op.clear();
        break;
    }
    case Equ:{
        if(num1.isEmpty()||num2.isEmpty()||op.isEmpty()){
            break;
        }
        double Num1 = num1.toDouble();
        double Num2 = num2.toDouble();
        if(op == "+"){
            result = Num1 + Num2;
        }
        else if(op == "-"){
            result = Num1 - Num2;
        }
        else if(op == "*"){
            result = Num1 * Num2;
        }
        else if(op == "/"){
            if(Num2 == 0.0){
                QMessageBox::warning(this,"运算符错误","除数不能为0！");
            }
            else{
                result = Num1 / Num2;
            }
        }
        judge = false;
        num1.clear();
        num2.clear();
        op.clear();
        break;
    }

    case Back:{
        if(!num1.isEmpty()&&num2.isEmpty()&&op.isEmpty()){
            num1.chop(1);
        }
        else if(!num1.isEmpty()&&num2.isEmpty()&&!op.isEmpty()){
            op.chop(1);
        }
        else if(!num1.isEmpty()&&!num2.isEmpty()&&!op.isEmpty()){
            num2.chop(1);
        }
        break;
    }


    }
    if(judge){
        ui->textEdit->setText(num1 + op + num2);
    }
    else{
        ui->textEdit->setText(QString::number(result));
    }
}
