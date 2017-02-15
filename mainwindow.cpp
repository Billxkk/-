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

void MainWindow::aboutAction_slot()//���ڴ���
{
     QMessageBox::about(NULL,"����","displayed information");
}

void MainWindow::helpAction_slot()//��������
{
    QMessageBox::about(NULL,"����","displayed information ");
}

void MainWindow::on_seqInsButton_clicked()//˳�����밴ť ���
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳���"),
                                            tr("����˳���"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    if(!ok){
        qDebug("!ok");
        return;
    }
    QString elem = QInputDialog::getText(this,
                                         tr("����Ԫ��"),
                                         tr("��������Ԫ��"),
                                         QLineEdit::Normal,
                                         "v",
                                         &ok);
    if(!ok){
        qDebug("!ok");
        return;
    }
    int place = QInputDialog::getInteger(this,
                                         tr("����λ��"),
                                         tr("�������λ��"),3,0,Origin.size()+1,1,&ok);
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

void MainWindow::on_seqDelButton_clicked()//˳���ɾ����ť ���
{
    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳���"),
                                            tr("����˳���"),
                                            QLineEdit::Normal,
                                            "asdfqwer",
                                            &ok);
    if(!ok){
        return;
    }
    int position = QInputDialog::getInteger(this,
                                         tr("ɾ��λ��"),
                                         tr("����ɾ��λ��"),3,0,Origin.size(),1,&ok);
    if(!ok){
        return;
    }
    seqDelview=new seqDelView();
    seqDelview->elementdel=Origin;
    seqDelview->position=position;
    seqDelview->len=Origin.size()-1;
    seqDelview->show();
}

void MainWindow::on_seqUniButton_clicked()//˳���ϲ���ť ���
{
    bool ok;
    QString OriginOne=QInputDialog::getText(this,
                                         tr("˳���"),
                                         tr("�������һ������"),
                                         QLineEdit::Normal,
                                         "13579",
                                         &ok);
    if(!ok){
        return;
    }
    QString OriginTwo=QInputDialog::getText(this,
                                         tr("˳���"),
                                         tr("�������һ������"),
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


void MainWindow::on_linkCreatButton_clicked()//��������ť
{

}

void MainWindow::on_linkInsButton_clicked()//������밴ť
{

}

void MainWindow::on_linkDelButton_clicked()//����ɾ����ť
{

}

void MainWindow::on_enterStackButton_clicked()//��ջ��ť
{

}

void MainWindow::on_outStackButton_clicked()//��ջ��ť
{

}

void MainWindow::on_enterQueueButton_clicked()//��Ӱ�ť
{

}

void MainWindow::on_outQueueButton_clicked()//���Ӱ�ť
{

}
