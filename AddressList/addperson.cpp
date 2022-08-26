#include "addperson.h"
#include "ui_addperson.h"  //添加学生窗口

AddPerson::AddPerson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddPerson)
{      //现在可以使用的只有退出按钮，跳转按钮还需要在mainwidget.cpp中用connect函数连接。
    ui->setupUi(this);
    // setMinimumSize(510, 600);
}

AddPerson::~AddPerson()
{
    delete ui;
}

void AddPerson::on_returnpushButton_clicked() //主菜单 按钮点击
{
    emit display(0);
}



void AddPerson::on_addpushButton_clicked()//添加 按钮点击
{
    QString name=ui->namelineEdit->text();
    //将用户输入的名字从nameLineEdit取出
    int number =ui->numberlineEdit->text().toInt();
    //将用户输入的电话号码从numberlineEdit中取出并转为整形
    QString relation=ui->relalineEdit->text();
    //将用户输入的关系从relalineEdit取出
    QString mark=ui->marklineEdit->text();
    //将用户输入的备注从marklineEdit中取出
    if(ui->namelineEdit->text()==""||ui->numberlineEdit->text()==""||ui->relalineEdit->text()==""||ui->marklineEdit->text()=="")
    {
        QMessageBox::about(NULL,"错误","存在空项！");
        //原型：static void about(QWidget *parent, const QString &title, const QString &text);
        //QMessageBox::about(NULL,"About","About this application");这三个参数分别队友父窗口对象，对话框标题和对话框内容
        return;
    }
    QFile file("person.txt");//实例化一个文件person.txt来保存信息
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    //QIODevice类是Qt中所有I/O设备的基本接口类。
    //QIODevice为了支持读写块数据，提供了一个共同的实现和一个通用的接口，这些块数据如： QFile, QBuffer 和 QTcpSocket.
    //open()可以用来打开文件这里QIODevice::WriteOnly代表将文件以只写的方式打开
    //QIODevice::Text代表我们打开的是文本文件，QIODevice::Text会对end-of-line结束符进行转译
    //QIODevice::Append以追加的方式打开，新增加的内容将被追加到文件末尾
    if(!file.isOpen())//如果数据文件没有打开，弹开对话框提示
    {
        QMessageBox::about(NULL,"错误","文件打开失败");
        return;
    }
    QTextStream out(&file);
    //QTextStream可以进行一些基本的文本读写
    out<<name<<" "<<number<<" "<<relation<<" "<<mark;
    out<<Qt::endl;
    //写入文件
    file.close();
    QMessageBox::about(NULL,"提示","插入成功");
    ui->namelineEdit->clear();
    ui->numberlineEdit->clear();
    ui->relalineEdit->clear();
    ui->marklineEdit->clear();
    //将用户输入的数据清空
}

