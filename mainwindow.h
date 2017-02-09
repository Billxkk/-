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
    void aboutAction_slot();//关于窗口 槽
    void helpAction_slot();//帮助窗口 槽

    void on_seqDelButton_clicked();//顺序表删除按钮 点击槽
    void on_seqInsButton_clicked();//顺序表插入
    void on_seqUniButton_clicked();//顺序表合并

};

#endif // MAINWINDOW_H
