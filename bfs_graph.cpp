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
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;

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

    QFont uiLabel("Microsoft YaHei", 12, 75);
    ui->label->setFont(uiLabel);
    ui->label_2->setFont(uiLabel);
    ui->label_3->setFont(uiLabel);
    ui->label_4->setFont(uiLabel);
    ui->label_5->setFont(uiLabel);
    ui->label_6->setFont(uiLabel);
    ui->label_7->setFont(uiLabel);
    ui->label_8->setFont(uiLabel);
    ui->label_9->setFont(uiLabel);
    ui->label_10->setFont(uiLabel);
    ui->label_11->setFont(uiLabel);
    ui->label_12->setFont(uiLabel);
    ui->label_13->setFont(uiLabel);
    ui->label_14->setFont(uiLabel);
    ui->label_15->setFont(uiLabel);
    ui->label_16->setFont(uiLabel);
    ui->label_17->setFont(uiLabel);
    ui->label_18->setFont(uiLabel);
    ui->label_19->setFont(uiLabel);
    ui->label_20->setFont(uiLabel);

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

void BFS_Graph::ToShowFunctoin(int i){
    switch(i){
    case 1:
        ui->label->setPalette(redColor);
        sleepOnesecond();
        ui->label->setPalette(blackColor);
        break;
    case 2:
        ui->label_2->setPalette(redColor);
        sleepOnesecond();
        ui->label_2->setPalette(blackColor);
        break;
    case 3:
        ui->label_3->setPalette(redColor);
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);
        break;
    case 4:
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);
        break;
    case 5:
        ui->label_5->setPalette(redColor);
        sleepOnesecond();
        ui->label_5->setPalette(blackColor);
        break;
    case 6:
        ui->label_6->setPalette(redColor);
        sleepOnesecond();
        ui->label_6->setPalette(blackColor);
        break;
    case 7:
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);
        break;
    case 8:
        ui->label_8->setPalette(redColor);
        sleepOnesecond();
        ui->label_8->setPalette(blackColor);
        break;
    case 9:
        ui->label_9->setPalette(redColor);
        sleepOnesecond();
        ui->label_9->setPalette(blackColor);
        break;
    case 10:
        ui->label_10->setPalette(redColor);
        sleepOnesecond();
        ui->label_10->setPalette(blackColor);
        break;
    case 11:
        ui->label_11->setPalette(redColor);
        sleepOnesecond();
        ui->label_11->setPalette(blackColor);
        break;
    case 12:
        ui->label_12->setPalette(redColor);
        sleepOnesecond();
        ui->label_12->setPalette(blackColor);
        break;
    case 13:
        ui->label_13->setPalette(redColor);
        sleepOnesecond();
        ui->label_13->setPalette(blackColor);
        break;
    case 14:
        ui->label_14->setPalette(redColor);
        sleepOnesecond();
        ui->label_14->setPalette(blackColor);
        break;
    case 15:
        ui->label_15->setPalette(redColor);
        sleepOnesecond();
        ui->label_15->setPalette(blackColor);
        break;
    case 16:
        ui->label_16->setPalette(redColor);
        sleepOnesecond();
        ui->label_16->setPalette(blackColor);
        break;
    case 17:
        ui->label_17->setPalette(redColor);
        sleepOnesecond();
        ui->label_17->setPalette(blackColor);
        break;
    case 18:
        ui->label_18->setPalette(redColor);
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        break;
    case 19:
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        break;
    case 20:
        ui->label_20->setPalette(redColor);
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);
        break;
    default:
        break;
    }
}

void BFS_Graph::makeChoose(int i){
    switch(i){
    case 1:
        ToShowFunctoin(1);
        ToShowFunctoin(2);
        ToShowFunctoin(3);

        ToShowFunctoin(4);
        ToShowFunctoin(5);
        ToShowFunctoin(6);//输出A
        break;
    case 2:
        ToShowFunctoin(7);//入队A
        ToShowFunctoin(8);
        ToShowFunctoin(9);//出队A

        ToShowFunctoin(10);//w= B ; v0= A
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出B
        break;
    case 3:
        ToShowFunctoin(14);//入队B
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w = "H"; v0 = A
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出H
        break;
    case 4:
        ToShowFunctoin(14);//入队H
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w = NULL ;v0 = A
        ToShowFunctoin(11);
        ToShowFunctoin(17);

        ToShowFunctoin(8);
        ToShowFunctoin(9);//出队B
        ToShowFunctoin(10);//w = "C" ;v0 = B
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出C
        break;
    case 5:
        ToShowFunctoin(14);//入队C
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= D ; v0 = B
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出D
        break;
    case 6:
        ToShowFunctoin(14);//入队D
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= NULL; v0= B
        ToShowFunctoin(11);
        ToShowFunctoin(17);

        ToShowFunctoin(8);
        ToShowFunctoin(9);//出队H
        ToShowFunctoin(10);//w = "I" ;v0 = H
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出I
        break;
    case 7:
        ToShowFunctoin(14);//入队I
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= J ; v0 = H
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出J
        break;
    case 8:
        ToShowFunctoin(14);//入队J
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= NULL; v0= H
        ToShowFunctoin(11);
        ToShowFunctoin(17);

        ToShowFunctoin(8);
        ToShowFunctoin(9);//出队C
        ToShowFunctoin(10);//w = NULL ;v0 = C
        ToShowFunctoin(11);
        ToShowFunctoin(17);

        ToShowFunctoin(8);
        ToShowFunctoin(9);//出队D
        ToShowFunctoin(10);//w = "E" ;v0 = D
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出E
        break;
    case 9:
        ToShowFunctoin(14);//入队E
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= F ; v0 = D
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出F
        break;
    case 10:
        ToShowFunctoin(14);//入队F
        ToShowFunctoin(15);
        ToShowFunctoin(16);//w= G ; v0 = D
        ToShowFunctoin(11);
        ToShowFunctoin(12);
        ToShowFunctoin(13);//输出G
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

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(i=1;i<=10;i++)
    {
        makeChoose(i);
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
    ToShowFunctoin(14);//入队G
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = NULL ; vo = D
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(9);//出队I
    ToShowFunctoin(10);//w = H, v0 = I
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = J ; v0 = I
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w= NULL;vo = I
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(9);//出队J
    ToShowFunctoin(10);//w = H, v0 = J
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = I ; v0 = J
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w= NULL;vo = J
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(9);//出队E
    ToShowFunctoin(10);//w = D, v0 = E
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = F ; v0 = E
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w= NULL;vo = E
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(9);//出队F
    ToShowFunctoin(10);//w = D, v0 = F
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = E ; v0 = F
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = G ; v0 = F
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w= NULL;vo = F
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(9);//出队G
    ToShowFunctoin(10);//w = D, v0 = G
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w = F ; v0 = G
    ToShowFunctoin(11);
    ToShowFunctoin(12);
    ToShowFunctoin(15);
    ToShowFunctoin(16);//w= NULL;vo = G
    ToShowFunctoin(11);
    ToShowFunctoin(17);

    ToShowFunctoin(8);
    ToShowFunctoin(18);
    ToShowFunctoin(19);

    for(int i =1;i<=9;i++){
    ToShowFunctoin(4);
    ToShowFunctoin(5);
    ToShowFunctoin(19);
    }
    ToShowFunctoin(4);

    ToShowFunctoin(20);

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
        pause=1;
    }
    else
    {
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
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
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

