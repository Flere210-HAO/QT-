#ifndef SELECTPERSON_H
#define SELECTPERSON_H

#include <QWidget>
#include<QDebug>
#include<QFile>
#include<QVector>
#include<QMessageBox>
#include<QString>
#include"personinfo.h"

namespace Ui {
class selectperson;
}

class selectperson : public QWidget
{
    Q_OBJECT

public:
    explicit selectperson(QWidget *parent = nullptr);
    ~selectperson();

private:
    Ui::selectperson *ui;

signals:
    void display(int number);
private slots:
    void on_returnpushButton_clicked();
    void on_selectpushButton_clicked();

};

#endif // SELECTPERSON_H
