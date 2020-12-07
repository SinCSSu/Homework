#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include "user.h"
#include "salor.h"
#include "administrator.h"
#include "menu.h"
#include "login.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void ini();

private:
    Ui::MainWindow *ui;
    User * user;
    Salor * salor;
    Login *login;
    Administrator * admin;
    Menu *menu;

};
#endif // MAINWINDOW_H
