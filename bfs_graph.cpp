#include "bfs_graph.h"
#include "ui_bfs_graph.h"

BFS_Graph::BFS_Graph(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BFS_Graph)
{
    ui->setupUi(this);
    this->setWindowTitle("图的广度遍历");
            this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
                    this->setStyleSheet("QMainWindow{background-image: url(:/img/img2.jpg)}");
    pause=0;
    startSign=0;
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);

    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);

    ui->lineEdit_1->setText("A");
    ui->lineEdit_2->setText("B");
    ui->lineEdit_3->setText("H");
    ui->lineEdit_4->setText("C");
    ui->lineEdit_5->setText("D");
    ui->lineEdit_6->setText("I");
    ui->lineEdit_7->setText("J");
    ui->lineEdit_8->setText("E");
    ui->lineEdit_9->setText("F");
    ui->lineEdit_10->setText("G");

    the1 = new QLabel(ui->groupBox);
    the1->setText("↑");
    the1->setGeometry(220,45,25,25);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("↑");
    the2->setGeometry(100,95,25,25);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("↑");
    the3->setGeometry(340,95,25,25);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("↑");
    the4->setGeometry(50,155,25,25);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("↑");
    the5->setGeometry(155,155,25,25);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("↑");
    the6->setGeometry(280,155,25,25);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("↑");
    the7->setGeometry(400,155,25,25);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("↑");
    the8->setGeometry(120,205,25,25);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("↑");
    the9->setGeometry(180,205,25,25);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("↑");
    the10->setGeometry(210,155,25,25);
    the10->setPalette(elseColor);
}

BFS_Graph::~BFS_Graph()
{
    delete ui;
    delete the1;
    delete the2;
    delete the3;
    delete the4;
    delete the5;
    delete the6;
    delete the7;
    delete the8;
    delete the9;
    delete the10;
}

void BFS_Graph::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(250,215,155,240);
    painter.drawLine(275,215,370,240);
    painter.drawLine(130,265,105,300);
    painter.drawLine(155,265,180,300);
    painter.drawLine(180,325,175,350);
    painter.drawLine(205,325,210,350);
    painter.drawLine(370,265,335,300);
    painter.drawLine(395,265,430,300);
    painter.drawLine(235,350,240,325);
    painter.drawLine(175,362,210,362);
    painter.drawLine(205,312,240,312);
    painter.drawLine(335,312,430,312);
}

void BFS_Graph::animationOne(int i,bool judge)
{
    switch(i)
    {
    case 1:
        ui->lineEdit_1->setFrame(judge);
        break;
    case 2:
        ui->lineEdit_2->setFrame(judge);
        break;
    case 3:
        ui->lineEdit_3->setFrame(judge);
        break;
    case 4:
        ui->lineEdit_4->setFrame(judge);
        break;
    case 5:
        ui->lineEdit_5->setFrame(judge);
        break;
    case 6:
        ui->lineEdit_6->setFrame(judge);
        break;
    case 7:
        ui->lineEdit_7->setFrame(judge);
        break;
    case 8:
        ui->lineEdit_8->setFrame(judge);
        break;
    case 9:
        ui->lineEdit_9->setFrame(judge);
        break;
    case 10:
        ui->lineEdit_10->setFrame(judge);
        break;
    default:
        break;
    }
}

void BFS_Graph::animationTwo(int i)
{
    switch(i)
    {
    case 0:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 1:
        the1->setPalette(currentColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 2:
        the1->setPalette(elseColor);
        the2->setPalette(currentColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 3:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(currentColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 4:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(currentColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 5:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(currentColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 6:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(currentColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 7:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(currentColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 8:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(currentColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
        break;
    case 9:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(currentColor);
        the10->setPalette(elseColor);
        break;
    case 10:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void BFS_Graph::bfsorder(int i)
{
    QString temp;
    switch(i)
    {
    case 1:
        temp=ui->lineEdit_1->text();
        element+=temp;
        break;
    case 2:
        temp=ui->lineEdit_2->text();
        element+=temp;
        break;
    case 3:
        temp=ui->lineEdit_3->text();
        element+=temp;
        break;
    case 4:
        temp=ui->lineEdit_4->text();
        element+=temp;
        break;
    case 5:
        temp=ui->lineEdit_5->text();
        element+=temp;
        break;
    case 6:
        temp=ui->lineEdit_6->text();
        element+=temp;
        break;
    case 7:
        temp=ui->lineEdit_7->text();
        element+=temp;
        break;
    case 8:
        temp=ui->lineEdit_8->text();
        element+=temp;
        break;
    case 9:
        temp=ui->lineEdit_9->text();
        element+=temp;
        break;
    case 10:
        temp+=ui->lineEdit_10->text();
        element+=temp;
        break;
    default:
        break;
    }
}


void BFS_Graph::on_startButton_clicked()
{
    startSign=1;
    ui->startButton->setEnabled(false);

    ui->pauseButton->setEnabled(true);
    element="";
    int i;
    animationTwo(0);
    sleepOnesecond();
    for(i=1;i<=10;i++)
    {
        animationTwo(i);
        bfsorder(i);
        ui->lineEdit->setText(element);
        ui->inforlineEdit->setText("输出当前数据!");
        while(pause)
        {
            sleepOnesecond();
        }
        sleepOnesecond();
        animationOne(i,false);
        ui->inforlineEdit->setText("设置访问标志!");
        while(pause)
        {
            sleepOnesecond();
        }
        sleepOnesecond();
    }
    animationTwo(0);
    ui->inforlineEdit->setText("完成!");
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void BFS_Graph::on_pauseButton_clicked()
{
    if(!startSign)//演示未开始时暂停按钮无效
        return;
    if(!pause)
    {
        qDebug("if_1");

        pause=1;
    }
    else
    {
        qDebug("else_2");
        pause=0;
    }
}

void BFS_Graph::on_frashButton_clicked()
{
    int i;
    for(i=1;i<=10;i++)
    {
        animationOne(i,true);
    }
    ui->lineEdit->setText(NULL);
    ui->inforlineEdit->setText(NULL);
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void BFS_Graph::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","test information 测试 \n 转行");
}

void BFS_Graph::on_backButton_clicked()
{
    this->close();
}

void BFS_Graph::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}

