#include "splashscreen.h"
#include "loginscreen.h"
#include "userdetails.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    int id = QFontDatabase::addApplicationFont(":/fonts/myfont.ttf");
    if (id != -1)
    {
        QString family = QFontDatabase::applicationFontFamilies(id).at(0);
        QFont myFont(family);
        app.setFont(myFont);
    }

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "InChain_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            app.installTranslator(&translator);
            break;
        }
    }

    splashScreen s;
    LoginScreen l;
    UserDetails ud;

    // si.setWindowState(Qt::WindowMaximized);
    s.show();
    return app.exec();
}
