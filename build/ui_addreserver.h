/********************************************************************************
** Form generated from reading UI file 'addreserver.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESERVER_H
#define UI_ADDRESERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddReserver
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *shopname;
    QDateEdit *date;
    QRadioButton *lunch;
    QRadioButton *dinner;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *confirm_button;
    QPushButton *back_button;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AddReserver)
    {
        if (AddReserver->objectName().isEmpty())
            AddReserver->setObjectName(QString::fromUtf8("AddReserver"));
        AddReserver->resize(720, 480);
        AddReserver->setMinimumSize(QSize(720, 480));
        AddReserver->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(AddReserver);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(AddReserver);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(20);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(AddReserver);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(AddReserver);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(AddReserver);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(AddReserver);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        shopname = new QLineEdit(AddReserver);
        shopname->setObjectName(QString::fromUtf8("shopname"));

        verticalLayout_2->addWidget(shopname);

        date = new QDateEdit(AddReserver);
        date->setObjectName(QString::fromUtf8("date"));

        verticalLayout_2->addWidget(date);

        lunch = new QRadioButton(AddReserver);
        lunch->setObjectName(QString::fromUtf8("lunch"));

        verticalLayout_2->addWidget(lunch);

        dinner = new QRadioButton(AddReserver);
        dinner->setObjectName(QString::fromUtf8("dinner"));

        verticalLayout_2->addWidget(dinner);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        confirm_button = new QPushButton(AddReserver);
        confirm_button->setObjectName(QString::fromUtf8("confirm_button"));

        horizontalLayout->addWidget(confirm_button);

        back_button = new QPushButton(AddReserver);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        horizontalLayout->addWidget(back_button);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 4);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 3);
        gridLayout->setColumnStretch(3, 1);

        retranslateUi(AddReserver);

        QMetaObject::connectSlotsByName(AddReserver);
    } // setupUi

    void retranslateUi(QWidget *AddReserver)
    {
        AddReserver->setWindowTitle(QCoreApplication::translate("AddReserver", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("AddReserver", "\346\267\273\345\212\240\351\242\204\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("AddReserver", "\347\224\250\351\244\220\345\234\260\347\202\271", nullptr));
        label_2->setText(QCoreApplication::translate("AddReserver", "\347\224\250\351\244\220\346\227\266\351\227\264", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        lunch->setText(QCoreApplication::translate("AddReserver", "\345\215\210\351\244\220", nullptr));
        dinner->setText(QCoreApplication::translate("AddReserver", "\346\231\232\351\244\220", nullptr));
        confirm_button->setText(QCoreApplication::translate("AddReserver", "\347\241\256\350\256\244", nullptr));
        back_button->setText(QCoreApplication::translate("AddReserver", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddReserver: public Ui_AddReserver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESERVER_H
