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
    QImage seqImg(":/img/seqBig.png");
    QImage linkImg(":/img/linkBig.png");
    QImage queueImg(":/img/queueBig.png");
    QImage stackImg(":/img/stackBig.png");
    QImage treeImg(":/img/treeBig.png");
    QImage graphImg(":/img/graphBig.png");

    ui->SeqBigImg->setPixmap(QPixmap::fromImage(seqImg));
    ui->SeqBigImg->setScaledContents(true);
    ui->LinkBigImg->setPixmap(QPixmap::fromImage(linkImg));
    ui->LinkBigImg->setScaledContents(true);
    ui->QueueBigImg->setPixmap(QPixmap::fromImage(queueImg));
    ui->QueueBigImg->setScaledContents(true);
    ui->StackBigImg->setPixmap(QPixmap::fromImage(stackImg));
    ui->StackBigImg->setScaledContents(true);
    ui->TreeBigImg->setPixmap(QPixmap::fromImage(treeImg));
    ui->TreeBigImg->setScaledContents(true);
    ui->GraphBigImg->setPixmap(QPixmap::fromImage(graphImg));
    ui->GraphBigImg->setScaledContents(true);


    ui->seqDelButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");//��ͼƬ��䰴ť������ɫ
    ui->seqInsButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");
    ui->seqUniButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");

    ui->linkCreatButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");
    ui->linkDelButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");
    ui->linkInsButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");

    ui->circleQueueButton->setStyleSheet("border-image: url(./img/queue.png) 0 0 0 0");

    ui->enterStackButton->setStyleSheet("border-image: url(./img/stack.png) 0 0 0 0");
    ui->outStackButton->setStyleSheet("border-image: url(./img/stack.png) 0 0 0 0");

    ui->bfsButton->setStyleSheet("border-image: url(./img/graph.png) 0 0 0 0");
    ui->dfsButton->setStyleSheet("border-image: url(./img/graph.png) 0 0 0 0");

    ui->MidButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");
    ui->proButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");
    ui->rearButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");

    this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
    this->setStyleSheet("QMainWindow{background-image: url(:/img/CoverBackground1.jpg)}");


    QObject::connect(ui->aboutAction,SIGNAL(triggered()),this,SLOT(aboutAction_slot()));
    QObject::connect(ui->helpAction,SIGNAL(triggered()),this,SLOT(helpAction_slot()));


}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::aboutAction_slot()//���ڴ���
{
     QMessageBox::about(NULL,"����",tr(" <p><b>Copyright  Feb. 2017  By  ��˾� ������������</b></p>"));
}

void MainWindow::helpAction_slot()//��������
{
    QMessageBox::about(NULL,"����",tr("<p>�������һ����̬��ʾ���ݽṹ�㷨ִ�й��̵ĸ�����ѧ�����"
                                    "�û���������������������ݣ������ݹ�ģ�����������£������ҿ���������㷨���й�����"
                                    "���п��Ƶ�����</p>"));
}

void MainWindow::on_seqInsButton_clicked()//˳�����밴ť ���
{

     ui->seqInsButton->setStyleSheet("border-image: url(./img/seq-1.png) 0 0 0 0");
     sleepSpeed();
      ui->seqInsButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");

    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳������"),
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

    ui->seqDelButton->setStyleSheet("border-image: url(./img/seq-1.png) 0 0 0 0");
    sleepSpeed();
     ui->seqDelButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");

    bool ok;
    QString  Origin = QInputDialog::getText(this,
                                            tr("˳���ɾ��"),
                                            tr("����˳���(������ʮ��Ԫ��)"),
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
    ui->seqUniButton->setStyleSheet("border-image: url(./img/seq-1.png) 0 0 0 0");
    sleepSpeed();
     ui->seqUniButton->setStyleSheet("border-image: url(./img/seq.png) 0 0 0 0");

    bool ok;
    QString OriginOne=QInputDialog::getText(this,
                                         tr("˳���ϲ�"),
                                         tr("�������һ������"),
                                         QLineEdit::Normal,
                                         "13579",
                                         &ok);
    if(!ok){
        return;
    }
    QString OriginTwo=QInputDialog::getText(this,
                                         tr("˳���ϲ�"),
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
    ui->linkCreatButton->setStyleSheet("border-image: url(./img/link-1.png) 0 0 0 0");
    sleepSpeed();
     ui->linkCreatButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");

    bool ok;
    QString OriginOne=QInputDialog::getText(this,
                                            tr("������"),
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
    ui->linkInsButton->setStyleSheet("border-image: url(./img/link-1.png) 0 0 0 0");
    sleepSpeed();
     ui->linkInsButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");

    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("�������"),
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
    ui->linkDelButton->setStyleSheet("border-image: url(./img/link-1.png) 0 0 0 0");
    sleepSpeed();
     ui->linkDelButton->setStyleSheet("border-image: url(./img/link.png) 0 0 0 0");

    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("����ɾ��"),
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
    ui->enterStackButton->setStyleSheet("border-image: url(./img/stack-1.png) 0 0 0 0");
    sleepSpeed();
     ui->enterStackButton->setStyleSheet("border-image: url(./img/stack.png) 0 0 0 0");

    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("˳��ջ��ջ"),
                                         tr("������ԭʼ����"),
                                         QLineEdit::Normal,
                                         "asdfqwer",
                                         &ok);
    if(!ok){
        return;
    }
    stackinView =new stackInView;
    stackinView->elementOne=Origin;
    stackinView->show();
}

void MainWindow::on_outStackButton_clicked()//��ջ��ť
{
    ui->outStackButton->setStyleSheet("border-image: url(./img/stack-1.png) 0 0 0 0");
    sleepSpeed();
     ui->outStackButton->setStyleSheet("border-image: url(./img/stack.png) 0 0 0 0");

    bool ok;
    QString Origin=QInputDialog::getText(this,
                                         tr("˳��ջ��ջ"),
                                         tr("������ԭʼ����"),
                                         QLineEdit::Normal,
                                         "abcsdfqwer",
                                         &ok);
    if(!ok){
        return;
    }
    stackoutView =new stackOutView;
    stackoutView->elementTwo=Origin;
    stackoutView->show();
}



void MainWindow::on_circleQueueButton_clicked()//ѭ������ ��ӳ���
{
    ui->circleQueueButton->setStyleSheet("border-image: url(./img/queue-1.png) 0 0 0 0");
    sleepSpeed();
     ui->circleQueueButton->setStyleSheet("border-image: url(./img/queue.png) 0 0 0 0");

    circleQueue = new QueueEnter;

    circleQueue->show();
}

void MainWindow::on_proButton_clicked()//�����������
{
    ui->proButton->setStyleSheet("border-image: url(./img/tree-1.png) 0 0 0 0");
    sleepSpeed();
     ui->proButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");

    TreePro = new TreeProTravel;
    TreePro->show();
}

void MainWindow::on_MidButton_clicked()//�����������
{
    ui->MidButton->setStyleSheet("border-image: url(./img/tree-1.png) 0 0 0 0");
    sleepSpeed();
     ui->MidButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");

    TreeMid = new TreeMidTravel;
    TreeMid->show();
}

void MainWindow::on_rearButton_clicked()//���ĺ������
{
    ui->rearButton->setStyleSheet("border-image: url(./img/tree-1.png) 0 0 0 0");
    sleepSpeed();
     ui->rearButton->setStyleSheet("border-image: url(./img/tree.png) 0 0 0 0");

    TreeRear = new TreeRearTravel;
    TreeRear->show();
}

void MainWindow::on_dfsButton_clicked()//ͼ��������ȱ���
{
    ui->dfsButton->setStyleSheet("border-image: url(./img/graph-1.png) 0 0 0 0");
    sleepSpeed();
     ui->dfsButton->setStyleSheet("border-image: url(./img/graph.png) 0 0 0 0");

    dfs_graph = new DFS_Graph;
    dfs_graph->show();
}

void MainWindow::on_bfsButton_clicked()//ͼ�Ĺ�����ȱ���
{
    ui->bfsButton->setStyleSheet("border-image: url(./img/graph-1.png) 0 0 0 0");
    sleepSpeed();
     ui->bfsButton->setStyleSheet("border-image: url(./img/graph.png) 0 0 0 0");

    bfs_graph = new BFS_Graph;
    bfs_graph->show();
}

void MainWindow::sleepSpeed(int time)
{
    t.start();
    while(t.elapsed()<time)
    {
        QCoreApplication::processEvents();
    }
}
