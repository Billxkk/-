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
#include"linkinsview.h"
#include"linkdelview.h"

#include"queueenter.h"

#include"stackinview.h"
#include"stackoutview.h"

#include"treemidtravel.h"
#include"treeprotravel.h"
#include"treereartravel.h"

#include"bfs_graph.h"
#include"dfs_graph.h"

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

    linkCreaatNodeHead  *linkCreatHead;
    linkInsView *linkInsview;
    linkDelView *linkDelview;

    QueueEnter *circleQueue;

    stackInView *stackinView;
    stackOutView *stackoutView;

    TreeProTravel *TreePro;
    TreeMidTravel *TreeMid;
    TreeRearTravel *TreeRear;

    DFS_Graph *dfs_graph;
    BFS_Graph *bfs_graph;



private slots:
    void aboutAction_slot();//关于窗口 槽
    void helpAction_slot();//帮助窗口 槽

    void on_seqDelButton_clicked();//顺序表删除按钮 点击槽
    void on_seqInsButton_clicked();//顺序表插入
    void on_seqUniButton_clicked();//顺序表合并


    void on_linkCreatButton_clicked();
    void on_linkInsButton_clicked();
    void on_linkDelButton_clicked();
    void on_enterStackButton_clicked();
    void on_outStackButton_clicked();

    void on_circleQueueButton_clicked();
    void on_proButton_clicked();
    void on_MidButton_clicked();
    void on_rearButton_clicked();
    void on_dfsButton_clicked();
    void on_bfsButton_clicked();
};

#endif // MAINWINDOW_H
