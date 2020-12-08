/********************************************************************************
** Form generated from reading UI file 'salor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALOR_H
#define UI_SALOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Salor
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Salor)
    {
        if (Salor->objectName().isEmpty())
            Salor->setObjectName(QString::fromUtf8("Salor"));
        Salor->resize(720, 480);
        Salor->setMinimumSize(QSize(720, 480));
        Salor->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(Salor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Salor);
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
        pushButton = new QPushButton(Salor);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(Salor);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        back_button = new QPushButton(Salor);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        QFont font1;
        font1.setPointSize(11);
        back_button->setFont(font1);

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

        retranslateUi(Salor);

        QMetaObject::connectSlotsByName(Salor);
    } // setupUi

    void retranslateUi(QWidget *Salor)
    {
        Salor->setWindowTitle(QCoreApplication::translate("Salor", "Form", nullptr));
        label->setText(QCoreApplication::translate("Salor", "\345\225\206\345\256\266\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("Salor", "\345\225\206\345\256\266\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Salor", "\351\242\204\345\256\232\345\212\237\350\203\275", nullptr));
        back_button->setText(QCoreApplication::translate("Salor", "\350\277\224\345\233\236\344\270\212\344\270\200\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Salor: public Ui_Salor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALOR_H
