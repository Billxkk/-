#include "dfs_graph.h"
#include "ui_dfs_graph.h"

DFS_Graph::DFS_Graph(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DFS_Graph)
{
    ui->setupUi(this);
    this->setWindowTitle("图的深度遍历");
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
     ui->lineEdit_3->setText("C");
     ui->lineEdit_4->setText("D");
     ui->lineEdit_5->setText("E");
     ui->lineEdit_6->setText("F");
     ui->lineEdit_7->setText("G");
     ui->lineEdit_8->setText("H");
     ui->lineEdit_9->setText("I");
     ui->lineEdit_10->setText("J");

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
     ui->label_20->setFont(uiLabel);
     ui->label_21->setFont(uiLabel);
     ui->label_22->setFont(uiLabel);
     ui->label_23->setFont(uiLabel);
     ui->label_24->setFont(uiLabel);
     ui->label_25->setFont(uiLabel);
     ui->label_26->setFont(uiLabel);
     ui->label_27->setFont(uiLabel);
     ui->label_28->setFont(uiLabel);


     the1 = new QLabel(ui->groupBox);
     the1->setText("↑");
     the1->setGeometry(280,45,25,25);
     the1->setPalette(elseColor);

     the2 = new QLabel(ui->groupBox);
     the2->setText("↑");
     the2->setGeometry(160,95,25,25);
     the2->setPalette(elseColor);

     the3 = new QLabel(ui->groupBox);
     the3->setText("↑");
     the3->setGeometry(100,155,25,25);
     the3->setPalette(elseColor);

     the4 = new QLabel(ui->groupBox);
     the4->setText("↑");
     the4->setGeometry(210,155,25,25);
     the4->setPalette(elseColor);

     the5 = new QLabel(ui->groupBox);
     the5->setText("↑");
     the5->setGeometry(180,205,25,25);
     the5->setPalette(elseColor);

     the6 = new QLabel(ui->groupBox);
     the6->setText("↑");
     the6->setGeometry(240,205,25,25);
     the6->setPalette(elseColor);

     the7 = new QLabel(ui->groupBox);
     the7->setText("↑");
     the7->setGeometry(270,155,25,25);
     the7->setPalette(elseColor);

     the8 = new QLabel(ui->groupBox);
     the8->setText("↑");
     the8->setGeometry(400,95,25,25);
     the8->setPalette(elseColor);

     the9 = new QLabel(ui->groupBox);
     the9->setText("↑");
     the9->setGeometry(340,155,25,25);
     the9->setPalette(elseColor);

     the10 = new QLabel(ui->groupBox);
     the10->setText("↑");
     the10->setGeometry(460,155,25,25);
     the10->setPalette(elseColor);
}

DFS_Graph::~DFS_Graph()
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

void DFS_Graph::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawLine(310,160,215,185);
    painter.drawLine(190,210,155,245);
    painter.drawLine(215,210,240,245);
    painter.drawLine(240,270,235,295);
    painter.drawLine(265,270,270,295);
    painter.drawLine(295,295,300,270);
    painter.drawLine(335,160,430,185);
    painter.drawLine(430,210,395,245);
    painter.drawLine(455,210,490,245);
    painter.drawLine(395,257,490,257);
    painter.drawLine(235,307,270,307);
    painter.drawLine(265,257,300,257);
}

void DFS_Graph::animationOne(int i,bool judge)//边框
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

void DFS_Graph::animationTwo(int i)//箭头
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

void DFS_Graph::dfsorder(int i)//字符
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

void DFS_Graph::ToShowFunctoin(int i){
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
    case 20:
        ui->label_20->setPalette(redColor);
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);
        break;
    case 21:
        ui->label_21->setPalette(redColor);
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);
        break;
    case 22:
        ui->label_22->setPalette(redColor);
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);
        break;
    case 23:
        ui->label_23->setPalette(redColor);
        sleepOnesecond();
        ui->label_23->setPalette(blackColor);
        break;
    case 24:
        ui->label_24->setPalette(redColor);
        sleepOnesecond();
        ui->label_24->setPalette(blackColor);
        break;
    case 25:
        ui->label_25->setPalette(redColor);
        sleepOnesecond();
        ui->label_25->setPalette(blackColor);
        break;
    case 26:
        ui->label_26->setPalette(redColor);
        sleepOnesecond();
        ui->label_26->setPalette(blackColor);
        break;
    case 27:
        ui->label_27->setPalette(redColor);
        sleepOnesecond();
        ui->label_27->setPalette(blackColor);
        break;
    case 28:
        ui->label_28->setPalette(redColor);
        sleepOnesecond();
        ui->label_28->setPalette(blackColor);
        break;
    case 10:
        ui->label_10->setPalette(redColor);
        sleepOnesecond();
        ui->label_10->setPalette(blackColor);
    default:
        break;
    }
}

void DFS_Graph::makeChoose(int i){
    switch(i){
    case 1:
        ui->label_2->setPalette(redColor);//DFSTraverse
        sleepOnesecond();
        ui->label_2->setPalette(blackColor);
        ui->label_3->setPalette(redColor);
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);
        for(int i=1;i<=10;++i){
            ui->label_4->setPalette(redColor);
            sleepOnesecond();
            ui->label_4->setPalette(blackColor);
            ui->label_5->setPalette(redColor);
            sleepOnesecond();
            ui->label_5->setPalette(blackColor);
        }
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);

        ui->label_6->setPalette(redColor);
        sleepOnesecond();
        ui->label_6->setPalette(blackColor);
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);//i=1
       ui->label_8->setPalette(redColor);
       sleepOnesecond();
       ui->label_8->setPalette(blackColor);

       ui->label_20->setPalette(redColor);//DFS
       sleepOnesecond();
       ui->label_20->setPalette(blackColor);
       ui->label_21->setPalette(redColor); //v = "A"
       sleepOnesecond();
       ui->label_21->setPalette(blackColor);
        break;
    case 2:
        ui->label_22->setPalette(redColor);
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);//w = "B"
        ui->label_23->setPalette(redColor);
        sleepOnesecond();
        ui->label_23->setPalette(blackColor);
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v = "B"
        break;
    case 3:
        ToShowFunctoin(22);//w= "C"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v = "C"
        break;
    case 4:
        ToShowFunctoin(22);//w= NULL
        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);

        ToShowFunctoin(26);//w= "D"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v= "D"
        break;
    case 5:
        ToShowFunctoin(22);//w = "E"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v = "E"
        break;
    case 6:
        ToShowFunctoin(22);//w = "D" ; v= "E"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "F"

        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);//
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v = "F"
        break;
    case 7:
        ToShowFunctoin(22);//w = "D"; v="F"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "E"

        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "G"

        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);//
        ToShowFunctoin(20);
        ToShowFunctoin(21);//v = "G"
        break;
    case 8:
        ToShowFunctoin(22);//w= "D" ; v="G"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "F"

        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "NULL"

        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);//v="G" 函数结束

        ToShowFunctoin(26);//w=NULL ; v= "F"
        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);//V= "F" 函数结束

        ToShowFunctoin(26);//w=NULL ; v= "E"
        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);//V= "E" 函数结束

        ToShowFunctoin(26);//w="F" v = "D"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "G"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(26);//w= "NULL
        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);//V= "D" 函数结束

        ToShowFunctoin(26);//w=NULL ; v= "B"
        ToShowFunctoin(23);
        ToShowFunctoin(27);
        ToShowFunctoin(28);//V= "B" 函数结束

        ToShowFunctoin(26);//w= "H" ;v ="A"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);//v = "H"
        ToShowFunctoin(21);
        break;
    case 9:
        ToShowFunctoin(22);//w= "I"; v= "H"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);//v = "I"
        ToShowFunctoin(21);
        break;
    case 10:
        ToShowFunctoin(22);//w= "H"; v="I"
        ToShowFunctoin(23);
        ToShowFunctoin(24);

        ToShowFunctoin(26);//w= "J" v= "I"
        ToShowFunctoin(23);
        ToShowFunctoin(24);
        ToShowFunctoin(25);
        ToShowFunctoin(20);//v = "J"
        ToShowFunctoin(21);
        break;
    default:
        break;
    }
}
void DFS_Graph::on_startButton_clicked()
{
    startSign=1;
    ui->startButton->setEnabled(false);
    ui->pauseButton->setEnabled(true);
     element="";
     int i;
     animationTwo(0);//箭头
     sleepOnesecond();
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
     for(i=1;i<=10;i++)
     {
         makeChoose(i);
         animationTwo(i);//箭头
         dfsorder(i);
         ui->lineEdit->setText(element);//显示数据
         ui->inforlineEdit->setText("输出当前数据!");

         while(pause)//暂停
         {
             sleepOnesecond();
         }

         sleepOnesecond();
         animationOne(i,false);//边框消失
         ui->inforlineEdit->setText("设置访问标志!");

         while(pause)//暂停
         {
             sleepOnesecond();
         }
         sleepOnesecond();
     }
    ToShowFunctoin(22);//w= "H"； v="J"
    ToShowFunctoin(23);
    ToShowFunctoin(24);

    ToShowFunctoin(26);//w= "I" ;v="J"
    ToShowFunctoin(23);
    ToShowFunctoin(24);
    ToShowFunctoin(26); //w = NULL; v = "J"

    ToShowFunctoin(23);
    ToShowFunctoin(27);
    ToShowFunctoin(28);//v = "J" 函数结束

    ToShowFunctoin(26); //w = NULL; v = "I"
    ToShowFunctoin(23);
    ToShowFunctoin(27);
    ToShowFunctoin(28);//v = "I" 函数结束

    ToShowFunctoin(26); //w = "J"; v = "H"
    ToShowFunctoin(23);
    ToShowFunctoin(24);
    ToShowFunctoin(26);//w=NULL ;v ="H"
    ToShowFunctoin(23);
    ToShowFunctoin(27);
    ToShowFunctoin(28);//v = "H" 函数结束

    ToShowFunctoin(26); //w = NULL; v = "A"
    ToShowFunctoin(23);
    ToShowFunctoin(27);
    ToShowFunctoin(28);//v = "A" 函数结束

    for(int i=1;i<=9;i++){
        ToShowFunctoin(6);
        ToShowFunctoin(7);
    }
    ToShowFunctoin(6);
    ToShowFunctoin(9);
    ToShowFunctoin(10);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

     animationTwo(0);
     ui->inforlineEdit->setText("完成!");
     ui->pauseButton->setEnabled(false);
     ui->frashButton->setEnabled(true);
     startSign=0;
}


void DFS_Graph::on_pauseButton_clicked()
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

void DFS_Graph::on_frashButton_clicked()
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

void DFS_Graph::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void DFS_Graph::on_backButton_clicked()
{
    this->close();
}

void DFS_Graph::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}

