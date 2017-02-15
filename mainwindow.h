#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QButtonGroup>
#include<QPushButton>
#include<QWidget>

#include"seqinsview.h"
#include"sequniview.h"
#include"seqdelview.h"
#include"linkcreaatnodehead.h"


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
    seqUniView *seqUniview;
    seqDelView *seqDelview;


private slots:
    void aboutAction_slot();//���ڴ��� ��
    void helpAction_slot();//�������� ��

    void on_seqDelButton_clicked();//˳���ɾ����ť �����
    void on_seqInsButton_clicked();//˳������
    void on_seqUniButton_clicked();//˳���ϲ�


    void on_linkCreatButton_clicked();
    void on_linkInsButton_clicked();
    void on_linkDelButton_clicked();
    void on_enterStackButton_clicked();
    void on_outStackButton_clicked();
    void on_enterQueueButton_clicked();
    void on_outQueueButton_clicked();
};

#endif // MAINWINDOW_H
