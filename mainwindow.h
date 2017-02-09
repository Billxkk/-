#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QButtonGroup>
#include<QPushButton>
#include<QWidget>

#include"seqinsview.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;

    seqInsView *seqInsview;



private slots:
    void aboutAction_slot();//���ڴ��� ��
    void helpAction_slot();//�������� ��

    void on_seqDelButton_clicked();//˳���ɾ����ť �����
    void on_seqInsButton_clicked();//˳������
    void on_seqUniButton_clicked();//˳���ϲ�

};

#endif // MAINWINDOW_H
