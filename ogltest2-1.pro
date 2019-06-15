#//////////////////////////////////////////
# тестовая работа 1 часть к занятию https://youtu.be/Ww-aoNC8VQU
#//////////////////////////////////////////

QT       += core gui widgets

TARGET = ogltest2-1
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++17

SOURCES += \
        main.cpp \
        oglwidget.cpp

HEADERS += \
        oglwidget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    shaders.qrc \
    textures.qrc
