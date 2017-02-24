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
    this->setStyleSheet("QMainWindow{background-image: url(:/img/CoverBackground1.jpg)}");
    ui->tabWidget->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background:  transparent; }");

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
                                         tr("������ڶ�������"),
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


void MainWindow::on_linkCreatButton_clicked()//��������ť ͷ�巨
{
    bool ok;
    QString OriginOne=QInputDialog::getText(this,
                                            tr("����"),
                                            tr("����������"),
                                            QLineEdit::Normal,
                                            "abcde",
                                            &ok);
    if(!ok){
        return;
    }
    linkCreatHead = new linkCreaatNodeHead;
    linkCreatHead->element=OriginOne;
    linkCreatHead->len=OriginOne.size();
    linkCreatHead->show();
}

void MainWindow::on_linkInsButton_clicked()//������밴ť
{
    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("����"),
                                         tr("����������"),
                                         QLineEdit::Normal,
                                         "abde",
                                         &ok);
    if(!ok){
        return;
    }
    QString elem = QInputDialog::getText(this,
                                         tr("����Ԫ��"),
                                         tr("���������Ԫ��"),
                                         QLineEdit::Normal,
                                         "c",
                                         &ok);
    if(!ok){
        return;
    }
    int place = QInputDialog::getInteger(this,
                                         tr("����λ��"),
                                         tr("���������λ��"),3,0,Origin.size()+1,1,&ok);
    if(!ok){
        return;
    }
    linkInsview = new linkInsView;
    linkInsview->element=Origin;
    linkInsview->elem=elem;
    linkInsview->place=place;
    linkInsview->len=Origin.size();
    if(linkInsview->len>9)
    {
        QMessageBox::information(this,"����","����̫��!");
        return;
    }

    linkInsview->show();
}

void MainWindow::on_linkDelButton_clicked()//����ɾ����ť
{
    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("����"),
                                         tr("����������"),
                                         QLineEdit::Normal,
                                         "abccde",
                                         &ok);
    if(!ok){
        return;
    }
    //Ĭ��ɾ����һ�����ֵ�Ԫ��
    QString ele=QInputDialog::getText(this,
                                       tr("ɾ��Ԫ��"),
                                       tr("������ɾ����Ԫ��(Ĭ��ɾ����һ�����ֵ�Ԫ��)"),
                                       QLineEdit::Normal,
                                       "c",
                                       &ok);
    if(!ok){
        return;
    }
    if(Origin.size()>10)
    {
        QMessageBox::information(this,"Error","Please check out your data!");
        return;
    }
    linkDelview = new linkDelView;
    linkDelview->element=Origin;
    linkDelview->elem=ele.data()[0];
    linkDelview->len=Origin.size();

    linkDelview->show();
}

void MainWindow::on_enterStackButton_clicked()//��ջ��ť
{

}

void MainWindow::on_outStackButton_clicked()//��ջ��ť
{

}



void MainWindow::on_circleQueueButton_clicked()//ѭ������ ��ӳ���
{
    circleQueue = new QueueEnter;

    circleQueue->show();
}

void MainWindow::on_proButton_clicked()//�����������
{
    TreePro = new TreeProTravel;
    TreePro->show();
}

void MainWindow::on_MidButton_clicked()//�����������
{
    TreeMid = new TreeMidTravel;
    TreeMid->show();
}

void MainWindow::on_rearButton_clicked()//���ĺ������
{
    TreeRear = new TreeRearTravel;
    TreeRear->show();
}

void MainWindow::on_dfsButton_clicked()//ͼ��������ȱ���
{
    dfs_graph = new DFS_Graph;
    dfs_graph->show();
}

void MainWindow::on_bfsButton_clicked()//ͼ�Ĺ�����ȱ���
{
    bfs_graph = new BFS_Graph;
    bfs_graph->show();
}
