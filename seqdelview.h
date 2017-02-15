#ifndef SEQDELVIEW_H
#define SEQDELVIEW_H

#include <QMainWindow>
#include<QLabel>
#include <QElapsedTimer>
#include<QMessageBox>

namespace Ui {
class seqDelView;
}

class seqDelView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit seqDelView(QWidget *parent = 0);
    ~seqDelView();

    void refresh();
    void display(int,QString);
    void sleepOneSecond();

    QString elementdel; //原始字符串
    int position;  //删除位置
    QString elemdel;//删除字符
    int len;       //原始字符串长度
    
private slots:
    void on_startButton_2_clicked();

    void on_pauseButton_2_clicked();

    void on_frashButton_2_clicked();

    void on_explainButton_2_clicked();

    void on_backButton_2_clicked();

private:
    Ui::seqDelView *ui;

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
};

#endif // SEQDELVIEW_H
