#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private:
    Ui::Menu *ui;
    void ini();

signals:
    void click_exit();
    void click_user();
    void click_admin();
    void click_salor();

};

#endif // MENU_H
