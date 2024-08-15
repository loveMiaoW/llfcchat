#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/******************************************************************************
 *
 * @file       mainwindow.h
 * @brief      登陆界面和注册界面，通过槽函数SlotSwitchReg处理从登陆界面的单击信号。
 *
 * @author     MrLiu
 * @date       2024/08/15
 * @history
 *****************************************************************************/

#include <QMainWindow>
#include "logindialog.h"
#include "registerdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    void SlotSwitchReg();

private:
    Ui::MainWindow *ui;
    LoginDialog *_login_dlg;
    RegisterDialog *_reg_dlg;
};
#endif // MAINWINDOW_H
