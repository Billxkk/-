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
    QString elem = QInputDialog::getText(this,
                                         tr("插入元素"),
                                         tr("输入插入的元素"),
                                         QLineEdit::Normal,
                                         "v",
                                         &ok);
    int place = QInputDialog::getInteger(this,
                                         tr("插入位置"),
                                         tr("输入插入位置"),3,0,Origin.size()+1,1,&ok);

    seqInsview = new seqInsView();
    seqInsview->element=Origin;
    seqInsview->place = place;
    seqInsview->elem=elem;
    seqInsview->show();
    seqInsview->refresh();

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
    int place = QInputDialog::getInteger(this,
                                         tr("删除位置"),
                                         tr("输入删除位置"),3,0,Origin.size(),1,&ok);

}

void MainWindow::on_seqUniButton_clicked()//顺序表合并按钮 点击
{

}
