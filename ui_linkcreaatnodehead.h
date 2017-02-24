/********************************************************************************
** Form generated from reading UI file 'linkcreaatnodehead.ui'
**
** Created: Fri Feb 24 20:07:26 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKCREAATNODEHEAD_H
#define UI_LINKCREAATNODEHEAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
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

class Ui_linkCreaatNodeHead
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *nodelabel_2;
    QLineEdit *nodelineEdit_2;
    QLabel *label_2;
    QLineEdit *currentlineEdit_2;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QGroupBox *ButtonBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startButton_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pauseButton_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *frashButton_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *explainButton_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *backButton_2;
    QMenuBar *menubar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *linkCreaatNodeHead)
    {
        if (linkCreaatNodeHead->objectName().isEmpty())
            linkCreaatNodeHead->setObjectName(QString::fromUtf8("linkCreaatNodeHead"));
        linkCreaatNodeHead->resize(800, 600);
        centralwidget = new QWidget(linkCreaatNodeHead);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 110, 755, 200));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(800, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        nodelabel_2 = new QLabel(groupBox);
        nodelabel_2->setObjectName(QString::fromUtf8("nodelabel_2"));
        nodelabel_2->setGeometry(QRect(20, 40, 70, 25));
        nodelineEdit_2 = new QLineEdit(groupBox);
        nodelineEdit_2->setObjectName(QString::fromUtf8("nodelineEdit_2"));
        nodelineEdit_2->setGeometry(QRect(90, 40, 25, 25));
        nodelineEdit_2->setMinimumSize(QSize(25, 25));
        nodelineEdit_2->setMaximumSize(QSize(25, 25));
        nodelineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        nodelineEdit_2->setFrame(false);
        nodelineEdit_2->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 150, 120, 25));
        currentlineEdit_2 = new QLineEdit(groupBox);
        currentlineEdit_2->setObjectName(QString::fromUtf8("currentlineEdit_2"));
        currentlineEdit_2->setGeometry(QRect(135, 150, 25, 25));
        currentlineEdit_2->setMinimumSize(QSize(25, 25));
        currentlineEdit_2->setMaximumSize(QSize(25, 25));
        currentlineEdit_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        currentlineEdit_2->setReadOnly(true);
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(180, 40, 25, 25));
        lineEdit_11->setMinimumSize(QSize(25, 25));
        lineEdit_11->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lineEdit_11->setFont(font1);
        lineEdit_11->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";\n"
""));
        lineEdit_11->setReadOnly(true);
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(240, 40, 25, 25));
        lineEdit_12->setMinimumSize(QSize(25, 25));
        lineEdit_12->setMaximumSize(QSize(25, 25));
        lineEdit_12->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_12->setReadOnly(true);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(300, 40, 25, 25));
        lineEdit_13->setMinimumSize(QSize(25, 25));
        lineEdit_13->setMaximumSize(QSize(25, 25));
        lineEdit_13->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_13->setReadOnly(true);
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(360, 40, 25, 25));
        lineEdit_14->setMinimumSize(QSize(25, 25));
        lineEdit_14->setMaximumSize(QSize(25, 25));
        lineEdit_14->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_14->setReadOnly(true);
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(420, 40, 25, 25));
        lineEdit_15->setMinimumSize(QSize(25, 25));
        lineEdit_15->setMaximumSize(QSize(25, 25));
        lineEdit_15->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_15->setReadOnly(true);
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(480, 40, 25, 25));
        lineEdit_16->setMinimumSize(QSize(25, 25));
        lineEdit_16->setMaximumSize(QSize(25, 25));
        lineEdit_16->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_16->setReadOnly(true);
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(540, 40, 25, 25));
        lineEdit_17->setMinimumSize(QSize(25, 25));
        lineEdit_17->setMaximumSize(QSize(25, 25));
        lineEdit_17->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_17->setReadOnly(true);
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(600, 40, 25, 25));
        lineEdit_18->setMinimumSize(QSize(25, 25));
        lineEdit_18->setMaximumSize(QSize(25, 25));
        lineEdit_18->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_18->setReadOnly(true);
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(660, 40, 25, 25));
        lineEdit_19->setMinimumSize(QSize(25, 25));
        lineEdit_19->setMaximumSize(QSize(25, 25));
        lineEdit_19->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_19->setReadOnly(true);
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(720, 40, 25, 25));
        lineEdit_20->setMinimumSize(QSize(25, 25));
        lineEdit_20->setMaximumSize(QSize(25, 25));
        lineEdit_20->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_20->setReadOnly(true);
        lineEdit_21 = new QLineEdit(groupBox);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(135, 85, 25, 25));
        lineEdit_21->setMinimumSize(QSize(25, 25));
        lineEdit_21->setMaximumSize(QSize(25, 25));
        lineEdit_21->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        lineEdit_21->setReadOnly(true);
        ButtonBox = new QGroupBox(centralwidget);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(10, 10, 755, 80));
        layoutWidget_2 = new QWidget(ButtonBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 30, 541, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        startButton_2 = new QPushButton(layoutWidget_2);
        startButton_2->setObjectName(QString::fromUtf8("startButton_2"));

        horizontalLayout_2->addWidget(startButton_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pauseButton_2 = new QPushButton(layoutWidget_2);
        pauseButton_2->setObjectName(QString::fromUtf8("pauseButton_2"));

        horizontalLayout_2->addWidget(pauseButton_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        frashButton_2 = new QPushButton(layoutWidget_2);
        frashButton_2->setObjectName(QString::fromUtf8("frashButton_2"));

        horizontalLayout_2->addWidget(frashButton_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        explainButton_2 = new QPushButton(layoutWidget_2);
        explainButton_2->setObjectName(QString::fromUtf8("explainButton_2"));

        horizontalLayout_2->addWidget(explainButton_2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        backButton_2 = new QPushButton(layoutWidget_2);
        backButton_2->setObjectName(QString::fromUtf8("backButton_2"));

        horizontalLayout_2->addWidget(backButton_2);

        linkCreaatNodeHead->setCentralWidget(centralwidget);
        menubar = new QMenuBar(linkCreaatNodeHead);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        linkCreaatNodeHead->setMenuBar(menubar);
        dockWidget = new QDockWidget(linkCreaatNodeHead);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setMinimumSize(QSize(80, 240));
        dockWidget->setMaximumSize(QSize(524287, 240));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 601, 21));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 601, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 50, 601, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_5 = new QLabel(dockWidgetContents);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 70, 601, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 90, 601, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_7 = new QLabel(dockWidgetContents);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 110, 601, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_8 = new QLabel(dockWidgetContents);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 130, 601, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_9 = new QLabel(dockWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 150, 601, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 170, 601, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        dockWidget->setWidget(dockWidgetContents);
        linkCreaatNodeHead->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockWidget);

        retranslateUi(linkCreaatNodeHead);

        QMetaObject::connectSlotsByName(linkCreaatNodeHead);
    } // setupUi

    void retranslateUi(QMainWindow *linkCreaatNodeHead)
    {
        linkCreaatNodeHead->setWindowTitle(QApplication::translate("linkCreaatNodeHead", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("linkCreaatNodeHead", "\346\274\224\347\244\272\345\214\272", 0, QApplication::UnicodeUTF8));
        nodelabel_2->setText(QApplication::translate("linkCreaatNodeHead", "<html><head/><body><p><span style=\" font-weight:600;\">\345\244\264\347\273\223\347\202\271</span><span style=\" font-family:'Verdana,Arial,Tahoma'; font-size:20px; font-weight:600; color:#000000; background-color:#ffffff;\">\342\230\236</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("linkCreaatNodeHead", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\345\275\223\345\211\215\346\217\222\345\205\245\345\205\203\347\264\240:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("linkCreaatNodeHead", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton_2->setText(QApplication::translate("linkCreaatNodeHead", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        pauseButton_2->setText(QApplication::translate("linkCreaatNodeHead", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        frashButton_2->setText(QApplication::translate("linkCreaatNodeHead", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton_2->setText(QApplication::translate("linkCreaatNodeHead", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton_2->setText(QApplication::translate("linkCreaatNodeHead", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("linkCreaatNodeHead", "\347\256\227\346\263\225\345\214\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("linkCreaatNodeHead", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class linkCreaatNodeHead: public Ui_linkCreaatNodeHead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKCREAATNODEHEAD_H
