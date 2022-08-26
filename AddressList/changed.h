#ifndef CHANGED_H
#define CHANGED_H

#include <QWidget>

namespace Ui {
class Changed;
}

class Changed : public QWidget
{
    Q_OBJECT

public:
    explicit Changed(QWidget *parent = nullptr);
    ~Changed();

private:
    Ui::Changed *ui;

signals:
    void display(int number);
private slots:
    void on_returnpushButton_clicked();
    void on_delepushButton_clicked();
    void on_changedpushButton_clicked();

};

#endif // CHANGED_H
