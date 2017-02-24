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
    QQueue<char> save;//�洢��������
    QQueue<char> temp;//�洢��������
    int  Len;//���� ���г���
    int endPointer;//��β λ��

    void display(char data,int place,bool status);//������ʾ����
    void setColor(int num,QPalette Color);//���ü�ͷ��ɫ
    void sleepOneSecond();



    QPalette startColor;//���׼�ͷ��ɫ
    QPalette endColor;//��β��ͷ��ɫ
    QPalette disColor;//����ʾʱ ��ͷ��ɫ
    QPalette redColor;
    QPalette blackColor;

};

#endif // QUEUEENTER_H
