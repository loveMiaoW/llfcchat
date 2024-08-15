#include "mainwindow.h"
#include "ui_mainwindow.h"

/******************************************************************************
 *
 * @file       mainwindow.cpp
 * @brief      MainWindow Function.构造函数将login对话框设置为中心窗口,并显示。当捕获到switchRegister信号时，
 *             调用SlotSwitchReg槽函数。实现窗口切换。
 * @author     MrLiu
 * @date       2024/08/15
 * @history
 *****************************************************************************/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dlg = new LoginDialog();
    setCentralWidget(_login_dlg);
    _login_dlg->show();

    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::SlotSwitchReg);
    _reg_dlg = new RegisterDialog();
}

MainWindow::~MainWindow()
{
    delete ui;
    if(_login_dlg) {
        delete _login_dlg;
        _login_dlg = nullptr;
    }

    if(_reg_dlg) {
        delete _reg_dlg;
        _reg_dlg = nullptr;
    }
}

/******************************************************************************
 *
 * @file       mainwindow.cpp
 * @brief      SlotSwitchReg Function.具体实现切换窗口。更换窗口中心部件，将上一个窗口隐藏
 *             显示要显示的窗口。
 * @author     MrLiu
 * @date       2024/08/16
 * @history
 *****************************************************************************/
void MainWindow::SlotSwitchReg()
{
    setCentralWidget(_reg_dlg);
    _login_dlg->hide();
    _reg_dlg->show();
}

