#ifndef SALOR_H
#define SALOR_H

#include <QWidget>

namespace Ui {
class Salor;
}

class Salor : public QWidget
{
    Q_OBJECT

public:
    explicit Salor(QWidget *parent = nullptr);
    ~Salor();

private:
    Ui::Salor *ui;
    void ini();

signals:
    void click_back();
};

#endif // SALOR_H
