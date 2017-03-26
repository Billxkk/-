#include "linkdelview.h"
#include "ui_linkdelview.h"

linkDelView::linkDelView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::linkDelView)
{
    ui->setupUi(this);
    this->setWindowTitle("链表删除元素");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
            this->setStyleSheet("QMainWindow{background-image: url(:/img/img1.jpg)}");

    pause=0;
    startSign=0;
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;

    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);

    QFont ft("Microsoft YaHei", 10, 75);
    ui->label_2->setText("Status ListDelete( LinkList &L, Elem e){");
    ui->label_3->setText("       p = L; j = o;");
    ui->label_4->setText("      while( p->next ){");
    ui->label_5->setText("                  if( p->next->data == e){");
    ui->label_6->setText("                          break; }");
    ui->label_7->setText("                  p = p->next; }");
    ui->label_8->setText("       if( p->next ){");
    ui->label_9->setText("                 return ERROR; }");
    ui->label_10->setText("      q = p->next ;");
    ui->label_11->setText("       p->next = q->next ;");
    ui->label_12->setText("         delete q ;");
    ui->label_13->setText("       return OK;");
    ui->label_14->setText("  }");
    ui->label_2->setFont(ft);
    ui->label_3->setFont(ft);
    ui->label_4->setFont(ft);
    ui->label_5->setFont(ft);
    ui->label_6->setFont(ft);
    ui->label_7->setFont(ft);
    ui->label_8->setFont(ft);
    ui->label_9->setFont(ft);
    ui->label_10->setFont(ft);
    ui->label_11->setFont(ft);
    ui->label_12->setFont(ft);
    ui->label_13->setFont(ft);
    ui->label_14->setFont(ft);

    the1 = new QLabel(ui->groupBox);
    the1->setText("--->");
    the1->setGeometry(115,40,35,25);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("--->");
    the2->setGeometry(175,40,35,25);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("--->");
    the3->setGeometry(235,40,35,25);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("--->");
    the4->setGeometry(295,40,35,25);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("--->");
    the5->setGeometry(355,40,35,25);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("--->");
    the6->setGeometry(415,40,35,25);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("--->");
    the7->setGeometry(475,40,35,25);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("--->");
    the8->setGeometry(535,40,35,25);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("--->");
    the9->setGeometry(595,40,35,25);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("--->");
    the10->setGeometry(655,40,35,25);
    the10->setPalette(elseColor);

    the11 = new QLabel(ui->groupBox);
    the11->setText("↘");
    the11->setGeometry(115,65,15,20);
    the11->setPalette(elseColor);

    the21 = new QLabel(ui->groupBox);
    the21->setText("↗");
    the21->setGeometry(135,65,15,20);
    the21->setPalette(elseColor);

    the12 = new QLabel(ui->groupBox);
    the12->setText("↘");
    the12->setGeometry(175,65,15,20);
    the12->setPalette(elseColor);

    the22 = new QLabel(ui->groupBox);
    the22->setText("↗");
    the22->setGeometry(195,65,15,20);
    the22->setPalette(elseColor);

    the13 = new QLabel(ui->groupBox);
    the13->setText("↘");
    the13->setGeometry(235,65,15,20);
    the13->setPalette(elseColor);

    the23 = new QLabel(ui->groupBox);
    the23->setText("↗");
    the23->setGeometry(255,65,15,20);
    the23->setPalette(elseColor);

    the14 = new QLabel(ui->groupBox);
    the14->setText("↘");
    the14->setGeometry(295,65,15,20);
    the14->setPalette(elseColor);

    the24 = new QLabel(ui->groupBox);
    the24->setText("↗");
    the24->setGeometry(315,65,15,20);
    the24->setPalette(elseColor);

    the15 = new QLabel(ui->groupBox);
    the15->setText("↘ ↗");
    the15->setGeometry(355,65,15,20);
    the15->setPalette(elseColor);

    the25 = new QLabel(ui->groupBox);
    the25->setText("↘ ↗");
    the25->setGeometry(375,65,15,20);
    the25->setPalette(elseColor);

    the16 = new QLabel(ui->groupBox);
    the16->setText("↘");
    the16->setGeometry(415,65,15,20);
    the16->setPalette(elseColor);

    the26 = new QLabel(ui->groupBox);
    the26->setText("↗");
    the26->setGeometry(435,65,15,20);
    the26->setPalette(elseColor);

    the17 = new QLabel(ui->groupBox);
    the17->setText("↘");
    the17->setGeometry(475,65,15,20);
    the17->setPalette(elseColor);

    the27 = new QLabel(ui->groupBox);
    the27->setText("↗");
    the27->setGeometry(495,65,15,20);
    the27->setPalette(elseColor);

    the18 = new QLabel(ui->groupBox);
    the18->setText("↘");
    the18->setGeometry(535,65,15,20);
    the18->setPalette(elseColor);

    the28 = new QLabel(ui->groupBox);
    the28->setText("↗");
    the28->setGeometry(555,65,15,20);
    the28->setPalette(elseColor);

    the19 = new QLabel(ui->groupBox);
    the19->setText("↘");
    the19->setGeometry(595,65,15,20);
    the19->setPalette(elseColor);

    the29 = new QLabel(ui->groupBox);
    the29->setText("↗");
    the29->setGeometry(615,65,15,20);
    the29->setPalette(elseColor);

    the20 = new QLabel(ui->groupBox);
    the20->setText("↘  ");
    the20->setGeometry(655,65,15,20);
    the20->setPalette(elseColor);
}

linkDelView::~linkDelView()
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
    delete the11;
    delete the12;
    delete the13;
    delete the14;
    delete the15;
    delete the16;
    delete the17;
    delete the18;
    delete the19;
    delete the20;
    delete the21;
    delete the22;
    delete the23;
    delete the24;
    delete the25;
    delete the26;
    delete the27;
    delete the28;
    delete the29;
}


void linkDelView::display(int i,QString ele)
{
    switch(i)
    {
    case 1:
        ui->lineEdit_1->setText(ele);
        break;
    case 2:
        ui->lineEdit_2->setText(ele);
        break;
    case 3:
        ui->lineEdit_3->setText(ele);
        break;
    case 4:
        ui->lineEdit_4->setText(ele);
        break;
    case 5:
        ui->lineEdit_5->setText(ele);
        break;
    case 6:
        ui->lineEdit_6->setText(ele);
        break;
    case 7:
        ui->lineEdit_7->setText(ele);
        break;
    case 8:
        ui->lineEdit_8->setText(ele);
        break;
    case 9:
        ui->lineEdit_9->setText(ele);
        break;
    case 10:
        ui->lineEdit_10->setText(ele);
        break;
    case 11:
        ui->lineEdit_11->setText(ele);
        break;
    case 12:
        ui->lineEdit_12->setText(ele);
        break;
    case 13:
        ui->lineEdit_13->setText(ele);
        break;
    case 14:
        ui->lineEdit_14->setText(ele);
        break;
    case 15:
        ui->lineEdit_15->setText(ele);
        break;
    case 16:
        ui->lineEdit_16->setText(ele);
        break;
    case 17:
        ui->lineEdit_17->setText(ele);
        break;
    case 18:
        ui->lineEdit_18->setText(ele);
        break;
    case 19:
        ui->lineEdit_19->setText(ele);
        break;
    case 20:
        ui->lineEdit_20->setText(ele);
        break;
    default:
        break;
    }
}

void linkDelView::disappearOne(int i)
{
    switch(i)
    {
    case 1:
        the1->setPalette(elseColor);
        break;
    case 2:
        the2->setPalette(elseColor);
        break;
    case 3:
        the3->setPalette(elseColor);
        break;
    case 4:
        the4->setPalette(elseColor);
        break;
    case 5:
        the5->setPalette(elseColor);
        break;
    case 6:
        the6->setPalette(elseColor);
        break;
    case 7:
        the7->setPalette(elseColor);
        break;
    case 8:
        the8->setPalette(elseColor);
        break;
    case 9:
        the9->setPalette(elseColor);
        break;
    case 10:
        the10->setPalette(elseColor);
        break;
    default:
        break;
    }
}

void linkDelView::disappearTwo(int i)
{
    switch(i)
    {
    case 1:
        the11->setPalette(elseColor);
        break;
    case 2:
        the12->setPalette(elseColor);
        break;
    case 3:
        the13->setPalette(elseColor);
        break;
    case 4:
        the14->setPalette(elseColor);
        break;
    case 5:
        the15->setPalette(elseColor);
        break;
    case 6:
        the16->setPalette(elseColor);
        break;
    case 7:
        the17->setPalette(elseColor);
        break;
    case 8:
        the18->setPalette(elseColor);
        break;
    case 9:
        the19->setPalette(elseColor);
        break;
    case 10:
        the20->setPalette(elseColor);
        break;
    default:
        break;
    }
}

void linkDelView::animationOne(int num,bool appear)
{
    switch(num)
    {
    case 1:
        ui->lineEdit_1->setFrame(appear);
        break;
    case 2:
        ui->lineEdit_2->setFrame(appear);
        break;
    case 3:
        ui->lineEdit_3->setFrame(appear);
        break;
    case 4:
        ui->lineEdit_4->setFrame(appear);
        break;
    case 5:
        ui->lineEdit_5->setFrame(appear);
        break;
    case 6:
        ui->lineEdit_6->setFrame(appear);
        break;
    case 7:
        ui->lineEdit_7->setFrame(appear);
        break;
    case 8:
        ui->lineEdit_8->setFrame(appear);
        break;
    case 9:
        ui->lineEdit_9->setFrame(appear);
        break;
    case 10:
        ui->lineEdit_10->setFrame(appear);
        break;
    case 11:
        ui->lineEdit_11->setFrame(appear);
        break;
    case 12:
        ui->lineEdit_12->setFrame(appear);
        break;
    case 13:
        ui->lineEdit_13->setFrame(appear);
        break;
    case 14:
        ui->lineEdit_14->setFrame(appear);
        break;
    case 15:
        ui->lineEdit_15->setFrame(appear);
        break;
    case 16:
        ui->lineEdit_16->setFrame(appear);
        break;
    case 17:
        ui->lineEdit_17->setFrame(appear);
        break;
    case 18:
        ui->lineEdit_18->setFrame(appear);
        break;
    case 19:
        ui->lineEdit_19->setFrame(appear);
        break;
    case 20:
        ui->lineEdit_20->setFrame(appear);
        break;
    default:
        break;
    }
}

void linkDelView::AnimationOne(int i)
{
    bool appear;
    int temp;
    appear=true;
    for(temp=0;temp<i;temp++)
    {
        animationOne(temp+1,appear);
    }
    appear=false;
    for(temp=i;temp<10;temp++)
    {
        animationOne(temp+1,appear);
    }
}

void linkDelView::AnimationTwo(int i)
{
    bool appear;
    int temp;
    appear=false;
    if(i==0)
    {
        for(temp=1;temp<=10;temp++)
        {
            animationOne(temp+10,appear);
        }
    }
    else
    {
        for(temp=1;temp<i;temp++)
        {
            animationOne(temp+10,appear);
        }
        animationOne(i+10,true);
        for(temp=i+1;temp<=10;temp++)
        {
            animationOne(temp+10,appear);
        }
    }
}

void linkDelView::animationTwo(int num,QPalette temp)
{
    switch(num)
    {
    case 1:
        the1->setPalette(temp);
        break;
    case 2:
        the2->setPalette(temp);
        break;
    case 3:
        the3->setPalette(temp);
        break;
    case 4:
        the4->setPalette(temp);
        break;
    case 5:
        the5->setPalette(temp);
        break;
    case 6:
        the6->setPalette(temp);
        break;
    case 7:
        the7->setPalette(temp);
        break;
    case 8:
        the8->setPalette(temp);
        break;
    case 9:
        the9->setPalette(temp);
        break;
    case 10:
        the10->setPalette(temp);
        break;
    case 11:
        the11->setPalette(temp);
        the21->setPalette(temp);
        break;
    case 12:
        the12->setPalette(temp);
        the22->setPalette(temp);
        break;
    case 13:
        the13->setPalette(temp);
        the23->setPalette(temp);
        break;
    case 14:
        the14->setPalette(temp);
        the24->setPalette(temp);
        break;
    case 15:
        the15->setPalette(temp);
        the25->setPalette(temp);
        break;
    case 16:
        the16->setPalette(temp);
        the26->setPalette(temp);
        break;
    case 17:
        the17->setPalette(temp);
        the27->setPalette(temp);
        break;
    case 18:
        the18->setPalette(temp);
        the28->setPalette(temp);
        break;
    case 19:
        the19->setPalette(temp);
        the29->setPalette(temp);
        break;
    case 20:
        the20->setPalette(temp);
        break;
    default:
        break;
    }
}

void linkDelView::AnimationThree(int i)
{
    int temp;
    for(temp=0;temp<i;temp++)
    {
        animationTwo(temp+1,currentColor);
    }
    for(temp=i;temp<10;temp++)
    {
        animationTwo(temp+1,elseColor);
    }
}

void linkDelView::AnimationFour(int i)
{
    int temp;
    if(i==0)
    {
        for(temp=1;temp<=10;temp++)
        {
            animationTwo(temp+10,elseColor);
        }
    }
    else
    {
        for(temp=1;temp<i;temp++)
        {
            animationTwo(temp+10,elseColor);
        }
        animationTwo(i+10,currentColor);
        for(temp=i+1;temp<=10;temp++)
        {
            animationTwo(temp+10,elseColor);
        }
    }
}

void linkDelView::refresh()
{
    bool judge=false;
    int i;


    for(i=0;i<len;i++)
    {
        AnimationOne(len);
        AnimationTwo(0);
        AnimationThree(len);
        AnimationFour(0);
        display(i+1,element.data()[i]);
    }
    ui->label_4->setPalette(redColor);
    for(i=0;i<len;i++)
    {

        sleepOnesecond();
        ui->label_4->setPalette(blackColor);
        ui->label_5->setPalette(redColor);
        sleepOnesecond();
        if(element.data()[i]==elem)
        {

            ui->label_5->setPalette(blackColor);
            ui->label_6->setPalette(redColor);
            sleepOnesecond();
            ui->label_6->setPalette(blackColor);
            judge=true;
            break;
        }
        ui->label_5->setPalette(blackColor);
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);
        ui->label_4->setPalette(redColor);
    }
    sleepOnesecond();
    ui->label_4->setPalette(blackColor);
    ui->label_8->setPalette(redColor);
    sleepOnesecond();
    ui->label_8->setPalette(blackColor);
    if(judge)
    {

    }
    else
    {
        ui->label_9->setPalette(redColor);
        sleepOnesecond();
        ui->label_9->setPalette(blackColor);
        QMessageBox::information(this,"Error","Please check out the delete element!");
        this->close();
    }

}


void linkDelView::on_startButton_clicked()
{
    startSign=1;
    ui->startButton->setEnabled(false);

    ui->pauseButton->setEnabled(true);
    int i,temp;
    sleepOnesecond();
    ui->processlineEdit->setText("开始!");

    ui->label_2->setPalette(redColor);
    sleepOnesecond();
    ui->label_2->setPalette(blackColor);
    ui->label_3->setPalette(redColor);
    sleepOnesecond();
    ui->label_3->setPalette(blackColor);

    refresh();

    for(i=0;i<len;i++)
    {

        if(element.data()[i]==elem)
        {
            i=i+1;
            break;
        }
    }
    ui->label_10->setPalette(redColor);
    sleepOnesecond();

    AnimationOne(len-1);
    AnimationTwo(i);
    AnimationThree(len-1);
    disappearOne(i);
    AnimationFour(i);
    display(i+10,elem);
    for(temp=i-1;temp<len;temp++)
    {
        display(temp+1,element.data()[temp+1]);
    }
    display(len,NULL);
    while(pause)
    {
        sleepOnesecond();
    }

    sleepOnesecond();
    ui->label_10->setPalette(blackColor);
    ui->processlineEdit->setText("链表断开!");
    disappearTwo(i);
    while(pause)
    {
        sleepOnesecond();
    }
    sleepOnesecond();
    ui->label_11->setPalette(redColor);
    sleepOnesecond();
    ui->processlineEdit->setText("链表重连接!");

    AnimationThree(len-1);
    while(pause)
    {
        sleepOnesecond();
    }
    sleepOnesecond();
    ui->label_11->setPalette(blackColor);
    ui->label_12->setPalette(redColor);




    AnimationTwo(0);
    AnimationFour(0);
    display(i+10,NULL);
    sleepOnesecond();
    ui->label_12->setPalette(blackColor);
    ui->label_13->setPalette(redColor);
    ui->processlineEdit->setText("完成!");
    sleepOnesecond();
    ui->label_13->setPalette(blackColor);
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void linkDelView::on_pauseButton_clicked()
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

void linkDelView::on_frashButton_clicked()
{
    int i;
    AnimationOne(len);
    AnimationTwo(0);
    AnimationThree(len);
    AnimationFour(0);
    for(i=0;i<len;i++)
    {
        display(i+1,element.data()[i]);
    }
    ui->processlineEdit->setText(NULL);
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void linkDelView::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void linkDelView::on_backButton_clicked()
{
    this->close();
}

void linkDelView::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1500)
    {
        QCoreApplication::processEvents();
    }
}
