#ifndef SALOR_MANAGE_ADMIN_H
#define SALOR_MANAGE_ADMIN_H

#include <QWidget>

namespace Ui {
class salor_manage_admin;
}

class salor_manage_admin : public QWidget
{
    Q_OBJECT

public:
    explicit salor_manage_admin(QWidget *parent = nullptr);
    ~salor_manage_admin();

private:
    Ui::salor_manage_admin *ui;
};

#endif // SALOR_MANAGE_ADMIN_H
