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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonManage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *view_button;
    QPushButton *change_button;
    QPushButton *logout_button;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PersonManage)
    {
        if (PersonManage->objectName().isEmpty())
            PersonManage->setObjectName(QString::fromUtf8("PersonManage"));
        PersonManage->resize(720, 480);
        PersonManage->setMinimumSize(QSize(720, 480));
        PersonManage->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(PersonManage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PersonManage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(170, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        view_button = new QPushButton(PersonManage);
        view_button->setObjectName(QString::fromUtf8("view_button"));

        verticalLayout_2->addWidget(view_button);

        change_button = new QPushButton(PersonManage);
        change_button->setObjectName(QString::fromUtf8("change_button"));

        verticalLayout_2->addWidget(change_button);

        logout_button = new QPushButton(PersonManage);
        logout_button->setObjectName(QString::fromUtf8("logout_button"));

        verticalLayout_2->addWidget(logout_button);

        back_button = new QPushButton(PersonManage);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        verticalLayout_2->addWidget(back_button);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 4);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(PersonManage);

        QMetaObject::connectSlotsByName(PersonManage);
    } // setupUi

    void retranslateUi(QWidget *PersonManage)
    {
        PersonManage->setWindowTitle(QCoreApplication::translate("PersonManage", "Form", nullptr));
        label->setText(QCoreApplication::translate("PersonManage", "\344\270\252\344\272\272\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        view_button->setText(QCoreApplication::translate("PersonManage", "\346\237\245\347\234\213\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        change_button->setText(QCoreApplication::translate("PersonManage", "\344\277\256\346\224\271\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        logout_button->setText(QCoreApplication::translate("PersonManage", "\346\263\250\351\224\200\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        back_button->setText(QCoreApplication::translate("PersonManage", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonManage: public Ui_PersonManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONMANAGE_H
