#ifndef USERDETAILS_H
#define USERDETAILS_H

#include <QWidget>

namespace Ui {
class UserDetails;
}

class UserDetails : public QWidget
{
    Q_OBJECT

public:
    explicit UserDetails(QWidget *parent = nullptr);
    ~UserDetails();

private:
    Ui::UserDetails *ui;
};

#endif // USERDETAILS_H
