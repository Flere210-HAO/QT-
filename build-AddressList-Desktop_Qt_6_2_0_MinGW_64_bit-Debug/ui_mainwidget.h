/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwidget
{
public:

    void setupUi(QWidget *mainwidget)
    {
        if (mainwidget->objectName().isEmpty())
            mainwidget->setObjectName(QString::fromUtf8("mainwidget"));
        mainwidget->resize(400, 300);

        retranslateUi(mainwidget);

        QMetaObject::connectSlotsByName(mainwidget);
    } // setupUi

    void retranslateUi(QWidget *mainwidget)
    {
        (void)mainwidget;
    } // retranslateUi

};

namespace Ui {
    class mainwidget: public Ui_mainwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
