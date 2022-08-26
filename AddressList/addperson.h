#ifndef ADDPERSON_H
#define ADDPERSON_H

#include <QWidget>
#include<QFile>//开始处理文件
#include<QMessageBox>  //QMessageBox中有很多类型的对话框和各种对话框的用法
#include<QDebug>       //QDebug用于在控制台输出调试信息

namespace Ui {
class AddPerson;
}

class AddPerson : public QWidget
{
    Q_OBJECT

public:
    explicit AddPerson(QWidget *parent = nullptr);
    ~AddPerson();

private:
    Ui::AddPerson *ui;
signals:
    void display(int number);
private slots:
    void on_returnpushButton_clicked();

    void on_addpushButton_clicked();
};

#endif // ADDPERSON_H
