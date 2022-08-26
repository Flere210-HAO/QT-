/********************************************************************************
** Form generated from reading UI file 'addperson.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPERSON_H
#define UI_ADDPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPerson
{
public:
    QPushButton *returnpushButton;
    QLabel *namelabel;
    QLabel *numberlabel;
    QLabel *relalabel;
    QLabel *marklabel;
    QLineEdit *namelineEdit;
    QLineEdit *numberlineEdit;
    QLineEdit *relalineEdit;
    QLineEdit *marklineEdit;
    QPushButton *addpushButton;

    void setupUi(QWidget *AddPerson)
    {
        if (AddPerson->objectName().isEmpty())
            AddPerson->setObjectName(QString::fromUtf8("AddPerson"));
        AddPerson->resize(509, 535);
        returnpushButton = new QPushButton(AddPerson);
        returnpushButton->setObjectName(QString::fromUtf8("returnpushButton"));
        returnpushButton->setGeometry(QRect(390, 490, 93, 28));
        namelabel = new QLabel(AddPerson);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(70, 130, 72, 15));
        numberlabel = new QLabel(AddPerson);
        numberlabel->setObjectName(QString::fromUtf8("numberlabel"));
        numberlabel->setGeometry(QRect(70, 180, 72, 15));
        relalabel = new QLabel(AddPerson);
        relalabel->setObjectName(QString::fromUtf8("relalabel"));
        relalabel->setGeometry(QRect(70, 230, 72, 15));
        marklabel = new QLabel(AddPerson);
        marklabel->setObjectName(QString::fromUtf8("marklabel"));
        marklabel->setGeometry(QRect(70, 280, 72, 15));
        namelineEdit = new QLineEdit(AddPerson);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(180, 130, 113, 21));
        numberlineEdit = new QLineEdit(AddPerson);
        numberlineEdit->setObjectName(QString::fromUtf8("numberlineEdit"));
        numberlineEdit->setGeometry(QRect(180, 180, 113, 21));
        relalineEdit = new QLineEdit(AddPerson);
        relalineEdit->setObjectName(QString::fromUtf8("relalineEdit"));
        relalineEdit->setGeometry(QRect(180, 230, 113, 21));
        marklineEdit = new QLineEdit(AddPerson);
        marklineEdit->setObjectName(QString::fromUtf8("marklineEdit"));
        marklineEdit->setGeometry(QRect(180, 280, 113, 21));
        addpushButton = new QPushButton(AddPerson);
        addpushButton->setObjectName(QString::fromUtf8("addpushButton"));
        addpushButton->setGeometry(QRect(130, 340, 93, 28));

        retranslateUi(AddPerson);

        QMetaObject::connectSlotsByName(AddPerson);
    } // setupUi

    void retranslateUi(QWidget *AddPerson)
    {
        AddPerson->setWindowTitle(QCoreApplication::translate("AddPerson", "\346\267\273\345\212\240\347\225\214\351\235\242", nullptr));
        returnpushButton->setText(QCoreApplication::translate("AddPerson", "\344\270\273\350\217\234\345\215\225", nullptr));
        namelabel->setText(QCoreApplication::translate("AddPerson", "\345\247\223\345\220\215", nullptr));
        numberlabel->setText(QCoreApplication::translate("AddPerson", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        relalabel->setText(QCoreApplication::translate("AddPerson", "\345\205\263\347\263\273", nullptr));
        marklabel->setText(QCoreApplication::translate("AddPerson", "\345\244\207\346\263\250", nullptr));
        addpushButton->setText(QCoreApplication::translate("AddPerson", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPerson: public Ui_AddPerson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPERSON_H
