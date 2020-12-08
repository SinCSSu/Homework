/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *user_button;
    QPushButton *salor_button;
    QPushButton *admin_button;
    QPushButton *exit_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(720, 480);
        Menu->setMinimumSize(QSize(720, 480));
        Menu->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Menu);
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
        user_button = new QPushButton(Menu);
        user_button->setObjectName(QString::fromUtf8("user_button"));

        verticalLayout_2->addWidget(user_button);

        salor_button = new QPushButton(Menu);
        salor_button->setObjectName(QString::fromUtf8("salor_button"));

        verticalLayout_2->addWidget(salor_button);

        admin_button = new QPushButton(Menu);
        admin_button->setObjectName(QString::fromUtf8("admin_button"));

        verticalLayout_2->addWidget(admin_button);

        exit_button = new QPushButton(Menu);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));

        verticalLayout_2->addWidget(exit_button);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Form", nullptr));
        label->setText(QCoreApplication::translate("Menu", "\347\276\216\345\233\242\351\244\220\351\246\206\351\242\204\345\256\232\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273\347\273\237", nullptr));
        user_button->setText(QCoreApplication::translate("Menu", "\347\224\250\346\210\267\347\263\273\347\273\237", nullptr));
        salor_button->setText(QCoreApplication::translate("Menu", "\345\225\206\345\256\266\347\263\273\347\273\237", nullptr));
        admin_button->setText(QCoreApplication::translate("Menu", "\345\220\216\345\217\260\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        exit_button->setText(QCoreApplication::translate("Menu", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
