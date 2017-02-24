#ifndef DFS_GRAPH_H
#define DFS_GRAPH_H

#include <QMainWindow>
#include <QLabel>
#include <QPainter>
#include <QElapsedTimer>
#include <QMessageBox>

namespace Ui {
class DFS_Graph;
}

class DFS_Graph : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DFS_Graph(QWidget *parent = 0);
    ~DFS_Graph();
    void animationOne(int,bool);//����lineEdit����ʾ
    void animationTwo(int);//���Ƽ�ͷ����ʾ
    void dfsorder(int);
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
    Ui::DFS_Graph *ui;
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

#endif // DFS_GRAPH_H
