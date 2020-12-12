/********************************************************************************
** Form generated from reading UI file 'reserve.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVE_H
#define UI_RESERVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reserve
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *check_all_button;
    QPushButton *check_button;
    QPushButton *add_button;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Reserve)
    {
        if (Reserve->objectName().isEmpty())
            Reserve->setObjectName(QString::fromUtf8("Reserve"));
        Reserve->resize(720, 480);
        Reserve->setMinimumSize(QSize(720, 480));
        Reserve->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(Reserve);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Reserve);
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
        check_all_button = new QPushButton(Reserve);
        check_all_button->setObjectName(QString::fromUtf8("check_all_button"));

        verticalLayout_2->addWidget(check_all_button);

        check_button = new QPushButton(Reserve);
        check_button->setObjectName(QString::fromUtf8("check_button"));

        verticalLayout_2->addWidget(check_button);

        add_button = new QPushButton(Reserve);
        add_button->setObjectName(QString::fromUtf8("add_button"));

        verticalLayout_2->addWidget(add_button);

        back_button = new QPushButton(Reserve);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        verticalLayout_2->addWidget(back_button);


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

        retranslateUi(Reserve);

        QMetaObject::connectSlotsByName(Reserve);
    } // setupUi

    void retranslateUi(QWidget *Reserve)
    {
        Reserve->setWindowTitle(QCoreApplication::translate("Reserve", "Form", nullptr));
        label->setText(QCoreApplication::translate("Reserve", "\351\242\204\345\256\232\347\263\273\347\273\237", nullptr));
        check_all_button->setText(QCoreApplication::translate("Reserve", "\346\237\245\350\257\242\346\211\200\346\234\211\351\242\204\345\256\232", nullptr));
        check_button->setText(QCoreApplication::translate("Reserve", "\346\237\245\350\257\242\346\237\220\344\270\252\351\242\204\345\256\232", nullptr));
        add_button->setText(QCoreApplication::translate("Reserve", "\346\267\273\345\212\240\351\242\204\345\256\232", nullptr));
        back_button->setText(QCoreApplication::translate("Reserve", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reserve: public Ui_Reserve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVE_H
