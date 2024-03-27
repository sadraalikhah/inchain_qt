#include "signup.h"
#include "ui_signup.h"

#include <QCompleter>

signUp::signUp(QWidget *parent)
    : QWidget(parent), ui(new Ui::signUp)
{
    ui->setupUi(this);


    //QComboBox search funcrtion
    QStringList universities;
    universities << "Ferdowsi University of Mashhad"
                 << "Sharif University of Technology"
                 << "Amirkabir University of Technology"
                 << "Tehran University"
                 << "Isfahan University of Technology"
                 << "Shahid Beheshti University"
                 << "University of Tehran"
                 << "K. N. Toosi University of Technology"
                 << "Iran University of Science and Technology"
                 << "University of Isfahan"
                 << "Tabriz University"
                 << "Shiraz University"
                 << "University of Guilan"
                 << "University of Mazandaran"
                 << "University of Kashan"
                 << "University of Zanjan"
                 << "University of Kurdistan"
                 << "University of Birjand"
                 << "University of Shahrekord"
                 << "University of Sistan and Baluchestan";

    for (const QString &university : universities)
    {
        ui->University->addItem(university);
    }

    QCompleter *completer = new QCompleter(universities, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    ui->University->setCompleter(completer);
    ui->University->setEditable(true);
}

signUp::~signUp()
{
    delete ui;
}
