#ifndef SEARCHCOMBOBOX_H
#define SEARCHCOMBOBOX_H

#include <QComboBox>
#include <QKeyEvent>

class SearchComboBox : public QComboBox
{
    Q_OBJECT

public:
    explicit SearchComboBox(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // SEARCHCOMBOBOX_H
