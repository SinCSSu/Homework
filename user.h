#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>


namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private:
    Ui::User *ui;
    void ini();

signals:
    void click_back();
};

#endif // USER_H
