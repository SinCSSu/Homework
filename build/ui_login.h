/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *massage;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *username;
    QLineEdit *passwd;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *log_in;
    QPushButton *sign_up;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(720, 480);
        Login->setMinimumSize(QSize(720, 480));
        Login->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_2);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        massage = new QLabel(Login);
        massage->setObjectName(QString::fromUtf8("massage"));

        gridLayout->addWidget(massage, 2, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        username = new QLineEdit(Login);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout_4->addWidget(username);

        passwd = new QLineEdit(Login);
        passwd->setObjectName(QString::fromUtf8("passwd"));

        verticalLayout_4->addWidget(passwd);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        log_in = new QPushButton(Login);
        log_in->setObjectName(QString::fromUtf8("log_in"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        log_in->setFont(font2);

        horizontalLayout->addWidget(log_in);

        sign_up = new QPushButton(Login);
        sign_up->setObjectName(QString::fromUtf8("sign_up"));
        QFont font3;
        font3.setBold(false);
        font3.setWeight(50);
        sign_up->setFont(font3);

        horizontalLayout->addWidget(sign_up);

        back_button = new QPushButton(Login);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        horizontalLayout->addWidget(back_button);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(95, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 3);
        gridLayout->setColumnStretch(3, 1);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Form", nullptr));
        label->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        massage->setText(QString());
        label_3->setText(QCoreApplication::translate("Login", "\347\276\216\345\233\242\351\244\220\351\246\206\351\242\204\345\256\232\347\256\241\347\220\206\344\277\241\346\201\257\347\263\273\347\273\237", nullptr));
        log_in->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        sign_up->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        back_button->setText(QCoreApplication::translate("Login", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
