/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *userinfo;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *search_salor_button;
    QPushButton *due_button;
    QPushButton *recommand_button;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName(QString::fromUtf8("User"));
        User->resize(720, 480);
        User->setMinimumSize(QSize(720, 480));
        User->setMaximumSize(QSize(720, 16777215));
        gridLayout = new QGridLayout(User);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(User);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        userinfo = new QLabel(User);
        userinfo->setObjectName(QString::fromUtf8("userinfo"));
        userinfo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(userinfo);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(User);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        search_salor_button = new QPushButton(User);
        search_salor_button->setObjectName(QString::fromUtf8("search_salor_button"));

        verticalLayout_2->addWidget(search_salor_button);

        due_button = new QPushButton(User);
        due_button->setObjectName(QString::fromUtf8("due_button"));

        verticalLayout_2->addWidget(due_button);

        recommand_button = new QPushButton(User);
        recommand_button->setObjectName(QString::fromUtf8("recommand_button"));

        verticalLayout_2->addWidget(recommand_button);

        back_button = new QPushButton(User);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        verticalLayout_2->addWidget(back_button);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 4);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 1);

        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "Form", nullptr));
        label->setText(QCoreApplication::translate("User", "\347\224\250\346\210\267\347\263\273\347\273\237", nullptr));
        userinfo->setText(QCoreApplication::translate("User", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("User", "\344\270\252\344\272\272\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        search_salor_button->setText(QCoreApplication::translate("User", "\346\237\245\350\257\242\345\225\206\345\256\266", nullptr));
        due_button->setText(QCoreApplication::translate("User", "\351\242\204\345\256\232\345\212\237\350\203\275", nullptr));
        recommand_button->setText(QCoreApplication::translate("User", "\346\216\250\350\215\220\345\212\237\350\203\275", nullptr));
        back_button->setText(QCoreApplication::translate("User", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
