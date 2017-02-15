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

    QString elementdel; //ԭʼ�ַ���
    int position;  //ɾ��λ��
    QString elemdel;//ɾ���ַ�
    int len;       //ԭʼ�ַ�������
    
private slots:
    void on_startButton_2_clicked();

    void on_pauseButton_2_clicked();

    void on_frashButton_2_clicked();

    void on_explainButton_2_clicked();

    void on_backButton_2_clicked();

private:
    Ui::seqDelView *ui;

    bool pause;//��ͣ���
    bool startSign;//��ʼ���

    QLabel *num1;//�㷨�������
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
    QFont ft;//�㷨�� �ַ���С
    QPalette workingColor;//ִ��ʱ��ɫ
    QPalette defaultColor;//Ĭ����ɫ
};

#endif // SEQDELVIEW_H
