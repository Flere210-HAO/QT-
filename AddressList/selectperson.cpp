#include "selectperson.h"
#include "ui_selectperson.h"

selectperson::selectperson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::selectperson)
{
    ui->setupUi(this);
    // setMinimumSize(485, 580);
}

selectperson::~selectperson()
{
    delete ui;
}

void selectperson::on_returnpushButton_clicked()
{
    emit display(0);
}

void selectperson::on_selectpushButton_clicked()
{
    if(ui->numberlineEdit->text()=="")
    {
        QMessageBox::about(NULL,"错误","手机号码不能为空");
        return;
    }
    QFile file("person.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"错误","数据文件打开失败");
        return;
    }
    QTextStream input(&file);
    //以file作为Qt文本流
    QVector<PersonInfo>allPersonInfo;
    //数据类型为PersonInfo的QVector容器
    while(!input.atEnd())
    {
        QString name,relation,mark;
        int number;
        input>>name>>number>>relation>>mark;
        allPersonInfo.push_back(PersonInfo(name,number,relation,mark));
        //调用之前建立的构造函数实例化一个PersonInfo对象并将其加入allPersonInfo
    }
    allPersonInfo.pop_back();
    //丢掉最后的无用数据
    file.close();
    //关闭文件
    int number=ui->numberlineEdit->text().toInt();
    bool flag = false;  //为检查立一个bool标记记录检查状况
    for(auto i:allPersonInfo)
    {
        if(i.getNumber()==number)
        {
            ui->shownamelabel->setText(i.getName());
            ui->showrelalabel->setText(i.getRelation());
            ui->showmarklabel->setText(i.getNickname());
            flag=true;
            break;
        }
    }
    if(!flag)
    {
        QMessageBox::about(NULL,"错误","number不存在");
    }
    ui->numberlineEdit->clear();

}





