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
    void animationOne(int,bool);//����lineEdit����ʾ
        void animationTwo(int);//���Ƽ�ͷ����ʾ
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
        void stackNotEmpty(int i);//����ջ�ַ�


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
