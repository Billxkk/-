#ifndef STACKINVIEW_H
#define STACKINVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QDebug>
#include <QLabel>

namespace Ui {
class stackInView;
}

class stackInView : public QWidget
{
    Q_OBJECT

public:
    explicit stackInView(QWidget *parent = 0);
    ~stackInView();
    void refresh();
    void display(int,QString);
    void sleepOneSecond();
    void controlOne(int); //控制原始数据移动

    QString elementOne;//原始数据
    int lenOne;//原始数据的长度


private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::stackInView *ui;
    bool pause;
    bool startSign;

    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;

    QLabel *the1;
    QLabel *the2;
    QLabel *the3;
    QLabel *the4;
    QLabel *the5;
    QLabel *the6;
    QLabel *the7;
    QLabel *the8;
    QLabel *the9;
    QLabel *the10;
    QLabel *the11;
    QLabel *the12;
    QLabel *the13;
    QLabel *the14;
    QLabel *the15;
    QLabel *the16;
    QLabel *the17;
    QLabel *the18;
    QLabel *the19;
    QLabel *the20;


    QLabel *word1;//算法语句
    QLabel *word2;
    QLabel *word3;
    QLabel *word4;
    QLabel *word5;
    QLabel *word6;
    QLabel *word7;
    QLabel *word8;
    QLabel *word9;
    QLabel *word10;
    QLabel *word11;
    QFont ft;
    QPalette redColor;
    QPalette blackColor;
};

#endif // STACKINVIEW_H
