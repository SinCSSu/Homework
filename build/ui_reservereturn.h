/********************************************************************************
** Form generated from reading UI file 'reservereturn.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVERETURN_H
#define UI_RESERVERETURN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReserveReturn
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *result;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;

    void setupUi(QWidget *ReserveReturn)
    {
        if (ReserveReturn->objectName().isEmpty())
            ReserveReturn->setObjectName(QString::fromUtf8("ReserveReturn"));
        ReserveReturn->resize(720, 480);
        ReserveReturn->setMinimumSize(QSize(720, 480));
        ReserveReturn->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(ReserveReturn);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(111, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        result = new QTableWidget(ReserveReturn);
        result->setObjectName(QString::fromUtf8("result"));

        verticalLayout_2->addWidget(result);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ReserveReturn);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pushButton = new QPushButton(ReserveReturn);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_3, 3, 3, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 4);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnStretch(3, 1);

        retranslateUi(ReserveReturn);

        QMetaObject::connectSlotsByName(ReserveReturn);
    } // setupUi

    void retranslateUi(QWidget *ReserveReturn)
    {
        ReserveReturn->setWindowTitle(QCoreApplication::translate("ReserveReturn", "Form", nullptr));
        label->setText(QCoreApplication::translate("ReserveReturn", "\351\242\204\345\256\232\346\237\245\350\257\242", nullptr));
        pushButton->setText(QCoreApplication::translate("ReserveReturn", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReserveReturn: public Ui_ReserveReturn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVERETURN_H
