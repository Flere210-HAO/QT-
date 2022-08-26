#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include<QStackedLayout>
#include"menu.h"
#include"addperson.h"
#include"changed.h"
#include"selectperson.h"
#include"showandsort.h"
//QStackedLayout继承自QLayout,提供了多页切换的布局，一次只能看到一个界面


namespace Ui {
class mainwidget;
}

class mainwidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainwidget(QWidget *parent = nullptr);
    ~mainwidget();
    Menu *menuwidget;
    AddPerson *addpersonwidget;
    selectperson *selectpersonwidget;
    Changed *changewidget;
    showandsort *showandsortwidget;
    QStackedLayout *stackedLayout;


private:
    Ui::mainwidget *ui;

};

#endif // MAINWIDGET_H
