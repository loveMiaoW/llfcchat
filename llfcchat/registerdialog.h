#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

/******************************************************************************
 *
 * @file       registerdialog.h
 * @brief      注册界面，由主界面展示。
 *
 * @author     MrLiu
 * @date       2024/08/16
 * @history
 *****************************************************************************/

#include <QDialog>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QWidget *parent = nullptr);
    ~RegisterDialog();

private:
    Ui::RegisterDialog *ui;
};

#endif // REGISTERDIALOG_H
