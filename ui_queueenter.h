/********************************************************************************
** Form generated from reading UI file 'queueenter.ui'
**
** Created: Sat Feb 25 17:36:34 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUEUEENTER_H
#define UI_QUEUEENTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueueEnter
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *enterButton;
    QLabel *EnterLabel;
    QLineEdit *enterLineEdit;
    QLabel *OutLabel;
    QLineEdit *outLineEdit;
    QPushButton *outButton;
    QFrame *line;
    QFrame *line_2;
    QPushButton *explainButton;
    QPushButton *backButton;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_14;
    QGroupBox *groupBox_3;
    QLabel *label;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QGroupBox *groupBox_4;
    QLabel *label_30;
    QLabel *label_29;
    QLabel *label_33;
    QLabel *label_31;
    QLabel *label_28;
    QLabel *label_34;
    QLabel *label_32;
    QMenuBar *menubar;

    void setupUi(QMainWindow *QueueEnter)
    {
        if (QueueEnter->objectName().isEmpty())
            QueueEnter->setObjectName(QString::fromUtf8("QueueEnter"));
        QueueEnter->resize(735, 757);
        centralwidget = new QWidget(QueueEnter);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 701, 141));
        enterButton = new QPushButton(groupBox);
        enterButton->setObjectName(QString::fromUtf8("enterButton"));
        enterButton->setGeometry(QRect(30, 80, 75, 23));
        EnterLabel = new QLabel(groupBox);
        EnterLabel->setObjectName(QString::fromUtf8("EnterLabel"));
        EnterLabel->setGeometry(QRect(20, 40, 71, 20));
        enterLineEdit = new QLineEdit(groupBox);
        enterLineEdit->setObjectName(QString::fromUtf8("enterLineEdit"));
        enterLineEdit->setGeometry(QRect(80, 40, 61, 20));
        OutLabel = new QLabel(groupBox);
        OutLabel->setObjectName(QString::fromUtf8("OutLabel"));
        OutLabel->setGeometry(QRect(226, 41, 81, 21));
        outLineEdit = new QLineEdit(groupBox);
        outLineEdit->setObjectName(QString::fromUtf8("outLineEdit"));
        outLineEdit->setGeometry(QRect(283, 40, 71, 20));
        outLineEdit->setReadOnly(true);
        outButton = new QPushButton(groupBox);
        outButton->setObjectName(QString::fromUtf8("outButton"));
        outButton->setGeometry(QRect(253, 80, 75, 23));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(175, 17, 20, 111));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(390, 17, 20, 111));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        explainButton = new QPushButton(groupBox);
        explainButton->setObjectName(QString::fromUtf8("explainButton"));
        explainButton->setGeometry(QRect(462, 57, 75, 23));
        backButton = new QPushButton(groupBox);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(570, 57, 75, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 170, 701, 291));
        lineEdit_11 = new QLineEdit(groupBox_2);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(308, 83, 22, 22));
        lineEdit_11->setFrame(false);
        lineEdit_11->setReadOnly(true);
        lineEdit_10 = new QLineEdit(groupBox_2);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(291, 122, 22, 22));
        lineEdit_10->setFrame(false);
        lineEdit_10->setReadOnly(true);
        lineEdit_12 = new QLineEdit(groupBox_2);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(350, 55, 23, 22));
        lineEdit_12->setFrame(false);
        lineEdit_12->setReadOnly(true);
        lineEdit_1 = new QLineEdit(groupBox_2);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(395, 54, 23, 23));
        lineEdit_1->setFrame(false);
        lineEdit_1->setReadOnly(true);
        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(435, 81, 22, 23));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(456, 123, 21, 20));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(true);
        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(291, 156, 22, 21));
        lineEdit_9->setFrame(false);
        lineEdit_9->setReadOnly(true);
        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(311, 196, 21, 20));
        lineEdit_8->setFrame(false);
        lineEdit_8->setReadOnly(true);
        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(352, 222, 23, 21));
        lineEdit_7->setFrame(false);
        lineEdit_7->setReadOnly(true);
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(455, 156, 21, 20));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(groupBox_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(438, 196, 20, 20));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(398, 220, 22, 22));
        lineEdit_6->setFrame(false);
        lineEdit_6->setReadOnly(true);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 260, 31, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(280, 220, 31, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 160, 31, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 125, 31, 21));
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 260, 31, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(280, 60, 31, 21));
        label_11->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(350, 20, 31, 21));
        label_12->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_1 = new QLabel(groupBox_2);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(400, 20, 31, 21));
        label_1->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 60, 31, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 120, 31, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(490, 160, 31, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(460, 220, 31, 21));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(30, 230, 131, 21));
        label_13->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(30, 260, 131, 21));
        label_14->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\256\213\344\275\223\";"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 470, 341, 251));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(12, 25, 361, 16));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(12, 45, 331, 16));
        label_15->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(12, 65, 411, 16));
        label_16->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(12, 85, 401, 16));
        label_17->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(12, 105, 381, 16));
        label_18->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(12, 125, 371, 16));
        label_19->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(12, 145, 371, 16));
        label_20->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(370, 470, 351, 251));
        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(14, 66, 411, 16));
        label_30->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(14, 46, 331, 16));
        label_29->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_33 = new QLabel(groupBox_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(14, 126, 371, 16));
        label_33->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_31 = new QLabel(groupBox_4);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(14, 86, 401, 16));
        label_31->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(14, 26, 361, 16));
        label_28->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_34 = new QLabel(groupBox_4);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(14, 146, 371, 16));
        label_34->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        label_32 = new QLabel(groupBox_4);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(14, 106, 381, 16));
        label_32->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        QueueEnter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QueueEnter);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 735, 23));
        QueueEnter->setMenuBar(menubar);

        retranslateUi(QueueEnter);

        QMetaObject::connectSlotsByName(QueueEnter);
    } // setupUi

    void retranslateUi(QMainWindow *QueueEnter)
    {
        QueueEnter->setWindowTitle(QApplication::translate("QueueEnter", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QueueEnter", "\345\212\237\350\203\275\345\214\272", 0, QApplication::UnicodeUTF8));
        enterButton->setText(QApplication::translate("QueueEnter", "\345\205\245\351\230\237", 0, QApplication::UnicodeUTF8));
        EnterLabel->setText(QApplication::translate("QueueEnter", "\345\205\245\351\230\237\345\205\203\347\264\240\357\274\232", 0, QApplication::UnicodeUTF8));
        OutLabel->setText(QApplication::translate("QueueEnter", "\345\207\272\351\230\237\345\205\203\347\264\240\357\274\232", 0, QApplication::UnicodeUTF8));
        outButton->setText(QApplication::translate("QueueEnter", "\345\207\272\351\230\237", 0, QApplication::UnicodeUTF8));
        explainButton->setText(QApplication::translate("QueueEnter", "\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("QueueEnter", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QueueEnter", "\346\274\224\347\244\272\345\214\272", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QueueEnter", "\342\206\221", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QueueEnter", "\342\206\227", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QueueEnter", "\342\206\222", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QueueEnter", "\342\206\222", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QueueEnter", "\342\206\221", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QueueEnter", "\342\206\230", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("QueueEnter", "\342\206\223", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("QueueEnter", "\342\206\223", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QueueEnter", "\342\206\231", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QueueEnter", "\342\206\220", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QueueEnter", "\342\206\220", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QueueEnter", "\342\206\226", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("QueueEnter", "\342\206\222 \357\274\232\351\230\237\345\260\276\344\275\215\347\275\256", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("QueueEnter", "<html><head/><body><p><span style=\" color:#ff0000;\">\342\206\222</span> \357\274\232\351\230\237\351\246\226\344\275\215\347\275\256</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("QueueEnter", "\345\205\245\351\230\237\347\256\227\346\263\225\345\214\272", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("QueueEnter", "\345\207\272\351\230\237\347\256\227\346\263\225\345\214\272", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("QueueEnter", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QueueEnter: public Ui_QueueEnter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUEUEENTER_H
