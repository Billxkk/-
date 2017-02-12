#ifndef SEQINSVIEW_H
#define SEQINSVIEW_H

#include <QWidget>
#include<QMessageBox>
#include <QElapsedTimer>
#include<QDebug>
#include<QLabel>

namespace Ui {
class seqInsView;
}

class seqInsView : public QWidget
{
    Q_OBJECT
    
public:
    explicit seqInsView(QWidget *parent = 0);
    ~seqInsView();
    void refresh();
    void display(int,QString);
    void sleepOneSecond();
    void animation(int);//控制箭头的显示

    QString  element;//原始字符组
    int place;//插入位置
    QString elem;//插入字符
    int len;//原始字符组 长度
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::seqInsView *ui;
    bool pause;//暂停标记
    bool startSign;//开始标记

    QLabel *num1;//算法内容语句
    QLabel *num2;
    QLabel *num3;
    QLabel *num4;
    QLabel *num5;
    QLabel *num6;
    QLabel *num7;
    QLabel *num8;
    QLabel *num9;
    QLabel *num10;
    QLabel *num11;
    QLabel *num12;
    QLabel *num13;
    QLabel *num14;
    QElapsedTimer t;
    QFont ft;//算法区 字符大小
    QPalette workingColor;//执行时颜色
    QPalette defaultColor;//默认颜色

    QLabel *the1;
    QLabel *the2;
    QLabel *the3;
    QLabel *the4;
    QLabel *the5;
    QLabel *the6;
    QLabel *the7;
    QLabel *the8;
    QLabel *the9;
    QPalette currentColor;//当前箭头颜色
    QPalette elseColor;//其他箭头颜色

};

#endif // SEQINSVIEW_H
