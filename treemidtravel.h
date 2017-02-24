#ifndef TREEMIDTRAVEL_H
#define TREEMIDTRAVEL_H

#include <QMainWindow>
#include <QElapsedTimer>
#include <QMessageBox>
#include <QDebug>
#include <QPainter>
#include <QLabel>

namespace Ui {
class TreeMidTravel;
}

class TreeMidTravel : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TreeMidTravel(QWidget *parent = 0);
    ~TreeMidTravel();
    void animationOne(int,bool);//控制lineEdit的显示
        void animationTwo(int);//控制箭头的显示
        void inorder(int);
        void sleepOnesecond();
        QString element;

protected:
    void paintEvent(QPaintEvent *);
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::TreeMidTravel *ui;
        bool pause;
        bool startSign;
        void stackNotEmpty(int i);//命名栈字符


        QLabel * the1;
        QLabel * the2;
        QLabel * the3;
        QLabel * the4;
        QLabel * the5;
        QLabel * the6;
        QLabel * the7;

        QElapsedTimer t;
        QPalette currentColor;
        QPalette elseColor;
        QPalette redColor;
        QPalette blackColor;
};

#endif // TREEMIDTRAVEL_H
