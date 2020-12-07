#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QWidget>

namespace Ui {
class Administrator;
}

class Administrator : public QWidget
{
    Q_OBJECT

public:
    explicit Administrator(QWidget *parent = nullptr);
    ~Administrator();

private:
    Ui::Administrator *ui;
    void ini();

signals:
    void click_back();
};

#endif // ADMINISTRATOR_H
