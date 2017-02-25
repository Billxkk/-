#ifndef STACKOUTVIEW_H
#define STACKOUTVIEW_H

#include  <QMainWindow>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QDebug>
#include <QLabel>

namespace Ui {
class stackOutView;
}

class stackOutView : public QWidget
{
    Q_OBJECT

public:
    explicit stackOutView(QWidget *parent = 0);
    ~stackOutView();
    void refresh();
    void display(int,QString);
    void sleepOneSecond();
    void controlTwo(int); //����ԭʼ�����ƶ�

    QString elementTwo;//ԭʼ����
    int lenTwo;//ԭʼ���ݵĳ���

private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::stackOutView *ui;
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
    QFont ft;
    QPalette redColor;
    QPalette blackColor;
};

#endif // STACKOUTVIEW_H
