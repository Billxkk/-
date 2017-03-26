/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Mar 25 23:53:46 2017
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
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *aboutAction;
    QAction *helpAction;
    QWidget *centralWidget;
    QPushButton *seqInsButton;
    QPushButton *seqDelButton;
    QPushButton *seqUniButton;
    QPushButton *rearButton;
    QPushButton *MidButton;
    QPushButton *proButton;
    QPushButton *dfsButton;
    QPushButton *bfsButton;
    QPushButton *circleQueueButton;
    QPushButton *enterStackButton;
    QPushButton *outStackButton;
    QPushButton *linkCreatButton;
    QPushButton *linkInsButton;
    QPushButton *linkDelButton;
    QLabel *SeqBigImg;
    QLabel *LinkBigImg;
    QLabel *QueueBigImg;
    QLabel *StackBigImg;
    QLabel *TreeBigImg;
    QLabel *GraphBigImg;
    QMenuBar *menuBar;
    QMenu *option;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(750, 469);
        MainWindow->setMinimumSize(QSize(750, 469));
        MainWindow->setMaximumSize(QSize(750, 469));
        MainWindow->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        seqInsButton = new QPushButton(centralWidget);
        seqInsButton->setObjectName(QString::fromUtf8("seqInsButton"));
        seqInsButton->setGeometry(QRect(83, 102, 60, 54));
        seqInsButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        seqInsButton->setFlat(true);
        seqDelButton = new QPushButton(centralWidget);
        seqDelButton->setObjectName(QString::fromUtf8("seqDelButton"));
        seqDelButton->setGeometry(QRect(82, 190, 60, 54));
        seqDelButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        seqDelButton->setFlat(true);
        seqUniButton = new QPushButton(centralWidget);
        seqUniButton->setObjectName(QString::fromUtf8("seqUniButton"));
        seqUniButton->setGeometry(QRect(31, 148, 60, 54));
        seqUniButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        seqUniButton->setFlat(true);
        rearButton = new QPushButton(centralWidget);
        rearButton->setObjectName(QString::fromUtf8("rearButton"));
        rearButton->setGeometry(QRect(402, 371, 60, 54));
        rearButton->setFlat(true);
        MidButton = new QPushButton(centralWidget);
        MidButton->setObjectName(QString::fromUtf8("MidButton"));
        MidButton->setGeometry(QRect(402, 303, 60, 54));
        MidButton->setFlat(true);
        proButton = new QPushButton(centralWidget);
        proButton->setObjectName(QString::fromUtf8("proButton"));
        proButton->setGeometry(QRect(473, 342, 60, 54));
        proButton->setFlat(true);
        dfsButton = new QPushButton(centralWidget);
        dfsButton->setObjectName(QString::fromUtf8("dfsButton"));
        dfsButton->setGeometry(QRect(550, 220, 72, 65));
        dfsButton->setFlat(true);
        bfsButton = new QPushButton(centralWidget);
        bfsButton->setObjectName(QString::fromUtf8("bfsButton"));
        bfsButton->setGeometry(QRect(628, 263, 72, 65));
        bfsButton->setFlat(true);
        circleQueueButton = new QPushButton(centralWidget);
        circleQueueButton->setObjectName(QString::fromUtf8("circleQueueButton"));
        circleQueueButton->setGeometry(QRect(420, 10, 72, 65));
        circleQueueButton->setFlat(true);
        enterStackButton = new QPushButton(centralWidget);
        enterStackButton->setObjectName(QString::fromUtf8("enterStackButton"));
        enterStackButton->setGeometry(QRect(561, 119, 60, 54));
        enterStackButton->setFlat(true);
        outStackButton = new QPushButton(centralWidget);
        outStackButton->setObjectName(QString::fromUtf8("outStackButton"));
        outStackButton->setGeometry(QRect(502, 152, 60, 54));
        outStackButton->setFlat(true);
        linkCreatButton = new QPushButton(centralWidget);
        linkCreatButton->setObjectName(QString::fromUtf8("linkCreatButton"));
        linkCreatButton->setGeometry(QRect(227, 202, 60, 54));
        linkCreatButton->setFlat(true);
        linkInsButton = new QPushButton(centralWidget);
        linkInsButton->setObjectName(QString::fromUtf8("linkInsButton"));
        linkInsButton->setGeometry(QRect(287, 250, 60, 54));
        linkInsButton->setFlat(true);
        linkDelButton = new QPushButton(centralWidget);
        linkDelButton->setObjectName(QString::fromUtf8("linkDelButton"));
        linkDelButton->setGeometry(QRect(227, 298, 60, 54));
        linkDelButton->setFlat(true);
        SeqBigImg = new QLabel(centralWidget);
        SeqBigImg->setObjectName(QString::fromUtf8("SeqBigImg"));
        SeqBigImg->setGeometry(QRect(131, 120, 114, 103));
        LinkBigImg = new QLabel(centralWidget);
        LinkBigImg->setObjectName(QString::fromUtf8("LinkBigImg"));
        LinkBigImg->setGeometry(QRect(138, 234, 102, 92));
        QueueBigImg = new QLabel(centralWidget);
        QueueBigImg->setObjectName(QString::fromUtf8("QueueBigImg"));
        QueueBigImg->setGeometry(QRect(330, 40, 102, 92));
        StackBigImg = new QLabel(centralWidget);
        StackBigImg->setObjectName(QString::fromUtf8("StackBigImg"));
        StackBigImg->setGeometry(QRect(420, 100, 90, 81));
        TreeBigImg = new QLabel(centralWidget);
        TreeBigImg->setObjectName(QString::fromUtf8("TreeBigImg"));
        TreeBigImg->setGeometry(QRect(460, 250, 90, 81));
        GraphBigImg = new QLabel(centralWidget);
        GraphBigImg->setObjectName(QString::fromUtf8("GraphBigImg"));
        GraphBigImg->setGeometry(QRect(542, 301, 90, 81));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 25));
        option = new QMenu(menuBar);
        option->setObjectName(QString::fromUtf8("option"));
        option->setMinimumSize(QSize(0, 0));
        option->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(option->menuAction());
        option->addAction(aboutAction);
        option->addAction(helpAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "title", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        seqInsButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", 0, QApplication::UnicodeUTF8));
        seqDelButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        seqUniButton->setText(QApplication::translate("MainWindow", "\345\220\210\345\271\266", 0, QApplication::UnicodeUTF8));
        rearButton->setText(QApplication::translate("MainWindow", "\345\220\216\345\272\217", 0, QApplication::UnicodeUTF8));
        MidButton->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\217", 0, QApplication::UnicodeUTF8));
        proButton->setText(QApplication::translate("MainWindow", "\345\205\210\345\272\217", 0, QApplication::UnicodeUTF8));
        dfsButton->setText(QApplication::translate("MainWindow", "\346\267\261\345\272\246\351\201\215\345\216\206", 0, QApplication::UnicodeUTF8));
        bfsButton->setText(QApplication::translate("MainWindow", "\345\271\277\345\272\246\351\201\215\345\216\206", 0, QApplication::UnicodeUTF8));
        circleQueueButton->setText(QApplication::translate("MainWindow", "\345\276\252\347\216\257\351\230\237\345\210\227", 0, QApplication::UnicodeUTF8));
        enterStackButton->setText(QApplication::translate("MainWindow", "\345\205\245\346\240\210", 0, QApplication::UnicodeUTF8));
        outStackButton->setText(QApplication::translate("MainWindow", "\345\207\272\346\240\210", 0, QApplication::UnicodeUTF8));
        linkCreatButton->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272", 0, QApplication::UnicodeUTF8));
        linkInsButton->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245", 0, QApplication::UnicodeUTF8));
        linkDelButton->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        SeqBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        LinkBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        QueueBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        StackBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        TreeBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        GraphBigImg->setText(QApplication::translate("MainWindow", "SeqBigImg", 0, QApplication::UnicodeUTF8));
        option->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
