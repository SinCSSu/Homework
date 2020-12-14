#ifndef RECOMMEND_H
#define RECOMMEND_H

#include <QWidget>

namespace Ui {
class Recommend;
}

class Recommend : public QWidget
{
    Q_OBJECT

public:
    explicit Recommend(QWidget *parent = nullptr);
    ~Recommend();

private:
    Ui::Recommend *ui;
};

#endif // RECOMMEND_H
