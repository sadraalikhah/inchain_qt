#include "aspectratiolabel.h"

AspectRatioLabel::AspectRatioLabel(QWidget *parent) : QLabel(parent) {}

void AspectRatioLabel::resizeEvent(QResizeEvent *event)
{
    // Desired aspect ratio
    float aspectRatio = 1;

    // Current label size
    int labelWidth = this->width();
    int labelHeight = this->height();

    // Calculate new size while keeping aspect ratio
    if (labelWidth > labelHeight * aspectRatio)
        labelWidth = labelHeight * aspectRatio;
    else
        labelHeight = labelWidth / aspectRatio;

    // Resize the label
    this->resize(labelWidth, labelHeight);

    QLabel::resizeEvent(event);
}
