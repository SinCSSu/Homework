#ifndef PERSONMANAGE_H
#define PERSONMANAGE_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class PersonManage;
}

class PersonManage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonManage(QWidget *parent = nullptr);
    ~PersonManage();

private:
    Ui::PersonManage *ui;
};

#endif // PERSONMANAGE_H
