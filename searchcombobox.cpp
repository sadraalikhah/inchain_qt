#include "searchcombobox.h"

SearchComboBox::SearchComboBox(QWidget *parent) : QComboBox(parent)
{
    setEditable(true);
}

void SearchComboBox::keyPressEvent(QKeyEvent *event)
{
    // Ignore Enter/Return key presses to prevent the user from adding new items
    if (event->key() != Qt::Key_Enter && event->key() != Qt::Key_Return)
    {
        QComboBox::keyPressEvent(event);
    }
}
