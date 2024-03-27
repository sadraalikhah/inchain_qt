#ifndef COMPLETE PROFILE_H
#define COMPLETE PROFILE_H

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

#endif // COMPLETE PROFILE_H
