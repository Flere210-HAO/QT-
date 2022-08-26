#include "mainwidget.h"
#include "ui_mainwidget.h"   //用来实现窗口的转换

mainwidget::mainwidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwidget)
{
    ui->setupUi(this);           //在此窗口创造各种子窗口的空间
    this->setMinimumSize(700,600);              //固定窗口大小
    this->setMaximumSize(700,600);
    this->setWindowTitle("通讯录管理系统");       //由于所有子窗口等于都是在主窗口中打开，所以它的大小和标题名字都是Mainwidget的
    menuwidget=new Menu;
    addpersonwidget=new AddPerson;
    changewidget=new Changed;
    selectpersonwidget=new selectperson;
    showandsortwidget=new showandsort;
    stackedLayout=new QStackedLayout;

    stackedLayout->addWidget(menuwidget);       //将创造的widget窗口添加到布局当中（基本用法）
    stackedLayout->addWidget(addpersonwidget);
    stackedLayout->addWidget(changewidget);
    stackedLayout->addWidget(selectpersonwidget);
    stackedLayout->addWidget(showandsortwidget);

    setLayout(stackedLayout);//可以重新父化此布局中的部件（也就是设置唯一布局）（实际上多个界面堆叠到了一个窗口内）

    connect(menuwidget, &Menu::display, stackedLayout, &QStackedLayout::setCurrentIndex);
    //setCurrentIndex此属性保存小部件可见的索引位置
    //如果当前没有小部件，则当前索引为-1
    connect(addpersonwidget,&AddPerson::display,stackedLayout,&QStackedLayout::setCurrentIndex);
    connect(changewidget,&Changed::display,stackedLayout,&QStackedLayout::setCurrentIndex);
    connect(selectpersonwidget,&selectperson::display,stackedLayout,&QStackedLayout::setCurrentIndex);
    connect(showandsortwidget,&showandsort::display,stackedLayout,&QStackedLayout::setCurrentIndex);

}

mainwidget::~mainwidget()
{
    delete ui;
}
