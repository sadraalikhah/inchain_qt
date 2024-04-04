#include "verification.h"
#include "ui_verification.h"


#include <QLineEdit>
#include <QMessageBox>
#include <ctime>
#include <cstdlib>

Verification::Verification(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Verification)
{
    ui->setupUi(this);
}

Verification::~Verification()
{
    delete ui;
}

void Verification::showPopup(){
    QMessageBox popup;
    QString code = randomCode();
    popup.setText("Your verification code is:");
    popup.setInformativeText(QString("%1-%2-%3-%4").arg(code[0], code[1],code[2],code[3]));
    popup.setStandardButtons(QMessageBox::Close);
    popup.exec();
}

QString randomCode(void)
{
    std::srand(std::time(0));
    QString code = "0000";
    code.replace(0 ,1,QString::number(std::rand()%10));
    code.replace(1 ,1,QString::number(std::rand()%10));
    code.replace(2 ,1,QString::number(std::rand()%10));
    code.replace(3 ,1,QString::number(std::rand()%10));

    return code;
}
