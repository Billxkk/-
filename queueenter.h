#ifndef QUEUEENTER_H
#define QUEUEENTER_H

#include<QMainWindow>
#include<QPainter>
#include <QWidget>
#include<QLabel>
#include <QElapsedTimer>
#include<QMessageBox>
#include<QQueue>
#include<QDebug>


namespace Ui {
class QueueEnter;
}

class QueueEnter : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit QueueEnter(QWidget *parent = 0);
    ~QueueEnter();
    
protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_enterButton_clicked();

    void on_outButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::QueueEnter *ui;
    QQueue<char> save;//存储队列数据
    QQueue<char> temp;//存储队列数据
    int  Len;//计算 队列长度
    int endPointer;//队尾 位置

    void display(char data,int place,bool status);//方框显示数据
    void setColor(int num,QPalette Color);//设置箭头颜色
    void sleepOneSecond();



    QPalette startColor;//队首箭头颜色
    QPalette endColor;//队尾箭头颜色
    QPalette disColor;//不显示时 箭头颜色
    QPalette redColor;
    QPalette blackColor;

};

#endif // QUEUEENTER_H
