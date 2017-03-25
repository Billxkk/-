/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Mar 25 09:57:59 2017
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
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
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
    QPushButton *circleQueueButton;
    QWidget *tree_tab;
    QGroupBox *groupBox;
    QPushButton *proButton;
    QPushButton *MidButton;
    QPushButton *rearButton;
    QWidget *graph_tab;
    QGroupBox *groupBox_2;
    QPushButton *dfsButton;
    QPushButton *bfsButton;
    QMenuBar *menuBar;
    QMenu *option;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(451, 469);
        MainWindow->setMaximumSize(QSize(451, 469));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 451, 441));
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
        circleQueueButton = new QPushButton(queue_tab);
        circleQueueButton->setObjectName(QString::fromUtf8("circleQueueButton"));
        circleQueueButton->setGeometry(QRect(220, 90, 141, 23));
        tabWidget->addTab(queue_tab, QString());
        tree_tab = new QWidget();
        tree_tab->setObjectName(QString::fromUtf8("tree_tab"));
        groupBox = new QGroupBox(tree_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 401, 71));
        proButton = new QPushButton(groupBox);
        proButton->setObjectName(QString::fromUtf8("proButton"));
        proButton->setGeometry(QRect(30, 30, 75, 23));
        MidButton = new QPushButton(groupBox);
        MidButton->setObjectName(QString::fromUtf8("MidButton"));
        MidButton->setGeometry(QRect(160, 30, 75, 23));
        rearButton = new QPushButton(groupBox);
        rearButton->setObjectName(QString::fromUtf8("rearButton"));
        rearButton->setGeometry(QRect(290, 30, 75, 23));
        tabWidget->addTab(tree_tab, QString());
        graph_tab = new QWidget();
        graph_tab->setObjectName(QString::fromUtf8("graph_tab"));
        groupBox_2 = new QGroupBox(graph_tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 421, 71));
        dfsButton = new QPushButton(groupBox_2);
        dfsButton->setObjectName(QString::fromUtf8("dfsButton"));
        dfsButton->setGeometry(QRect(60, 30, 101, 23));
        bfsButton = new QPushButton(groupBox_2);
        bfsButton->setObjectName(QString::fromUtf8("bfsButton"));
        bfsButton->setGeometry(QRect(240, 30, 101, 23));
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

        menuBar->addAction(option->menuAction());
        option->addAction(aboutAction);
        option->addAction(helpAction);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);


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
        circleQueueButton->setText(QApplication::translate("MainWindow", "\345\276\252\347\216\257\351\230\237\345\210\227 \345\205\245\351\230\237/\345\207\272\351\230\237", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(queue_tab), QApplication::translate("MainWindow", "\351\230\237\345\210\227", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\240\221\347\232\204\351\201\215\345\216\206", 0, QApplication::UnicodeUTF8));
        proButton->setText(QApplication::translate("MainWindow", "\345\205\210\345\272\217", 0, QApplication::UnicodeUTF8));
        MidButton->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\217", 0, QApplication::UnicodeUTF8));
        rearButton->setText(QApplication::translate("MainWindow", "\345\220\216\345\272\217", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tree_tab), QApplication::translate("MainWindow", "\346\240\221", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\233\276\347\232\204\351\201\215\345\216\206", 0, QApplication::UnicodeUTF8));
        dfsButton->setText(QApplication::translate("MainWindow", "\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        bfsButton->setText(QApplication::translate("MainWindow", "\345\271\277\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(graph_tab), QApplication::translate("MainWindow", "\345\233\276", 0, QApplication::UnicodeUTF8));
        option->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
