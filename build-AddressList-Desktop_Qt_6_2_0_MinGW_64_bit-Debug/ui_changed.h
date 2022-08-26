/********************************************************************************
** Form generated from reading UI file 'changed.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGED_H
#define UI_CHANGED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Changed
{
public:
    QPushButton *returnpushButton;
    QLabel *namelabel;
    QLabel *relalabel;
    QLabel *marklabel;
    QLineEdit *namelineEdit;
    QLineEdit *relalineEdit;
    QLineEdit *marklineEdit;
    QLabel *numberlabel;
    QLineEdit *numberlineEdit;
    QPushButton *delepushButton;
    QPushButton *changedpushButton;

    void setupUi(QWidget *Changed)
    {
        if (Changed->objectName().isEmpty())
            Changed->setObjectName(QString::fromUtf8("Changed"));
        Changed->resize(459, 495);
        returnpushButton = new QPushButton(Changed);
        returnpushButton->setObjectName(QString::fromUtf8("returnpushButton"));
        returnpushButton->setGeometry(QRect(350, 450, 93, 28));
        namelabel = new QLabel(Changed);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(70, 90, 72, 15));
        relalabel = new QLabel(Changed);
        relalabel->setObjectName(QString::fromUtf8("relalabel"));
        relalabel->setGeometry(QRect(70, 140, 72, 15));
        marklabel = new QLabel(Changed);
        marklabel->setObjectName(QString::fromUtf8("marklabel"));
        marklabel->setGeometry(QRect(70, 200, 72, 15));
        namelineEdit = new QLineEdit(Changed);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(160, 90, 113, 21));
        relalineEdit = new QLineEdit(Changed);
        relalineEdit->setObjectName(QString::fromUtf8("relalineEdit"));
        relalineEdit->setGeometry(QRect(160, 140, 113, 21));
        marklineEdit = new QLineEdit(Changed);
        marklineEdit->setObjectName(QString::fromUtf8("marklineEdit"));
        marklineEdit->setGeometry(QRect(160, 200, 113, 21));
        numberlabel = new QLabel(Changed);
        numberlabel->setObjectName(QString::fromUtf8("numberlabel"));
        numberlabel->setGeometry(QRect(140, 370, 71, 21));
        numberlineEdit = new QLineEdit(Changed);
        numberlineEdit->setObjectName(QString::fromUtf8("numberlineEdit"));
        numberlineEdit->setGeometry(QRect(240, 370, 113, 21));
        delepushButton = new QPushButton(Changed);
        delepushButton->setObjectName(QString::fromUtf8("delepushButton"));
        delepushButton->setGeometry(QRect(50, 450, 93, 28));
        changedpushButton = new QPushButton(Changed);
        changedpushButton->setObjectName(QString::fromUtf8("changedpushButton"));
        changedpushButton->setGeometry(QRect(190, 450, 93, 28));

        retranslateUi(Changed);

        QMetaObject::connectSlotsByName(Changed);
    } // setupUi

    void retranslateUi(QWidget *Changed)
    {
        Changed->setWindowTitle(QCoreApplication::translate("Changed", "\344\277\256\346\224\271\347\225\214\351\235\242", nullptr));
        returnpushButton->setText(QCoreApplication::translate("Changed", "\344\270\273\350\217\234\345\215\225", nullptr));
        namelabel->setText(QCoreApplication::translate("Changed", "\345\247\223\345\220\215", nullptr));
        relalabel->setText(QCoreApplication::translate("Changed", "\345\205\263\347\263\273", nullptr));
        marklabel->setText(QCoreApplication::translate("Changed", "\345\244\207\346\263\250", nullptr));
        numberlabel->setText(QCoreApplication::translate("Changed", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        delepushButton->setText(QCoreApplication::translate("Changed", "\345\210\240\351\231\244", nullptr));
        changedpushButton->setText(QCoreApplication::translate("Changed", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Changed: public Ui_Changed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGED_H
