/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

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

class Ui_Signin
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *user_name;
    QLineEdit *passwd;
    QLineEdit *passwd_confirm;
    QLineEdit *phone;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *signin_button;
    QPushButton *back_button;
    QSpacerItem *verticalSpacer;
    QLabel *massage;

    void setupUi(QWidget *Signin)
    {
        if (Signin->objectName().isEmpty())
            Signin->setObjectName(QString::fromUtf8("Signin"));
        Signin->resize(720, 480);
        Signin->setMinimumSize(QSize(720, 480));
        Signin->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(Signin);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(Signin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(134, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(Signin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_4);

        label = new QLabel(Signin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label);

        label_5 = new QLabel(Signin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_5);

        label_2 = new QLabel(Signin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_4, 1, 1, 2, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        user_name = new QLineEdit(Signin);
        user_name->setObjectName(QString::fromUtf8("user_name"));

        verticalLayout_2->addWidget(user_name);

        passwd = new QLineEdit(Signin);
        passwd->setObjectName(QString::fromUtf8("passwd"));

        verticalLayout_2->addWidget(passwd);

        passwd_confirm = new QLineEdit(Signin);
        passwd_confirm->setObjectName(QString::fromUtf8("passwd_confirm"));

        verticalLayout_2->addWidget(passwd_confirm);

        phone = new QLineEdit(Signin);
        phone->setObjectName(QString::fromUtf8("phone"));

        verticalLayout_2->addWidget(phone);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(134, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        signin_button = new QPushButton(Signin);
        signin_button->setObjectName(QString::fromUtf8("signin_button"));

        horizontalLayout->addWidget(signin_button);

        back_button = new QPushButton(Signin);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        horizontalLayout->addWidget(back_button);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        massage = new QLabel(Signin);
        massage->setObjectName(QString::fromUtf8("massage"));

        gridLayout->addWidget(massage, 3, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setRowStretch(4, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 1);

        retranslateUi(Signin);

        QMetaObject::connectSlotsByName(Signin);
    } // setupUi

    void retranslateUi(QWidget *Signin)
    {
        Signin->setWindowTitle(QCoreApplication::translate("Signin", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Signin", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_4->setText(QCoreApplication::translate("Signin", "\347\224\250\346\210\267\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("Signin", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QCoreApplication::translate("Signin", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Signin", "\346\211\213\346\234\272\345\217\267", nullptr));
        signin_button->setText(QCoreApplication::translate("Signin", "\346\263\250\345\206\214", nullptr));
        back_button->setText(QCoreApplication::translate("Signin", "\350\277\224\345\233\236", nullptr));
        massage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Signin: public Ui_Signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
