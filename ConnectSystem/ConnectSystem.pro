QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += widgets
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Login.cpp \
    cnlhelper.cpp \
    delete.cpp \
    detailpage.cpp \
    main.cpp \
    mainwindow.cpp \
    newperson.cpp \
    owninformation.cpp \
    queryinterface.cpp \
    retrieverpassword.cpp \
    signup.cpp

HEADERS += \
    Login.h \
    cnlhelper.h \
    delete.h \
    detailpage.h \
    mainwindow.h \
    newperson.h \
    owninformation.h \
    queryinterface.h \
    retrieverpassword.h \
    signup.h

FORMS += \
    # C:/Users/仇嘉明/Desktop/signup.ui \
    # C:/Users/仇嘉明/Desktop/signup.ui \
    Login.ui \
    delete.ui \
    detailpage.ui \
    mainwindow.ui \
    newperson.ui \
    owninformation.ui \
    queryinterface.ui \
    retrieverpassword.ui \
    signup.ui

TRANSLATIONS += \
    LoginInterface_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
