#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QString>


namespace Ui {
class User;
}

class User : public QWidget
{
    Q_OBJECT

public:
    explicit User(QString name,QWidget *parent = nullptr);
    ~User();

private:
    Ui::User *ui;
    void ini();
    QString name;

signals:
    void click_back();
};

#endif // USER_H
