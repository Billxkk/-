/********************************************************************************
** Form generated from reading UI file 'seqdelview.ui'
**
** Created: Wed Feb 15 11:19:59 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQDELVIEW_H
#define UI_SEQDELVIEW_H

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

class Ui_seqDelView
{
public:
    QWidget *centralwidget;
    QGroupBox *ButtonBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startButton_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pauseButton_2;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *frashButton_2;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *explainButton_2;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *backButton_2;
    QGroupBox *groupBox;
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
    QLineEdit *currentlineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *seqDelView)
    {
        if (seqDelView->objectName().isEmpty())
            seqDelView->setObjectName(QString::fromUtf8("seqDelView"));
        seqDelView->resize(664, 600);
        centralwidget = new QWidget(seqDelView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ButtonBox = new QGroupBox(centralwidget);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(30, 20, 601, 80));
        layoutWidget_2 = new QWidget(ButtonBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 30, 541, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        startButton_2 = new QPushButton(layoutWidget_2);
        startButton_2->setObjectName(QString::fromUtf8("startButton_2"));

        horizontalLayout_2->addWidget(startButton_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

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

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 120, 601, 151));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(840, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"Agency FB\";"));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(13, 40, 25, 25));
        lineEdit_11->setMinimumSize(QSize(25, 25));
        lineEdit_11->setMaximumSize(QSize(25, 25));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_11->setReadOnly(true);
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(73, 40, 25, 25));
        lineEdit_12->setMinimumSize(QSize(25, 25));
        lineEdit_12->setMaximumSize(QSize(25, 25));
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_12->setReadOnly(true);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(133, 40, 25, 25));
        lineEdit_13->setMinimumSize(QSize(25, 25));
        lineEdit_13->setMaximumSize(QSize(25, 25));
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_13->setReadOnly(true);
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(198, 40, 25, 25));
        lineEdit_14->setMinimumSize(QSize(25, 25));
        lineEdit_14->setMaximumSize(QSize(25, 25));
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_14->setReadOnly(true);
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(259, 40, 25, 25));
        lineEdit_15->setMinimumSize(QSize(25, 25));
        lineEdit_15->setMaximumSize(QSize(25, 25));
        lineEdit_15->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_15->setReadOnly(true);
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(320, 40, 25, 25));
        lineEdit_16->setMinimumSize(QSize(25, 25));
        lineEdit_16->setMaximumSize(QSize(25, 25));
        lineEdit_16->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_16->setReadOnly(true);
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(380, 40, 25, 25));
        lineEdit_17->setMinimumSize(QSize(25, 25));
        lineEdit_17->setMaximumSize(QSize(25, 25));
        lineEdit_17->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_17->setReadOnly(true);
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(440, 40, 25, 25));
        lineEdit_18->setMinimumSize(QSize(25, 25));
        lineEdit_18->setMaximumSize(QSize(25, 25));
        lineEdit_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_18->setReadOnly(true);
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(500, 40, 25, 25));
        lineEdit_19->setMinimumSize(QSize(25, 25));
        lineEdit_19->setMaximumSize(QSize(25, 25));
        lineEdit_19->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_19->setReadOnly(true);
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(560, 40, 25, 25));
        lineEdit_20->setMinimumSize(QSize(25, 25));
        lineEdit_20->setMaximumSize(QSize(25, 25));
        lineEdit_20->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_20->setReadOnly(true);
        currentlineEdit_2 = new QLineEdit(groupBox);
        currentlineEdit_2->setObjectName(QString::fromUtf8("currentlineEdit_2"));
        currentlineEdit_2->setGeometry(QRect(140, 100, 113, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        currentlineEdit_2->setFont(font1);
        currentlineEdit_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\351\273\221\344\275\223\";"));
        currentlineEdit_2->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 106, 101, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 54, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 20, 54, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 20, 54, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 20, 54, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 20, 54, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(330, 20, 54, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(390, 20, 54, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(450, 20, 54, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(510, 20, 54, 21));
        label_11->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(565, 20, 54, 21));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\351\273\221\344\275\223\";"));
        dockWidget = new QDockWidget(centralwidget);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setGeometry(QRect(30, 280, 601, 311));
        dockWidget->setFloating(false);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        dockWidget->setWidget(dockWidgetContents_2);
        seqDelView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(seqDelView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 664, 23));
        seqDelView->setMenuBar(menubar);

        retranslateUi(seqDelView);

        QMetaObject::connectSlotsByName(seqDelView);
    } // setupUi

    void retranslateUi(QMainWindow *seqDelView)
    {
        seqDelView->setWindowTitle(QApplication::translate("seqDelView", "MainWindow", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("seqDelView", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton_2->setText(QApplication::translate("seqDelView", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        pauseButton_2->setText(QApplication::translate("seqDelView", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        frashButton_2->setText(QApplication::translate("seqDelView", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton_2->setText(QApplication::translate("seqDelView", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton_2->setText(QApplication::translate("seqDelView", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("seqDelView", "\347\247\273\345\212\250\350\277\207\347\250\213\346\274\224\347\244\272:", 0, QApplication::UnicodeUTF8));
        lineEdit_11->setText(QString());
        lineEdit_17->setText(QString());
        label_2->setText(QApplication::translate("seqDelView", "\345\275\223\345\211\215\347\247\273\345\212\250\344\275\215\346\225\260:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("seqDelView", "1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("seqDelView", "2", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("seqDelView", "3", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("seqDelView", "4", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("seqDelView", "5", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("seqDelView", "6", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("seqDelView", "7", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("seqDelView", "8", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("seqDelView", "9", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("seqDelView", "10", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("seqDelView", "\347\256\227\346\263\225\345\214\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class seqDelView: public Ui_seqDelView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQDELVIEW_H
