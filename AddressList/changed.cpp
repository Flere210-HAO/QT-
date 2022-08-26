#include "changed.h"
#include "ui_changed.h"   //修改信息窗口（Modify
#include"personinfo.h"
#include<QMessageBox>
#include<QFile>

Changed::Changed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Changed)
{
    ui->setupUi(this);
    // setMinimumSize(460, 500);
}

Changed::~Changed()
{
    delete ui;
}

void Changed::on_returnpushButton_clicked()//返回主菜单的按钮
{
    emit display(0);
}

void Changed::on_delepushButton_clicked()//删除数据的按钮点击函数
{
    //因为需要搜查文件内数据，所以需要一个容器保存
    QVector<PersonInfo> allPersonInfo; //数据类型为PersonInfo的QVector容器
    if(ui->numberlineEdit->text()=="")
    {
        QMessageBox::about(NULL,"错误","手机号码不得为空！");
        return;
    }
    QFile file("person.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"错误","文件无法打开！");
        return;
    }
    QTextStream input(&file);
    //以file作为Qt文件流
    while(!input.atEnd())
    {
        QString name,relation,mark;
        int number;
        input>>name>>number>>relation>>mark;
        //读入名字，手机号码，关系，备注
        allPersonInfo.push_back(PersonInfo(name,number,relation,mark));
        //调用之前建立的构造函数从而函数实例化一个对象PersonInfo并将其加入allPersonInfo
    }
    allPersonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出？？
    file.close();
    int number=ui->numberlineEdit->text().toInt();
    //获取用户输入的手机号码
    bool flag=false;

    for(QVector<PersonInfo>::iterator it=allPersonInfo.begin();it !=allPersonInfo.end();it++)
    {
        if(it->getNumber()==number)
        {
            allPersonInfo.erase(it);
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        QMessageBox::about(NULL,"提示","删除成功");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //QIODevice::Truncate在写入时会从文件开始处写入，覆盖原有内容
        //以只写覆盖的方式打开文本文件
        if(!file.isOpen())
        {
            QMessageBox::about(NULL,"错误","数据文件无法打开");
            return;

        }
        QTextStream out(&file);
        for(auto i: allPersonInfo)//c++11的新特性,i用来遍历allPersonInfo中所有元素
        {
            out<<i.getName()<<" "<<i.getNumber()<<" "<<i.getRelation()<<" "<<i.getNickname();
            out<<Qt::endl;//Qt 6.0版本的改动，无法直接使用endl(这里查了好久。。。)
        }
        file.close();
    }
    else
    {
        //如果未进行修改，弹出不存在对话框
        QMessageBox::about(NULL,"错误","手机号码不存在！");
    }
    //关闭文件
    ui->numberlineEdit->clear();
    //清空所有输入框
}



void Changed::on_changedpushButton_clicked()
{
    if(ui->namelineEdit->text() == "" || ui->numberlineEdit->text() == "" || ui->relalineEdit->text() == "" || ui->marklineEdit->text() == "" )
    {
           QMessageBox::about(NULL, "反馈", "存在空项");
           return;
    }
    QVector<PersonInfo> allPersonInfo;    //数据类型为StudentInfo的QVector容器
    QFile file("person.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读 的方式打开文本文件
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "数据文件打开失败");
        return;
    }
    //QIODevice::Truncate在写入时会从文件开始处写入，覆盖原有内容
    QTextStream input(&file);
    //以file建立一个QT的文本流
    while(!input.atEnd())
    {
        QString name,relation,mark;
        int number;
        input >> name >> number>>relation>>mark;
        //读入名字,手机号，关系，备注
        allPersonInfo.push_back(PersonInfo(name,number,relation,mark));
        //调用之前建立的构造函数实例化一个StudentInfo对象并将其加入allStudentInfo
    }
    allPersonInfo.pop_back();  //文件最后会多读一个无用数据，将其拿出
    file.close();
    int number = ui->numberlineEdit->text().toInt();
    QString name = ui->namelineEdit->text();
    QString relation = ui->relalineEdit->text();
    QString mark = ui->marklineEdit->text();
    bool flag = false;
    for(QVector<PersonInfo>::iterator it = allPersonInfo.begin(); it != allPersonInfo.end(); it++)
    {
        if(it->getNumber() ==number )
        {
            it->setName(name);
            it->setRelation(relation);
            it->setNickname(mark);
            flag = true;
        }
    }
    if(flag){   //如果进行过修改，弹出对话框并更新文件
        QMessageBox::about(NULL, "反馈", "修改成功");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        //以只写覆盖的方式打开文本文件
        if(!file.isOpen()){ //如果数据文件没有打开，弹出对话框提示用户
            QMessageBox::about(NULL, "反馈", "数据文件打开失败");
            return;
        }
        QTextStream out(&file);
        for(auto i : allPersonInfo){
            out << i.getName() << " " << i.getNumber() << " " << i.getRelation() << " " << i.getNickname()  << Qt::endl;
        }
        file.close();
    }else{
        //如果没有进行修改，弹出不存在对话框
         QMessageBox::about(NULL, "反馈", "id不存在！");
    }
    //关闭文件
    ui->numberlineEdit->clear();
    ui->namelineEdit->clear();
    ui->relalineEdit->clear();
    ui->marklineEdit->clear();
    //清空所有输入框
}

