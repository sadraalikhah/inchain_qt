QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aspectratiolabel.cpp \
    loginscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    signup.cpp \
    splashscreen.cpp

HEADERS += \
    aspectratiolabel.h \
    loginscreen.h \
    mainwindow.h \
    signup.h \
    splashscreen.h

FORMS += \
    loginscreen.ui \
    mainwindow.ui \
    signup.ui \
    splashscreen.ui

TRANSLATIONS += \
    InChain_fa_IR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
