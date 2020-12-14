#ifndef RECOMMENDRESULT_H
#define RECOMMENDRESULT_H

#include <QWidget>
#include<QVector>
#include <QStringList>
#include "shopdata.h"

namespace Ui {
class RecommendResult;
}

class RecommendResult : public QWidget
{
    Q_OBJECT

public:
    explicit RecommendResult(QVector<shopNode> data,QWidget *parent = nullptr);
    ~RecommendResult();

private:
    Ui::RecommendResult *ui;
    QVector<shopNode> data;
    void ini();
};

#endif // RECOMMENDRESULT_H
