/********************************************************************************
** Form generated from reading UI file 'personmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONMANAGE_H
#define UI_PERSONMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonManage
{
public:

    void setupUi(QWidget *PersonManage)
    {
        if (PersonManage->objectName().isEmpty())
            PersonManage->setObjectName(QString::fromUtf8("PersonManage"));
        PersonManage->resize(720, 480);
        PersonManage->setMinimumSize(QSize(720, 480));
        PersonManage->setMaximumSize(QSize(720, 480));

        retranslateUi(PersonManage);

        QMetaObject::connectSlotsByName(PersonManage);
    } // setupUi

    void retranslateUi(QWidget *PersonManage)
    {
        PersonManage->setWindowTitle(QCoreApplication::translate("PersonManage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonManage: public Ui_PersonManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONMANAGE_H
