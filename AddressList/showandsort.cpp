#include "showandsort.h"
#include "ui_showandsort.h"
#include<algorithm>
#include<iostream>


showandsort::showandsort(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showandsort)
{
    ui->setupUi(this);
    //setMinimumSize(640, 520);
    sortButtonGroup=new QButtonGroup;
    //实例化sortButtonGroup
    sortButtonGroup->addButton(ui->nameradioButton,0);
    //将代表名字的单选框加入sortButtonGroup并将其id设为0
    //不建议使用默认id，默认id是由-2开始递减
    sortButtonGroup->addButton(ui->numberradioButton,1);
    //将代表数字的单选框加入sortButtonGroup并将其id设为1
    ui->nameradioButton->setChecked(true);
    //名字的选项默认选中
    ui->tableWidget->setColumnCount(4);
    QStringList headerLabel;
    //用来记录表格表头数据
    headerLabel<<tr("姓名")<<tr("手机号码")<<tr("关系")<<tr("备注");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabel);
    // void setHorizontalHeaderLabels(const QStringList &labels);设置水平表头标签
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //设置根据总宽度调整列宽
    ui->tableWidget->setRowCount(1);
    //初始行数设为一行
}

showandsort::~showandsort()
{
    delete ui;
}


void showandsort::on_returnpushButton_clicked()//以主菜单为信号0位置来返回主界面
{
    emit display(0);
}
bool getPersonInfo(QVector<PersonInfo> &allPersonInfo)
{
    QFile file("person.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    //以只读方式打开文本文件person.txt
    QTextStream input(&file);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"错误","数据文件打开失败");
        return false;
    }
    while(!input.atEnd())
    {
        QString name,relation,mark;
        int number;
        input>>name>>number>>relation>>mark;
        allPersonInfo.push_back(PersonInfo(name,number,relation,mark));
        //调用之前申明的构造函数实例化一个PersonInfo对象并将其加入allPersonInfo
    }
    allPersonInfo.pop_back();
    //扔掉最后的无用数据
    file.close();
    //关闭文件
    return true;
}

bool cmp_name(PersonInfo a,PersonInfo b)
{
    return a.getName()<b.getName();
}

bool cmp_number(PersonInfo a,PersonInfo b)
{
    return a.getNumber()<b.getNumber();
}

void showandsort::on_sortpushButton_clicked()
{
    ui->tableWidget->clearContents();
    //清空除表头外的所有数据
    //若想清除表头可使用clear（）
    int sortTag=sortButtonGroup->checkedId();
    //取得当前选中的单选框的id
    QVector<PersonInfo>allPersonInfo;
    //数据类型为PersonInfo的QVector容器
    if(!getPersonInfo(allPersonInfo))//从文件读取到allPersonInfo
        return;
    if(allPersonInfo.empty())
    {
        QMessageBox::about(NULL,"错误","没有学生信息");
        return;
    }
    switch(sortTag)
    {
    case 0:  //sortTag==0根据名字进行排序
        std::sort(allPersonInfo.begin(),allPersonInfo.end(),cmp_name);
        break;
    case 1:  //sortTag==1根据手机号码进行排序
        std::sort(allPersonInfo.begin(),allPersonInfo.end(),cmp_number);
        break;

    }
    ui->tableWidget->setRowCount(allPersonInfo.size());
    //将表格的行数设为与学生数量相同
    //否则setItem添加单元格不会生效
    for(int i = 0; i < allPersonInfo.size(); i++){
           ui->tableWidget->setItem(i, 0, new QTableWidgetItem(allPersonInfo[i].getName()));
           ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(allPersonInfo[i].getNumber())));
           ui->tableWidget->setItem(i, 2, new QTableWidgetItem(allPersonInfo[i].getRelation()));
           ui->tableWidget->setItem(i, 3, new QTableWidgetItem(allPersonInfo[i].getNickname()));
           //设置各单元格的数据，非QString类型的数据需要转换为QString
       }
}






