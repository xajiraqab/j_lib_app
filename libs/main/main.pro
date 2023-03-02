QT += gui widgets

TEMPLATE = lib
CONFIG += plugin

CONFIG += c++17

Release:{ DESTDIR = ../../../build/app/release/lib }
Debug:{ DESTDIR = ../../../build/app/debug/lib }

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    libmain.cpp \
    mainwindow.cpp

HEADERS += \
    libmain.h \
    mainwindow.h

DISTFILES += main.json

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    mainwindow.ui
