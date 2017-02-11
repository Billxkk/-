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

void MainWindow::aboutAction_slot()//���ڴ���
{
     QMessageBox::about(NULL,"����","displayed information");
}

void MainWindow::helpAction_slot()//��������
{
    QMessageBox::about(NULL,"����","displayed information ");
}

void MainWindow::on_seqInsButton_clicked()//˳������밴ť ���
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳���"),
                                            tr("����˳���"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    QString elem = QInputDialog::getText(this,
                                         tr("����Ԫ��"),
                                         tr("��������Ԫ��"),
                                         QLineEdit::Normal,
                                         "v",
                                         &ok);
    int place = QInputDialog::getInteger(this,
                                         tr("����λ��"),
                                         tr("�������λ��"),3,0,Origin.size()+1,1,&ok);

    seqInsview = new seqInsView();
    seqInsview->element=Origin;
    seqInsview->place = place;
    seqInsview->elem=elem;
    seqInsview->show();


}

void MainWindow::on_seqDelButton_clicked()//˳���ɾ����ť ���
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳���"),
                                            tr("����˳���"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    int place = QInputDialog::getInteger(this,
                                         tr("ɾ��λ��"),
                                         tr("����ɾ��λ��"),3,0,Origin.size(),1,&ok);

}

void MainWindow::on_seqUniButton_clicked()//˳����ϲ���ť ���
{

}