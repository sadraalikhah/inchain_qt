#ifndef VERIFICATION_H
#define VERIFICATION_H

#include <QWidget>

namespace Ui {
class Verification;
}

class Verification : public QWidget
{
    Q_OBJECT

public:
    explicit Verification(QWidget *parent = nullptr);
    ~Verification();

public slots:
    void showPopup();

private:
    Ui::Verification *ui;
};

QString randomCode();

#endif // VERIFICATION_H
