#include "logindialog.h"
#include "ui_logindialog.h"

/******************************************************************************
 *
 * @file       logindialog.cpp
 * @brief      LoginDialog Function,信号连接。捕捉登陆界面点击信号，发送switchRegister信号。
 *
 * @author     MrLiu
 * @date       2024/08/16
 * @history
 *****************************************************************************/
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    connect(ui->reg_btn,&QPushButton::clicked,this,&LoginDialog::switchRegister);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}
