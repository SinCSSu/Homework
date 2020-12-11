#ifndef ADDRESERVER_H
#define ADDRESERVER_H

#include <QWidget>

namespace Ui {
class AddReserver;
}

class AddReserver : public QWidget
{
    Q_OBJECT

public:
    explicit AddReserver(QWidget *parent = nullptr);
    ~AddReserver();

private:
    Ui::AddReserver *ui;
};

#endif // ADDRESERVER_H
