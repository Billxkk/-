/********************************************************************************
** Form generated from reading UI file 'dfs_graph.ui'
**
** Created: Sun Mar 26 13:20:27 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFS_GRAPH_H
#define UI_DFS_GRAPH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFS_Graph
{
public:
    QWidget *centralwidget;
    QGroupBox *ButtonBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pauseButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *frashButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *explainButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *backButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit;
    QLabel *label_asdf;
    QLineEdit *lineEdit_9;
    QLabel *label_asdfasdf;
    QLineEdit *inforlineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_10;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_25;
    QLabel *label_21;
    QLabel *label_24;
    QMenuBar *menubar;

    void setupUi(QMainWindow *DFS_Graph)
    {
        if (DFS_Graph->objectName().isEmpty())
            DFS_Graph->setObjectName(QString::fromUtf8("DFS_Graph"));
        DFS_Graph->resize(656, 740);
        centralwidget = new QWidget(DFS_Graph);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ButtonBox = new QGroupBox(centralwidget);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(30, 15, 590, 80));
        ButtonBox->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        layoutWidget = new QWidget(ButtonBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 541, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout->addWidget(startButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pauseButton = new QPushButton(layoutWidget);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));

        horizontalLayout->addWidget(pauseButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        frashButton = new QPushButton(layoutWidget);
        frashButton->setObjectName(QString::fromUtf8("frashButton"));

        horizontalLayout->addWidget(frashButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        explainButton = new QPushButton(layoutWidget);
        explainButton->setObjectName(QString::fromUtf8("explainButton"));

        horizontalLayout->addWidget(explainButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        horizontalLayout->addWidget(backButton);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 115, 590, 281));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Microsoft YaHei UI\";"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 180, 25, 25));
        lineEdit_5->setMinimumSize(QSize(25, 25));
        lineEdit_5->setMaximumSize(QSize(25, 25));
        lineEdit_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 130, 25, 25));
        lineEdit_3->setMinimumSize(QSize(25, 25));
        lineEdit_3->setMaximumSize(QSize(25, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(240, 180, 25, 25));
        lineEdit_6->setMinimumSize(QSize(25, 25));
        lineEdit_6->setMaximumSize(QSize(25, 25));
        lineEdit_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(280, 20, 25, 25));
        lineEdit_1->setMinimumSize(QSize(25, 25));
        lineEdit_1->setMaximumSize(QSize(25, 25));
        lineEdit_1->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(270, 130, 25, 25));
        lineEdit_7->setMinimumSize(QSize(25, 25));
        lineEdit_7->setMaximumSize(QSize(25, 25));
        lineEdit_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 240, 113, 25));
        label_asdf = new QLabel(groupBox);
        label_asdf->setObjectName(QString::fromUtf8("label_asdf"));
        label_asdf->setGeometry(QRect(60, 240, 130, 25));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(340, 130, 25, 25));
        lineEdit_9->setMinimumSize(QSize(25, 25));
        lineEdit_9->setMaximumSize(QSize(25, 25));
        lineEdit_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_asdfasdf = new QLabel(groupBox);
        label_asdfasdf->setObjectName(QString::fromUtf8("label_asdfasdf"));
        label_asdfasdf->setGeometry(QRect(370, 240, 70, 25));
        inforlineEdit = new QLineEdit(groupBox);
        inforlineEdit->setObjectName(QString::fromUtf8("inforlineEdit"));
        inforlineEdit->setGeometry(QRect(440, 240, 120, 25));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 70, 25, 25));
        lineEdit_2->setMinimumSize(QSize(25, 25));
        lineEdit_2->setMaximumSize(QSize(25, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(210, 130, 25, 25));
        lineEdit_4->setMinimumSize(QSize(25, 25));
        lineEdit_4->setMaximumSize(QSize(25, 25));
        lineEdit_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(400, 70, 25, 25));
        lineEdit_8->setMinimumSize(QSize(25, 25));
        lineEdit_8->setMaximumSize(QSize(25, 25));
        lineEdit_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(460, 130, 25, 25));
        lineEdit_10->setMinimumSize(QSize(25, 25));
        lineEdit_10->setMaximumSize(QSize(25, 25));
        lineEdit_10->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 410, 301, 291));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 281, 21));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 40, 261, 21));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 261, 21));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 80, 261, 21));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 100, 271, 21));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 120, 261, 21));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 140, 261, 21));
        label_7->setStyleSheet(QString::fromUtf8(""));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 160, 261, 21));
        label_8->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 180, 261, 21));
        label_9->setStyleSheet(QString::fromUtf8(""));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 200, 261, 21));
        label_10->setStyleSheet(QString::fromUtf8(""));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(350, 410, 271, 291));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 160, 261, 21));
        label_27->setStyleSheet(QString::fromUtf8(""));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 180, 261, 21));
        label_28->setStyleSheet(QString::fromUtf8(""));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 80, 261, 21));
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 140, 261, 21));
        label_26->setStyleSheet(QString::fromUtf8(""));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 20, 281, 21));
        label_20->setStyleSheet(QString::fromUtf8(""));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 60, 261, 21));
        label_22->setStyleSheet(QString::fromUtf8(""));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 120, 261, 21));
        label_25->setStyleSheet(QString::fromUtf8(""));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 40, 261, 21));
        label_21->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 100, 271, 21));
        label_24->setStyleSheet(QString::fromUtf8(""));
        DFS_Graph->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFS_Graph);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 656, 23));
        DFS_Graph->setMenuBar(menubar);

        retranslateUi(DFS_Graph);

        QMetaObject::connectSlotsByName(DFS_Graph);
    } // setupUi

    void retranslateUi(QMainWindow *DFS_Graph)
    {
        DFS_Graph->setWindowTitle(QApplication::translate("DFS_Graph", "MainWindow", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("DFS_Graph", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("DFS_Graph", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        pauseButton->setText(QApplication::translate("DFS_Graph", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        frashButton->setText(QApplication::translate("DFS_Graph", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton->setText(QApplication::translate("DFS_Graph", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("DFS_Graph", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DFS_Graph", "\346\267\261\345\272\246\344\274\230\345\205\210\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        label_asdf->setText(QApplication::translate("DFS_Graph", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">\346\267\261\345\272\246\344\274\230\345\205\210\345\272\217\345\210\227:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_asdfasdf->setText(QApplication::translate("DFS_Graph", "<html><head/><body><p><span style=\" font-size:12pt; color:#ff0000;\">\346\217\220\347\244\272\346\241\206:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DFS_Graph", "TraverDFS", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DFS_Graph", "Boolean visited[MAX];//\350\256\277\351\227\256\346\240\207\345\277\227\346\225\260\347\273\204", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DFS_Graph", "void DFSTraverse(Graph G){", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DFS_Graph", "   int i;", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DFS_Graph", "   for(i=1;i<=MAX;++i){", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DFS_Graph", "      visited[i] = false;//\345\210\235\345\247\213\345\214\226", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DFS_Graph", "   for(i=1;i<=MAX;++i){", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DFS_Graph", "      if(!visited[i])", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DFS_Graph", "         DFS(G,i);", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DFS_Graph", "      }", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DFS_Graph", " }", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("DFS_Graph", "DFS", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("DFS_Graph", "     }", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("DFS_Graph", " }", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("DFS_Graph", "   while(w){", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("DFS_Graph", "     w = NextADJ(G,v,w);", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("DFS_Graph", "void DFS(Graph G,int v)[", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("DFS_Graph", "   w = firstADJ(G,v);", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DFS_Graph", "       DFS(G,w);", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("DFS_Graph", "   visited[v]=true; visit(v);", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DFS_Graph", "     if(!visited[w])", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DFS_Graph: public Ui_DFS_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFS_GRAPH_H
