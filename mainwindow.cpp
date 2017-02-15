#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QObject>
#include<QMessageBox>
#include<QDialog>
#include<QInputDialog>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));

    QObject::connect(ui->aboutAction,SIGNAL(triggered()),this,SLOT(aboutAction_slot()));
    QObject::connect(ui->helpAction,SIGNAL(triggered()),this,SLOT(helpAction_slot()));


}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::aboutAction_slot()//关于窗口
{
     QMessageBox::about(NULL,"关于","displayed information");
}

void MainWindow::helpAction_slot()//帮助窗口
{
    QMessageBox::about(NULL,"帮助","displayed information ");
}

void MainWindow::on_seqInsButton_clicked()//顺序表插入按钮 点击
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("顺序表"),
                                            tr("输入顺序表"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    if(!ok){
        qDebug("!ok");
        return;
    }
    QString elem = QInputDialog::getText(this,
                                         tr("插入元素"),
                                         tr("输入插入的元素"),
                                         QLineEdit::Normal,
                                         "v",
                                         &ok);
    if(!ok){
        qDebug("!ok");
        return;
    }
    int place = QInputDialog::getInteger(this,
                                         tr("插入位置"),
                                         tr("输入插入位置"),3,0,Origin.size()+1,1,&ok);
    if(!ok){
        qDebug("!ok");
        return;
    }

    seqInsview = new seqInsView();
    seqInsview->element=Origin;
    seqInsview->place = place;
    seqInsview->elem=elem;
    seqInsview->show();


}

void MainWindow::on_seqDelButton_clicked()//顺序表删除按钮 点击
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("顺序表"),
                                            tr("输入顺序表"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    if(!ok){
        return;
    }
    int position = QInputDialog::getInteger(this,
                                         tr("删除位置"),
                                         tr("输入删除位置"),3,0,Origin.size(),1,&ok);
    if(!ok){
        return;
    }
    seqDelview=new seqDelView();
    seqDelview->elementdel=Origin;
    seqDelview->position=position;
    seqDelview->len=Origin.size()-1;
    seqDelview->show();
}

void MainWindow::on_seqUniButton_clicked()//顺序表合并按钮 点击
{
    bool ok;
    QString OriginOne=QInputDialog::getText(this,
                                         tr("顺序表"),
                                         tr("请输入第一组数据"),
                                         QLineEdit::Normal,
                                         "13579",
                                         &ok);
    if(!ok){
        return;
    }
    QString OriginTwo=QInputDialog::getText(this,
                                         tr("顺序表"),
                                         tr("请输入第一组数据"),
                                         QLineEdit::Normal,
                                         "2468",
                                         &ok);
    if(!ok){
        return;
    }
    seqUniview = new seqUniView;
    seqUniview->elementOne=OriginOne;
    seqUniview->elementTwo=OriginTwo;
    seqUniview->show();
}


void MainWindow::on_linkCreatButton_clicked()//链表创建按钮
{

}

void MainWindow::on_linkInsButton_clicked()//链表插入按钮
{

}

void MainWindow::on_linkDelButton_clicked()//链表删除按钮
{

}

void MainWindow::on_enterStackButton_clicked()//入栈按钮
{

}

void MainWindow::on_outStackButton_clicked()//出栈按钮
{

}

void MainWindow::on_enterQueueButton_clicked()//入队按钮
{

}

void MainWindow::on_outQueueButton_clicked()//出队按钮
{

}
