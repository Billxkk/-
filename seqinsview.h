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
    void animation(int);//���Ƽ�ͷ����ʾ

    QString  element;//ԭʼ�ַ���
    int place;//����λ��
    QString elem;//�����ַ�
    int len;//ԭʼ�ַ��� ����
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::seqInsView *ui;
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

    QLabel *the1;
    QLabel *the2;
    QLabel *the3;
    QLabel *the4;
    QLabel *the5;
    QLabel *the6;
    QLabel *the7;
    QLabel *the8;
    QLabel *the9;
    QPalette currentColor;//��ǰ��ͷ��ɫ
    QPalette elseColor;//������ͷ��ɫ

};

#endif // SEQINSVIEW_H
