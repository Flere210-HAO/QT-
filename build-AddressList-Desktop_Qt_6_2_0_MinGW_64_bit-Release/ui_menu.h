/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *addButton;
    QPushButton *selectButton;
    QPushButton *changeButton;
    QPushButton *exitButton;
    QPushButton *showButton;
    QLabel *label;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(675, 559);
        addButton = new QPushButton(Menu);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(270, 190, 111, 28));
        selectButton = new QPushButton(Menu);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(270, 230, 111, 31));
        changeButton = new QPushButton(Menu);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(270, 270, 111, 28));
        exitButton = new QPushButton(Menu);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(270, 350, 111, 28));
        showButton = new QPushButton(Menu);
        showButton->setObjectName(QString::fromUtf8("showButton"));
        showButton->setGeometry(QRect(270, 310, 111, 28));
        label = new QLabel(Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 90, 271, 81));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "\351\200\232\350\256\257\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
        addButton->setText(QCoreApplication::translate("Menu", "\346\267\273\345\212\240\344\272\272\345\221\230", nullptr));
        selectButton->setText(QCoreApplication::translate("Menu", "\346\237\245\350\257\242", nullptr));
        changeButton->setText(QCoreApplication::translate("Menu", "\344\277\256\346\224\271", nullptr));
        exitButton->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272", nullptr));
        showButton->setText(QCoreApplication::translate("Menu", "\346\237\245\347\234\213\351\200\232\350\256\257\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#ff0000;\">\351\200\232\350\256\257\345\275\225\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
