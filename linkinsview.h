#ifndef LINKINSVIEW_H
#define LINKINSVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QLabel>
#include <QElapsedTimer>
#include <QDebug>



namespace Ui {
class linkInsView;
}

class linkInsView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit linkInsView(QWidget *parent = 0);
    ~linkInsView();
    void animationOne(int);
    void animationTwo(int);
    void animationThree(int);
    void animationFour(int);
    void display(int,QString);
    void disappear(int);
    void refresh();
    void sleepOnesecond();
    QString elem;
    QString element;
    int len;
    int place;
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::linkInsView *ui;

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

    QFont ft;
    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;
    QPalette redColor;
    QPalette blackColor;
};

#endif // LINKINSVIEW_H
