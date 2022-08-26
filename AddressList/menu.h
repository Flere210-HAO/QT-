#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;

private slots:                      //为设置好的按钮设计信号
    void on_addButton_clicked();
    void on_selectButton_clicked();
    void on_exitButton_clicked();
    void on_changeButton_clicked();
    void on_showButton_clicked();

signals:                           //给stackedLayout切换页面的信号设计方法
    void display(int number);

};

#endif // MENU_H
