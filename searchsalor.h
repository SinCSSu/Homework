#ifndef SEARCHSALOR_H
#define SEARCHSALOR_H

#include <QWidget>


#include "shopdata.h"

namespace Ui {
class SearchSalor;
}

class SearchSalor : public QWidget
{
    Q_OBJECT

public:
    explicit SearchSalor(QWidget *parent = nullptr);
    ~SearchSalor();

private:
    Ui::SearchSalor *ui;
    void ini();

    ShopData * data;
signals:
    void click_back();
};

#endif // SEARCHSALOR_H
