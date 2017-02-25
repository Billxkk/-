#include "linkcreaatnodehead.h"
#include "ui_linkcreaatnodehead.h"

linkCreaatNodeHead::linkCreaatNodeHead(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::linkCreaatNodeHead)
{
    ui->setupUi(this);
    this->setWindowTitle("头插法创建链表");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
        this->setStyleSheet("QMainWindow{background-image: url(:/img/img1.jpg)}");


    pause=0;
    startSign=0;
    ft.setPointSize(20);
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;

    ui->frashButton_2->setEnabled(false);
    ui->pauseButton_2->setEnabled(false);

    ui->nodelineEdit_2->setFrame(0);//头节点

    the1 = new QLabel(ui->groupBox);
    the1->setText("------->");
    the1->setGeometry(205,40,35,25);
    the1->setFont(ft);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("------->");
    the2->setGeometry(265,40,35,25);
    the2->setFont(ft);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("------->");
    the3->setGeometry(325,40,35,25);
    the3->setFont(ft);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("------->");
    the4->setGeometry(385,40,35,25);
    the4->setFont(ft);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("------->");
    the5->setGeometry(445,40,35,25);
    the5->setFont(ft);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("------->");
    the6->setGeometry(505,40,35,25);
    the6->setFont(ft);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("------->");
    the7->setGeometry(565,40,35,25);
    the7->setFont(ft);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("------->");
    the8->setGeometry(625,40,35,25);
    the8->setFont(ft);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("------>");
    the9->setGeometry(685,40,35,25);
    the9->setFont(ft);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("------>");
    the10->setGeometry(145,40,30,25);
    the10->setFont(ft);
    the10->setPalette(elseColor);

    the11 = new QLabel(ui->groupBox);
    the11->setText("↘");
    the11->setGeometry(115,65,20,23);
    the11->setFont(ft);
    the11->setPalette(elseColor);

    the12 = new QLabel(ui->groupBox);
    the12->setText("↗");
    the12->setGeometry(160,60,20,23);
    the12->setFont(ft);
    the12->setPalette(elseColor);

    the13 = new QLabel(ui->groupBox);
    the13->setText("---/-->");
    the13->setGeometry(115,40,30,25);
    the13->setFont(ft);
    the13->setPalette(elseColor);

        ui->label->setText("void CreatList(LinkList &L,int n){");
    ui->label_3->setText("      L = new LinkList;");
    ui->label_4->setText("      L->next = NULL;");
    ui->label_5->setText("   for(i = n;i > 0;--i){");
    ui->label_6->setText("      p = new LinkLIst; cin>>p->data;");
    ui->label_7->setText("      p->next = L->next;");
    ui->label_8->setText("      L->next = p;");
    ui->label_9->setText("     }");
    ui->label_10->setText("}");

    int i=0;
    while(i<=len)
    {
        display(i,NULL);
        i++;
    }
    ui->currentlineEdit_2->setText(NULL);
    animationOne(0);
    animationTwo(0);
    animationThree(0);
    animationFour(0);
    animationFive(0);
}

linkCreaatNodeHead::~linkCreaatNodeHead()
{
    delete ui;
    if(!the1){
        delete the1;
    }
    if(!the2){
        delete the2;
    }
    if(!the3){
        delete the3;
    }
    if(!the4){
        delete the4;
    }
    if(!the5){
        delete the5;
    }
    if(!the6){
        delete the6;
    }
    if(!the7){
        delete the7;
    }
    if(!the8){
        delete the8;
    }
    if(!the9){
        delete the9;
    }
    if(!the10){
        delete the10;
    }
    if(!the11){
        delete the11;
    }
    if(!the12){
        delete the12;
    }
    if(!the13){
        delete the13;
    }
}

void linkCreaatNodeHead::animationOne(int i)//方框边框
{
    switch(i)
    {
    case 0:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 1:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 2:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 3:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 4:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 5:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 6:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 7:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(1);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 8:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(1);
        ui->lineEdit_18->setFrame(1);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 9:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(1);
        ui->lineEdit_18->setFrame(1);
        ui->lineEdit_19->setFrame(1);
        ui->lineEdit_20->setFrame(0);
        break;
    default:
        ui->lineEdit_11->setFrame(1);
        ui->lineEdit_12->setFrame(1);
        ui->lineEdit_13->setFrame(1);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(1);
        ui->lineEdit_18->setFrame(1);
        ui->lineEdit_19->setFrame(1);
        ui->lineEdit_20->setFrame(1);
    }
}
void linkCreaatNodeHead::animationTwo(int i)//第二行方框边框
{
    switch(i)
    {
    case 0:
        ui->lineEdit_21->setFrame(0);
        break;
    default:
        ui->lineEdit_21->setFrame(1);
        break;
    }
}

void linkCreaatNodeHead::animationThree(int i)//上下箭头
{
    switch(i)
    {
    case 0:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        break;
    case 1:
        the11->setPalette(currentColor);
        the12->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void linkCreaatNodeHead::animationFour(int i)//首位断 箭头
{
    switch(i)
    {
    case 0:
        the10->setPalette(elseColor);
        the13->setPalette(elseColor);
        break;
    case 1:
        the10->setPalette(currentColor);
        the13->setPalette(elseColor);
        break;
    case 2:
        the10->setPalette(elseColor);
        the13->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void linkCreaatNodeHead::animationFive(int i)//后位 链接箭头
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
        break;
    case 2:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 3:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 4:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 5:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 6:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(currentColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 7:
        the1->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(currentColor);
        the7->setPalette(currentColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        break;
    case 8:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(currentColor);
        the7->setPalette(currentColor);
        the8->setPalette(currentColor);
        the9->setPalette(elseColor);
        break;
    case 9:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(currentColor);
        the7->setPalette(currentColor);
        the8->setPalette(currentColor);
        the9->setPalette(currentColor);
        break;
    default:
        break;
    }
}


void linkCreaatNodeHead::display(int i,QString ele)//数据
{
    switch(i)
    {
    case 0:
        ui->lineEdit_21->setText(ele);
        break;
    case 1:
        ui->lineEdit_11->setText(ele);
        break;
    case 2:
        ui->lineEdit_12->setText(ele);
        break;
    case 3:
        ui->lineEdit_13->setText(ele);
        break;
    case 4:
        ui->lineEdit_14->setText(ele);
        break;
    case 5:
        ui->lineEdit_15->setText(ele);
        break;
    case 6:
        ui->lineEdit_16->setText(ele);
        break;
    case 7:
        ui->lineEdit_17->setText(ele);
        break;
    case 8:
        ui->lineEdit_18->setText(ele);
        break;
    case 9:
        ui->lineEdit_19->setText(ele);
        break;
    case 10:
        ui->lineEdit_20->setText(ele);
        break;
    default:
        break;
    }
}

void linkCreaatNodeHead::on_startButton_2_clicked()
{
    ui->startButton_2->setEnabled(false);
    startSign=1;
    ui->label->setPalette(redColor);
    sleepOneSecond();
    ui->label->setPalette(blackColor);

    ui->label_3->setPalette(redColor);
    ui->nodelineEdit_2->setFrame(1);
    sleepOneSecond();
    ui->label_3->setPalette(blackColor);

    ui->label_4->setPalette(redColor);
    sleepOneSecond();
    ui->label_4->setPalette(blackColor);

    ui->pauseButton_2->setEnabled(true);
    if(len>10)
    {
        QMessageBox::information(this,"错误","数据过长!(小于10)");
    }
    else
    {
        int i=0;
        int j;
        while(i<len)
        {
            ui->label_5->setPalette(redColor);
            sleepOneSecond();

            while(pause)
            {
                sleepOneSecond();
            }
            ui->label_5->setPalette(blackColor);
            if(i==0)
            {
                ui->label_6->setPalette(redColor);
                sleepOneSecond();
                display(i+1,element.data()[i]);
                ui->currentlineEdit_2->setText(element.data()[i]);
                animationOne(1);//方框边框
                ui->label_6->setPalette(blackColor);

                animationTwo(0);//第二行方框边框
                animationThree(0);//上下箭头
                ui->label_7->setPalette(redColor);
                sleepOneSecond();
                animationFour(1);//首位断 箭头
                ui->label_7->setPalette(blackColor);
                ui->label_8->setPalette(redColor);
                animationFive(0);//后位 链接箭头
                sleepOneSecond();
                ui->label_8->setPalette(blackColor);
            }
            else
            {
                ui->label_6->setPalette(redColor);
                animationTwo(1);
                display(0,element.data()[i]);
                for(j=1;j<=i;j++)
                {
                    display(j,element.data()[i-j]);
                }
                sleepOneSecond();                
                ui->label_6->setPalette(blackColor);
                ui->label_7->setPalette(redColor);
                sleepOneSecond();
                ui->label_7->setPalette(blackColor);
                ui->label_8->setPalette(redColor);
                sleepOneSecond();
                ui->label_8->setPalette(blackColor);
                animationOne(i);

                animationThree(1);
                animationFour(2);
                animationFive(i-1);

                ui->currentlineEdit_2->setText(element.data()[i]);
                sleepOneSecond();
                animationOne(i+1);
                animationTwo(0);
                animationThree(0);
                animationFour(1);
                animationFive(i);
                display(0,NULL);
                for(j=0;j<=i;j++)
                {
                    display(j+1,element.data()[i-j]);
                }
            }
            i++;
        }
        animationOne(len);
        animationTwo(0);
        animationThree(0);
        animationFour(1);
        animationFive(len-1);
        display(0,NULL);
        ui->currentlineEdit_2->setText(NULL);
    }
    ui->pauseButton_2->setEnabled(false);
    ui->frashButton_2->setEnabled(true);
    startSign =0;
}

void linkCreaatNodeHead::on_pauseButton_2_clicked()
{
    if(!startSign)
        return ;
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

void linkCreaatNodeHead::on_frashButton_2_clicked()
{
    int i=0;
    while(i<=len)
    {
        display(i,NULL);
        i++;
    }
    ui->currentlineEdit_2->setText(NULL);
    animationOne(0);
    animationTwo(0);
    animationThree(0);
    animationFour(0);
    animationFive(0);
    ui->nodelineEdit_2->setFrame(0);//头节点
    ui->startButton_2->setEnabled(true);
    ui->frashButton_2->setEnabled(false);
}

void linkCreaatNodeHead::on_explainButton_2_clicked()
{
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void linkCreaatNodeHead::on_backButton_2_clicked()
{
    this->close();
}

void linkCreaatNodeHead::sleepOneSecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}
