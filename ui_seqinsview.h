/********************************************************************************
** Form generated from reading UI file 'seqinsview.ui'
**
** Created: Thu Feb 9 16:31:32 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEQINSVIEW_H
#define UI_SEQINSVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seqInsView
{
public:
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
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_9;
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
    QLineEdit *currentlineEdit;
    QLabel *label;

    void setupUi(QWidget *seqInsView)
    {
        if (seqInsView->objectName().isEmpty())
            seqInsView->setObjectName(QString::fromUtf8("seqInsView"));
        seqInsView->resize(629, 539);
        ButtonBox = new QGroupBox(seqInsView);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(10, 20, 601, 80));
        layoutWidget = new QWidget(ButtonBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 541, 25));
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

        groupBox = new QGroupBox(seqInsView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 120, 601, 271));
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
        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(13, 40, 25, 25));
        lineEdit_1->setMinimumSize(QSize(25, 25));
        lineEdit_1->setMaximumSize(QSize(25, 25));
        lineEdit_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(73, 40, 25, 25));
        lineEdit_2->setMinimumSize(QSize(25, 25));
        lineEdit_2->setMaximumSize(QSize(25, 25));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(133, 40, 25, 25));
        lineEdit_3->setMinimumSize(QSize(25, 25));
        lineEdit_3->setMaximumSize(QSize(25, 25));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(198, 40, 25, 25));
        lineEdit_4->setMinimumSize(QSize(25, 25));
        lineEdit_4->setMaximumSize(QSize(25, 25));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(259, 40, 25, 25));
        lineEdit_5->setMinimumSize(QSize(25, 25));
        lineEdit_5->setMaximumSize(QSize(25, 25));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(320, 40, 25, 25));
        lineEdit_6->setMinimumSize(QSize(25, 25));
        lineEdit_6->setMaximumSize(QSize(25, 25));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(380, 40, 25, 25));
        lineEdit_7->setMinimumSize(QSize(25, 25));
        lineEdit_7->setMaximumSize(QSize(25, 25));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(440, 40, 25, 25));
        lineEdit_8->setMinimumSize(QSize(25, 25));
        lineEdit_8->setMaximumSize(QSize(25, 25));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(560, 40, 25, 25));
        lineEdit_10->setMinimumSize(QSize(25, 25));
        lineEdit_10->setMaximumSize(QSize(25, 25));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(500, 40, 25, 25));
        lineEdit_9->setMinimumSize(QSize(25, 25));
        lineEdit_9->setMaximumSize(QSize(25, 25));
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 0, 0);"));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(13, 120, 25, 25));
        lineEdit_11->setMinimumSize(QSize(25, 25));
        lineEdit_11->setMaximumSize(QSize(25, 25));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(73, 120, 25, 25));
        lineEdit_12->setMinimumSize(QSize(25, 25));
        lineEdit_12->setMaximumSize(QSize(25, 25));
        lineEdit_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(136, 120, 25, 25));
        lineEdit_13->setMinimumSize(QSize(25, 25));
        lineEdit_13->setMaximumSize(QSize(25, 25));
        lineEdit_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(199, 120, 25, 25));
        lineEdit_14->setMinimumSize(QSize(25, 25));
        lineEdit_14->setMaximumSize(QSize(25, 25));
        lineEdit_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(259, 120, 25, 25));
        lineEdit_15->setMinimumSize(QSize(25, 25));
        lineEdit_15->setMaximumSize(QSize(25, 25));
        lineEdit_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(320, 120, 25, 25));
        lineEdit_16->setMinimumSize(QSize(25, 25));
        lineEdit_16->setMaximumSize(QSize(25, 25));
        lineEdit_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(380, 120, 25, 25));
        lineEdit_17->setMinimumSize(QSize(25, 25));
        lineEdit_17->setMaximumSize(QSize(25, 25));
        lineEdit_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(440, 120, 25, 25));
        lineEdit_18->setMinimumSize(QSize(25, 25));
        lineEdit_18->setMaximumSize(QSize(25, 25));
        lineEdit_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(500, 120, 25, 25));
        lineEdit_19->setMinimumSize(QSize(25, 25));
        lineEdit_19->setMaximumSize(QSize(25, 25));
        lineEdit_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(560, 120, 25, 25));
        lineEdit_20->setMinimumSize(QSize(25, 25));
        lineEdit_20->setMaximumSize(QSize(25, 25));
        lineEdit_20->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 255);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        currentlineEdit = new QLineEdit(groupBox);
        currentlineEdit->setObjectName(QString::fromUtf8("currentlineEdit"));
        currentlineEdit->setGeometry(QRect(160, 200, 113, 21));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 200, 101, 16));

        retranslateUi(seqInsView);

        QMetaObject::connectSlotsByName(seqInsView);
    } // setupUi

    void retranslateUi(QWidget *seqInsView)
    {
        seqInsView->setWindowTitle(QApplication::translate("seqInsView", "Form", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("seqInsView", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("seqInsView", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        pauseButton->setText(QApplication::translate("seqInsView", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        frashButton->setText(QApplication::translate("seqInsView", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton->setText(QApplication::translate("seqInsView", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("seqInsView", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("seqInsView", "\347\247\273\345\212\250\350\277\207\347\250\213\346\274\224\347\244\272:", 0, QApplication::UnicodeUTF8));
        lineEdit_1->setText(QString());
        lineEdit_7->setText(QString());
        label->setText(QApplication::translate("seqInsView", "\345\275\223\345\211\215\347\247\273\345\212\250\344\275\215\346\225\260:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class seqInsView: public Ui_seqInsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEQINSVIEW_H
