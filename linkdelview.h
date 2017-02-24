#ifndef LINKDELVIEW_H
#define LINKDELVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QElapsedTimer>
#include <QDebug>

namespace Ui {
class linkDelView;
}

class linkDelView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit linkDelView(QWidget *parent = 0);
    ~linkDelView();
    void display(int,QString);
    void disappearOne(int);//删除第一行的箭头
    void disappearTwo(int);//删除第二行的箭头
    void animationOne(int,bool);
    void AnimationOne(int);
    void AnimationTwo(int);
    void animationTwo(int,QPalette);
    void AnimationThree(int);
    void AnimationFour(int);
    void refresh();
    void sleepOnesecond();
    QChar elem;
    QString element;
    int len;
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::linkDelView *ui;
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
    QLabel *the14;
    QLabel *the15;
    QLabel *the16;
    QLabel *the17;
    QLabel *the18;
    QLabel *the19;
    QLabel *the20;
    QLabel *the21;
    QLabel *the22;
    QLabel *the23;
    QLabel *the24;
    QLabel *the25;
    QLabel *the26;
    QLabel *the27;
    QLabel *the28;
    QLabel *the29;

    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;
    QPalette redColor;
    QPalette blackColor;
};

#endif // LINKDELVIEW_H
