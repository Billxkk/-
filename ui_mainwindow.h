/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Feb 12 13:13:01 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *aboutAction;
    QAction *helpAction;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *seqList_tab;
    QPushButton *seqInsButton;
    QPushButton *seqDelButton;
    QPushButton *seqUniButton;
    QWidget *linkedList_tab;
    QPushButton *linkCreatButton;
    QPushButton *linkInsButton;
    QPushButton *linkDelButton;
    QWidget *stack_tab;
    QPushButton *enterStackButton;
    QPushButton *outStackButton;
    QWidget *queue_tab;
    QPushButton *enterQueueButton;
    QPushButton *outQueueButton;
    QWidget *tree_tab;
    QWidget *graph_tab;
    QMenuBar *menuBar;
    QMenu *option;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(451, 445);
        MainWindow->setMaximumSize(QSize(451, 469));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Administrator/Pictures/bitbug_favicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 451, 421));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        seqList_tab = new QWidget();
        seqList_tab->setObjectName(QString::fromUtf8("seqList_tab"));
        seqInsButton = new QPushButton(seqList_tab);
        seqInsButton->setObjectName(QString::fromUtf8("seqInsButton"));
        seqInsButton->setGeometry(QRect(200, 50, 111, 23));
        seqDelButton = new QPushButton(seqList_tab);
        seqDelButton->setObjectName(QString::fromUtf8("seqDelButton"));
        seqDelButton->setGeometry(QRect(200, 130, 111, 23));
        seqUniButton = new QPushButton(seqList_tab);
        seqUniButton->setObjectName(QString::fromUtf8("seqUniButton"));
        seqUniButton->setGeometry(QRect(200, 210, 111, 23));
        tabWidget->addTab(seqList_tab, QString());
        linkedList_tab = new QWidget();
        linkedList_tab->setObjectName(QString::fromUtf8("linkedList_tab"));
        linkCreatButton = new QPushButton(linkedList_tab);
        linkCreatButton->setObjectName(QString::fromUtf8("linkCreatButton"));
        linkCreatButton->setGeometry(QRect(200, 50, 111, 23));
        linkInsButton = new QPushButton(linkedList_tab);
        linkInsButton->setObjectName(QString::fromUtf8("linkInsButton"));
        linkInsButton->setGeometry(QRect(200, 130, 111, 23));
        linkDelButton = new QPushButton(linkedList_tab);
        linkDelButton->setObjectName(QString::fromUtf8("linkDelButton"));
        linkDelButton->setGeometry(QRect(200, 210, 111, 23));
        tabWidget->addTab(linkedList_tab, QString());
        stack_tab = new QWidget();
        stack_tab->setObjectName(QString::fromUtf8("stack_tab"));
        enterStackButton = new QPushButton(stack_tab);
        enterStackButton->setObjectName(QString::fromUtf8("enterStackButton"));
        enterStackButton->setGeometry(QRect(200, 50, 111, 23));
        outStackButton = new QPushButton(stack_tab);
        outStackButton->setObjectName(QString::fromUtf8("outStackButton"));
        outStackButton->setGeometry(QRect(200, 130, 111, 23));
        tabWidget->addTab(stack_tab, QString());
        queue_tab = new QWidget();
        queue_tab->setObjectName(QString::fromUtf8("queue_tab"));
        enterQueueButton = new QPushButton(queue_tab);
        enterQueueButton->setObjectName(QString::fromUtf8("enterQueueButton"));
        enterQueueButton->setGeometry(QRect(200, 50, 111, 23));
        outQueueButton = new QPushButton(queue_tab);
        outQueueButton->setObjectName(QString::fromUtf8("outQueueButton"));
        outQueueButton->setGeometry(QRect(200, 130, 111, 23));
        tabWidget->addTab(queue_tab, QString());
        tree_tab = new QWidget();
        tree_tab->setObjectName(QString::fromUtf8("tree_tab"));
        tabWidget->addTab(tree_tab, QString());
        graph_tab = new QWidget();
        graph_tab->setObjectName(QString::fromUtf8("graph_tab"));
        tabWidget->addTab(graph_tab, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 451, 23));
        option = new QMenu(menuBar);
        option->setObjectName(QString::fromUtf8("option"));
        option->setMinimumSize(QSize(0, 0));
        option->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(option->menuAction());
        option->addAction(aboutAction);
        option->addAction(helpAction);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "title", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        seqInsButton->setText(QApplication::translate("MainWindow", "\351\241\272\345\272\217\350\241\250\346\217\222\345\205\245\347\273\223\347\202\271", 0, QApplication::UnicodeUTF8));
        seqDelButton->setText(QApplication::translate("MainWindow", "\351\241\272\345\272\217\350\241\250\345\210\240\351\231\244\347\273\223\347\202\271", 0, QApplication::UnicodeUTF8));
        seqUniButton->setText(QApplication::translate("MainWindow", "\351\241\272\345\272\217\350\241\250\345\220\210\345\271\266", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(seqList_tab), QApplication::translate("MainWindow", "\351\241\272\345\272\217\350\241\250", 0, QApplication::UnicodeUTF8));
        linkCreatButton->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272\351\223\276\350\241\250", 0, QApplication::UnicodeUTF8));
        linkInsButton->setText(QApplication::translate("MainWindow", "\351\223\276\350\241\250\346\217\222\345\205\245\347\273\223\347\202\271", 0, QApplication::UnicodeUTF8));
        linkDelButton->setText(QApplication::translate("MainWindow", "\351\223\276\350\241\250\345\210\240\351\231\244\347\273\223\347\202\271", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(linkedList_tab), QApplication::translate("MainWindow", "\351\223\276\350\241\250", 0, QApplication::UnicodeUTF8));
        enterStackButton->setText(QApplication::translate("MainWindow", "\345\205\245\346\240\210", 0, QApplication::UnicodeUTF8));
        outStackButton->setText(QApplication::translate("MainWindow", "\345\207\272\346\240\210", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(stack_tab), QApplication::translate("MainWindow", "\346\240\210", 0, QApplication::UnicodeUTF8));
        enterQueueButton->setText(QApplication::translate("MainWindow", "\345\205\245\351\230\237", 0, QApplication::UnicodeUTF8));
        outQueueButton->setText(QApplication::translate("MainWindow", "\345\207\272\351\230\237", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(queue_tab), QApplication::translate("MainWindow", "\351\230\237\345\210\227", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tree_tab), QApplication::translate("MainWindow", "\346\240\221", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(graph_tab), QApplication::translate("MainWindow", "\345\233\276", 0, QApplication::UnicodeUTF8));
        option->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
