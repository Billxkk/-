#ifndef LINKCREAATNODEHEAD_H
#define LINKCREAATNODEHEAD_H

#include <QMainWindow>
#include<QLabel>
#include <QElapsedTimer>
#include<QMessageBox>

namespace Ui {
class linkCreaatNodeHead;
}

class linkCreaatNodeHead : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit linkCreaatNodeHead(QWidget *parent = 0);
    ~linkCreaatNodeHead();

    void animationOne(int);//控制第一行lineEdit的显示
    void animationTwo(int);//控制第二行lineEdit的显示
    void animationThree(int);//
    void animationFour(int);//
    void animationFive(int);
    void sleepOneSecond();
    void display(int,QString);
    QString element;
    int len;
    
private slots:
    void on_startButton_2_clicked();

    void on_pauseButton_2_clicked();

    void on_frashButton_2_clicked();

    void on_explainButton_2_clicked();

    void on_backButton_2_clicked();

private:
    Ui::linkCreaatNodeHead *ui;
    bool pause;
    bool startSign;
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

    QFont ft;
    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;
    QPalette redColor;
    QPalette blackColor;
};

#endif // LINKCREAATNODEHEAD_H
