#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
/******************************************************************************
 *
 * @file       logindialog.h
 * @brief      登陆界面，切换注册界面信号。由主界面捕捉。
 *
 * @author     MrLiu
 * @date       2024/08/16
 * @history
 *****************************************************************************/

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

signals:
    void switchRegister();

private:
    Ui::LoginDialog *ui;
};

#endif // LOGINDIALOG_H
