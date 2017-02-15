#-------------------------------------------------
#
# Project created by QtCreator 2017-01-16T15:57:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    seqinsview.cpp \
    sequniview.cpp \
    seqdelview.cpp \
    linkcreaatnodehead.cpp

HEADERS  += mainwindow.h \
    seqinsview.h \
    sequniview.h \
    seqdelview.h \
    linkcreaatnodehead.h

FORMS    += mainwindow.ui \
    seqinsview.ui \
    sequniview.ui \
    seqdelview.ui \
    linkcreaatnodehead.ui

RESOURCES += \
    img.qrc
