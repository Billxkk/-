#ifndef BFS_GRAPH_H
#define BFS_GRAPH_H

#include <QMainWindow>
#include <QLabel>
#include <QPainter>
#include <QElapsedTimer>
#include <QMessageBox>

namespace Ui {
class BFS_Graph;
}

class BFS_Graph : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit BFS_Graph(QWidget *parent = 0);
    ~BFS_Graph();
    void animationOne(int,bool);
    void animationTwo(int);
    void bfsorder(int);
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
    Ui::BFS_Graph *ui;
    bool pause;
    bool startSign;

    QLabel * the1;
    QLabel * the2;
    QLabel * the3;
    QLabel * the4;
    QLabel * the5;
    QLabel * the6;
    QLabel * the7;
    QLabel * the8;
    QLabel * the9;
    QLabel * the10;

    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;
};

#endif // BFS_GRAPH_H
