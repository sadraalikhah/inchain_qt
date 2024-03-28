#ifndef LOGINSCREEN_H
#define LOGINSCREEN_H

#include <QWidget>

namespace Ui {
class LoginScreen;
}

class LoginScreen : public QWidget
{
    Q_OBJECT

public:
    explicit LoginScreen(QWidget *parent = nullptr);
    ~LoginScreen();

private slots:
    void on_LoginSwitch_pressed();

    void on_SignupSwitch_clicked();

    void on_LoginSwitch_clicked();

private:
    Ui::LoginScreen *ui;
};

#endif // LOGINSCREEN_H
