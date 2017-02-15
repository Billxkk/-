#ifndef SEQUNIVIEW_H
#define SEQUNIVIEW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QDebug>
#include <QLabel>

namespace Ui {
class seqUniView;
}

class seqUniView : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit seqUniView(QWidget *parent = 0);
    ~seqUniView();
    void refresh();
    void display(int,QString);
    void sleepOneSecond();
    void animationOne(int);//���Ƶ�һ�������ƶ�
    void animationTwo(int);//���Ƶڶ��������ƶ�
    void animationThree(int);//���ƱȽ�ֵ����ʾ
    QString elementOne;//��һ������
    QString elementTwo;//�ڶ�������
    int lenOne;//��һ�����ݵĳ���
    int lenTwo;//�ڶ������ݵĳ���
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::seqUniView *ui;
    bool pause;
    bool startSign;

    QElapsedTimer t;
    QPalette currentColor;
    QPalette elseColor;

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

    QLabel *word1;//�㷨���
    QLabel *word2;
    QLabel *word3;
    QLabel *word4;
    QLabel *word5;
    QLabel *word6;
    QLabel *word7;
    QLabel *word8;
    QLabel *word9;
    QLabel *word10;
    QLabel *word11;
    QLabel *word12;
    QLabel *word13;
    QLabel *word14;
    QLabel *word15;
    QLabel *word16;
    QFont ft;
    QPalette redColor;
    QPalette blackColor;



};

#endif // SEQUNIVIEW_H
