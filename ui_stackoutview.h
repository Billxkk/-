/********************************************************************************
** Form generated from reading UI file 'stackoutview.ui'
**
** Created: Sat Mar 25 09:58:00 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKOUTVIEW_H
#define UI_STACKOUTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stackOutView
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
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *currentlineEdit;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QGroupBox *dockWidget;

    void setupUi(QWidget *stackOutView)
    {
        if (stackOutView->objectName().isEmpty())
            stackOutView->setObjectName(QString::fromUtf8("stackOutView"));
        stackOutView->resize(1201, 583);
        ButtonBox = new QGroupBox(stackOutView);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setGeometry(QRect(20, 20, 650, 80));
        layoutWidget = new QWidget(ButtonBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 601, 25));
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

        groupBox = new QGroupBox(stackOutView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 650, 450));
        lineEdit_1 = new QLineEdit(groupBox);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(400, 110, 113, 20));
        lineEdit_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_1->setReadOnly(true);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(400, 140, 113, 20));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(400, 170, 113, 20));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(400, 200, 113, 20));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(400, 230, 113, 20));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(400, 260, 113, 20));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_6->setReadOnly(true);
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(400, 290, 113, 20));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_7->setReadOnly(true);
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(400, 320, 113, 20));
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_8->setReadOnly(true);
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(400, 350, 113, 20));
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_9->setReadOnly(true);
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(400, 380, 113, 20));
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        lineEdit_10->setReadOnly(true);
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(553, 40, 25, 25));
        lineEdit_20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_20->setReadOnly(true);
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(13, 40, 25, 25));
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_11->setReadOnly(true);
        lineEdit_12 = new QLineEdit(groupBox);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(73, 40, 25, 25));
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_12->setReadOnly(true);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(133, 40, 25, 25));
        lineEdit_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_13->setReadOnly(true);
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(193, 40, 25, 25));
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_14->setReadOnly(true);
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(253, 40, 25, 25));
        lineEdit_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_15->setReadOnly(true);
        lineEdit_16 = new QLineEdit(groupBox);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(313, 40, 25, 25));
        lineEdit_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_16->setReadOnly(true);
        lineEdit_17 = new QLineEdit(groupBox);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(373, 40, 25, 25));
        lineEdit_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_17->setReadOnly(true);
        lineEdit_18 = new QLineEdit(groupBox);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(433, 40, 25, 25));
        lineEdit_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_18->setReadOnly(true);
        lineEdit_19 = new QLineEdit(groupBox);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(493, 40, 25, 25));
        lineEdit_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit_19->setReadOnly(true);
        currentlineEdit = new QLineEdit(groupBox);
        currentlineEdit->setObjectName(QString::fromUtf8("currentlineEdit"));
        currentlineEdit->setGeometry(QRect(170, 250, 113, 20));
        currentlineEdit->setReadOnly(true);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 254, 80, 12));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(400, 90, 3, 320));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(400, 410, 115, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(513, 90, 3, 320));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        dockWidget = new QGroupBox(stackOutView);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setGeometry(QRect(680, 24, 500, 545));

        retranslateUi(stackOutView);

        QMetaObject::connectSlotsByName(stackOutView);
    } // setupUi

    void retranslateUi(QWidget *stackOutView)
    {
        stackOutView->setWindowTitle(QApplication::translate("stackOutView", "Form", 0, QApplication::UnicodeUTF8));
        ButtonBox->setTitle(QApplication::translate("stackOutView", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        startButton->setText(QApplication::translate("stackOutView", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        pauseButton->setText(QApplication::translate("stackOutView", "\346\232\202\345\201\234/\347\273\247\347\273\255", 0, QApplication::UnicodeUTF8));
        frashButton->setText(QApplication::translate("stackOutView", "\345\244\215\344\275\215", 0, QApplication::UnicodeUTF8));
        explainButton->setText(QApplication::translate("stackOutView", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("stackOutView", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("stackOutView", "GroupBox", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("stackOutView", "\345\207\272\346\240\210\345\205\203\347\264\240\344\270\252\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        dockWidget->setTitle(QApplication::translate("stackOutView", "\347\256\227\346\263\225\345\214\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class stackOutView: public Ui_stackOutView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKOUTVIEW_H
