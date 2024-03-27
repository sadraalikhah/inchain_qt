#ifndef ASPECTRATIOLABEL_H
#define ASPECTRATIOLABEL_H

#include <QLabel>
#include <QResizeEvent>

class AspectRatioLabel : public QLabel
{
public:
    AspectRatioLabel(QWidget *parent = 0);

protected:
    void resizeEvent(QResizeEvent *event) override;
};

#endif // ASPECTRATIOLABEL_H
