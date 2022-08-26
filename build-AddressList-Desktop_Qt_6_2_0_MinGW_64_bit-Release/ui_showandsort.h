/********************************************************************************
** Form generated from reading UI file 'showandsort.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWANDSORT_H
#define UI_SHOWANDSORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showandsort
{
public:
    QPushButton *returnpushButton;
    QRadioButton *nameradioButton;
    QRadioButton *numberradioButton;
    QPushButton *sortpushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *showandsort)
    {
        if (showandsort->objectName().isEmpty())
            showandsort->setObjectName(QString::fromUtf8("showandsort"));
        showandsort->resize(639, 520);
        returnpushButton = new QPushButton(showandsort);
        returnpushButton->setObjectName(QString::fromUtf8("returnpushButton"));
        returnpushButton->setGeometry(QRect(530, 480, 93, 28));
        nameradioButton = new QRadioButton(showandsort);
        nameradioButton->setObjectName(QString::fromUtf8("nameradioButton"));
        nameradioButton->setGeometry(QRect(50, 90, 115, 19));
        numberradioButton = new QRadioButton(showandsort);
        numberradioButton->setObjectName(QString::fromUtf8("numberradioButton"));
        numberradioButton->setGeometry(QRect(200, 90, 115, 19));
        sortpushButton = new QPushButton(showandsort);
        sortpushButton->setObjectName(QString::fromUtf8("sortpushButton"));
        sortpushButton->setGeometry(QRect(500, 80, 93, 28));
        tableWidget = new QTableWidget(showandsort);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 140, 571, 321));

        retranslateUi(showandsort);

        QMetaObject::connectSlotsByName(showandsort);
    } // setupUi

    void retranslateUi(QWidget *showandsort)
    {
        showandsort->setWindowTitle(QCoreApplication::translate("showandsort", "\345\261\225\347\244\272\357\274\210\346\216\222\345\272\217\357\274\211\347\225\214\351\235\242", nullptr));
        returnpushButton->setText(QCoreApplication::translate("showandsort", "\344\270\273\350\217\234\345\215\225", nullptr));
        nameradioButton->setText(QCoreApplication::translate("showandsort", "\345\247\223\345\220\215", nullptr));
        numberradioButton->setText(QCoreApplication::translate("showandsort", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        sortpushButton->setText(QCoreApplication::translate("showandsort", "\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showandsort: public Ui_showandsort {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWANDSORT_H
