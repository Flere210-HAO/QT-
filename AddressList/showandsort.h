#ifndef SHOWANDSORT_H
#define SHOWANDSORT_H

#include <QWidget>
#include<QButtonGroup>
#include<QVector>
#include<QFile>
#include<QDebug>
#include<QMessageBox>
#include"personinfo.h"

namespace Ui {
class showandsort;
}

class showandsort : public QWidget
{
    Q_OBJECT

public:
    explicit showandsort(QWidget *parent = nullptr);
    ~showandsort();

private:
    Ui::showandsort *ui;
    QButtonGroup *sortButtonGroup;

signals:
    void display(int number);

private slots:
    void on_returnpushButton_clicked();
    void on_sortpushButton_clicked();  //排序
};

#endif // SHOWANDSORT_H
