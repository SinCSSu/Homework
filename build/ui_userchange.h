/********************************************************************************
** Form generated from reading UI file 'userchange.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHANGE_H
#define UI_USERCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserChange
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *newpasswd;
    QLineEdit *confirm_passwd;
    QLineEdit *phone;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *corfirm_button;
    QPushButton *cancle_button;
    QSpacerItem *verticalSpacer;
    QLabel *message;

    void setupUi(QWidget *UserChange)
    {
        if (UserChange->objectName().isEmpty())
            UserChange->setObjectName(QString::fromUtf8("UserChange"));
        UserChange->resize(720, 480);
        UserChange->setMinimumSize(QSize(720, 480));
        UserChange->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(UserChange);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UserChange);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(UserChange);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_2 = new QLabel(UserChange);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_2);

        label_4 = new QLabel(UserChange);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_4);

        label_3 = new QLabel(UserChange);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        newpasswd = new QLineEdit(UserChange);
        newpasswd->setObjectName(QString::fromUtf8("newpasswd"));

        verticalLayout_2->addWidget(newpasswd);

        confirm_passwd = new QLineEdit(UserChange);
        confirm_passwd->setObjectName(QString::fromUtf8("confirm_passwd"));

        verticalLayout_2->addWidget(confirm_passwd);

        phone = new QLineEdit(UserChange);
        phone->setObjectName(QString::fromUtf8("phone"));

        verticalLayout_2->addWidget(phone);


        gridLayout->addLayout(verticalLayout_2, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        corfirm_button = new QPushButton(UserChange);
        corfirm_button->setObjectName(QString::fromUtf8("corfirm_button"));

        horizontalLayout->addWidget(corfirm_button);

        cancle_button = new QPushButton(UserChange);
        cancle_button->setObjectName(QString::fromUtf8("cancle_button"));

        horizontalLayout->addWidget(cancle_button);


        gridLayout->addLayout(horizontalLayout, 2, 3, 1, 2);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        message = new QLabel(UserChange);
        message->setObjectName(QString::fromUtf8("message"));
        message->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(message, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(4, 1);

        retranslateUi(UserChange);

        QMetaObject::connectSlotsByName(UserChange);
    } // setupUi

    void retranslateUi(QWidget *UserChange)
    {
        UserChange->setWindowTitle(QCoreApplication::translate("UserChange", "Form", nullptr));
        label->setText(QCoreApplication::translate("UserChange", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label_5->setText(QCoreApplication::translate("UserChange", "\344\270\215\345\241\253\350\241\250\347\244\272\344\270\215\346\233\264\346\224\271", nullptr));
        label_2->setText(QCoreApplication::translate("UserChange", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        label_4->setText(QCoreApplication::translate("UserChange", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("UserChange", "\350\257\267\350\276\223\345\205\245\346\226\260\347\232\204\346\211\213\346\234\272\345\217\267", nullptr));
        corfirm_button->setText(QCoreApplication::translate("UserChange", "\347\241\256\345\256\232", nullptr));
        cancle_button->setText(QCoreApplication::translate("UserChange", "\345\217\226\346\266\210", nullptr));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserChange: public Ui_UserChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHANGE_H
