#-------------------------------------------------
#
# Project created by QtCreator 2017-01-16T15:57:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataStructureTeaching
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    seqinsview.cpp \
    sequniview.cpp \
    seqdelview.cpp \
    linkcreaatnodehead.cpp \
    queueenter.cpp \
    linkinsview.cpp \
    linkdelview.cpp \
    treeprotravel.cpp \
    treemidtravel.cpp \
    treereartravel.cpp \
    bfs_graph.cpp \
    dfs_graph.cpp \
    stackinview.cpp \
    stackoutview.cpp

HEADERS  += mainwindow.h \
    seqinsview.h \
    sequniview.h \
    seqdelview.h \
    linkcreaatnodehead.h \
    queueenter.h \
    linkinsview.h \
    linkdelview.h \
    treeprotravel.h \
    treemidtravel.h \
    treereartravel.h \
    bfs_graph.h \
    dfs_graph.h \
    stackinview.h \
    stackoutview.h

FORMS    += mainwindow.ui \
    seqinsview.ui \
    sequniview.ui \
    seqdelview.ui \
    linkcreaatnodehead.ui \
    queueenter.ui \
    linkinsview.ui \
    linkdelview.ui \
    treeprotravel.ui \
    treemidtravel.ui \
    treereartravel.ui \
    bfs_graph.ui \
    dfs_graph.ui \
    stackinview.ui \
    stackoutview.ui

RESOURCES += \
    img.qrc

RC_FILE=icon.rc

