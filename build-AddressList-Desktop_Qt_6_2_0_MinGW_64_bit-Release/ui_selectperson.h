/********************************************************************************
** Form generated from reading UI file 'selectperson.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPERSON_H
#define UI_SELECTPERSON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectperson
{
public:
    QPushButton *returnpushButton;
    QLabel *numberlabel;
    QLineEdit *numberlineEdit;
    QLabel *namelabel;
    QLabel *ralalabel;
    QLabel *marklabel;
    QLabel *shownamelabel;
    QLabel *showrelalabel;
    QLabel *showmarklabel;
    QPushButton *selectpushButton;

    void setupUi(QWidget *selectperson)
    {
        if (selectperson->objectName().isEmpty())
            selectperson->setObjectName(QString::fromUtf8("selectperson"));
        selectperson->resize(485, 529);
        returnpushButton = new QPushButton(selectperson);
        returnpushButton->setObjectName(QString::fromUtf8("returnpushButton"));
        returnpushButton->setGeometry(QRect(370, 480, 93, 28));
        numberlabel = new QLabel(selectperson);
        numberlabel->setObjectName(QString::fromUtf8("numberlabel"));
        numberlabel->setGeometry(QRect(60, 70, 71, 21));
        numberlineEdit = new QLineEdit(selectperson);
        numberlineEdit->setObjectName(QString::fromUtf8("numberlineEdit"));
        numberlineEdit->setGeometry(QRect(160, 70, 113, 21));
        namelabel = new QLabel(selectperson);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(60, 170, 71, 21));
        ralalabel = new QLabel(selectperson);
        ralalabel->setObjectName(QString::fromUtf8("ralalabel"));
        ralalabel->setGeometry(QRect(60, 230, 71, 21));
        marklabel = new QLabel(selectperson);
        marklabel->setObjectName(QString::fromUtf8("marklabel"));
        marklabel->setGeometry(QRect(60, 290, 71, 21));
        shownamelabel = new QLabel(selectperson);
        shownamelabel->setObjectName(QString::fromUtf8("shownamelabel"));
        shownamelabel->setGeometry(QRect(160, 170, 111, 16));
        showrelalabel = new QLabel(selectperson);
        showrelalabel->setObjectName(QString::fromUtf8("showrelalabel"));
        showrelalabel->setGeometry(QRect(160, 230, 111, 16));
        showmarklabel = new QLabel(selectperson);
        showmarklabel->setObjectName(QString::fromUtf8("showmarklabel"));
        showmarklabel->setGeometry(QRect(160, 290, 121, 21));
        selectpushButton = new QPushButton(selectperson);
        selectpushButton->setObjectName(QString::fromUtf8("selectpushButton"));
        selectpushButton->setGeometry(QRect(80, 480, 93, 28));

        retranslateUi(selectperson);

        QMetaObject::connectSlotsByName(selectperson);
    } // setupUi

    void retranslateUi(QWidget *selectperson)
    {
        selectperson->setWindowTitle(QCoreApplication::translate("selectperson", "\346\237\245\350\257\242\347\225\214\351\235\242", nullptr));
        returnpushButton->setText(QCoreApplication::translate("selectperson", "\344\270\273\350\217\234\345\215\225", nullptr));
        numberlabel->setText(QCoreApplication::translate("selectperson", "\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        namelabel->setText(QCoreApplication::translate("selectperson", "\345\247\223\345\220\215", nullptr));
        ralalabel->setText(QCoreApplication::translate("selectperson", "\345\205\263\347\263\273", nullptr));
        marklabel->setText(QCoreApplication::translate("selectperson", "\345\244\207\346\263\250", nullptr));
        shownamelabel->setText(QCoreApplication::translate("selectperson", "\346\227\240", nullptr));
        showrelalabel->setText(QCoreApplication::translate("selectperson", "\346\227\240", nullptr));
        showmarklabel->setText(QCoreApplication::translate("selectperson", "\346\227\240", nullptr));
        selectpushButton->setText(QCoreApplication::translate("selectperson", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectperson: public Ui_selectperson {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPERSON_H
