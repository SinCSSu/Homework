/********************************************************************************
** Form generated from reading UI file 'searchsalor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHSALOR_H
#define UI_SEARCHSALOR_H

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

class Ui_SearchSalor
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *input;
    QPushButton *search_button;
    QVBoxLayout *verticalLayout_3;
    QLabel *result;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QPushButton *back_button;

    void setupUi(QWidget *SearchSalor)
    {
        if (SearchSalor->objectName().isEmpty())
            SearchSalor->setObjectName(QString::fromUtf8("SearchSalor"));
        SearchSalor->resize(720, 480);
        SearchSalor->setMinimumSize(QSize(720, 480));
        SearchSalor->setMaximumSize(QSize(720, 480));
        gridLayout = new QGridLayout(SearchSalor);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SearchSalor);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        input = new QLineEdit(SearchSalor);
        input->setObjectName(QString::fromUtf8("input"));

        horizontalLayout->addWidget(input);

        search_button = new QPushButton(SearchSalor);
        search_button->setObjectName(QString::fromUtf8("search_button"));

        horizontalLayout->addWidget(search_button);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        result = new QLabel(SearchSalor);
        result->setObjectName(QString::fromUtf8("result"));

        verticalLayout_3->addWidget(result);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        back_button = new QPushButton(SearchSalor);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        verticalLayout_4->addWidget(back_button);


        gridLayout->addLayout(verticalLayout_4, 3, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setRowStretch(2, 4);
        gridLayout->setRowStretch(3, 1);
        gridLayout->setColumnStretch(0, 5);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(SearchSalor);

        QMetaObject::connectSlotsByName(SearchSalor);
    } // setupUi

    void retranslateUi(QWidget *SearchSalor)
    {
        SearchSalor->setWindowTitle(QCoreApplication::translate("SearchSalor", "Form", nullptr));
        label->setText(QCoreApplication::translate("SearchSalor", "\346\237\245\350\257\242\345\225\206\345\256\266", nullptr));
        search_button->setText(QCoreApplication::translate("SearchSalor", "\346\220\234\347\264\242", nullptr));
        result->setText(QString());
        back_button->setText(QCoreApplication::translate("SearchSalor", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchSalor: public Ui_SearchSalor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHSALOR_H
