#ifndef USER_MANAGE_H
#define USER_MANAGE_H

#include <QWidget>

namespace Ui {
class user_manage;
}

class user_manage : public QWidget
{
    Q_OBJECT

public:
    explicit user_manage(QWidget *parent = nullptr);
    ~user_manage();

private:
    Ui::user_manage *ui;
};

#endif // USER_MANAGE_H
