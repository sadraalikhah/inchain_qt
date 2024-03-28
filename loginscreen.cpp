#include "loginscreen.h"
#include "ui_loginscreen.h"

LoginScreen::LoginScreen(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginScreen)
{
    ui->setupUi(this);
    ui->Login->hide();
}

LoginScreen::~LoginScreen()
{
    delete ui;
}


void LoginScreen::on_SignupSwitch_clicked()
{
    ui->Login->hide();
    ui->Signup->show();
}


void LoginScreen::on_LoginSwitch_clicked()
{
    ui->Signup->hide();
    ui->Login->show();
}

