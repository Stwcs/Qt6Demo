greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = comtool
TEMPLATE    = app
DESTDIR     = $$PWD/../bin


HEADERS     += head.h
SOURCES     += main.cpp

INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/form

include ($$PWD/form/form.pri)
