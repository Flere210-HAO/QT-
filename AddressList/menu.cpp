#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_addButton_clicked()   //给按钮的点击给出函数定义
{
    emit display(1);                //emit是用来发射信号用的，发出信号数字1，下面类推
}

void Menu::on_changeButton_clicked()
{
    emit display(2);
}

void Menu::on_selectButton_clicked()
{
    emit display(3);
}



void Menu::on_showButton_clicked()
{
    emit display(4);
}

void Menu::on_exitButton_clicked()
{
    QApplication::exit();          //退出信号
}

