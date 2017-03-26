#include "stackoutview.h"
#include "ui_stackoutview.h"

stackOutView::stackOutView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stackOutView)
{
    ui->setupUi(this);
    this->setWindowTitle("顺序栈出栈");
    this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/img/img1.jpg")));
    this->setPalette(palette);
    pause=0;
    startSign=0;
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;
   QFont ft("Microsoft YaHei", 12, 75);

    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);

    the1 = new QLabel(ui->groupBox);
    the1->setText("-->");
    the1->setGeometry(380,110,133,30);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("-->");
    the2->setGeometry(380,140,133,30);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("-->");
    the3->setGeometry(380,170,133,30);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("-->");
    the4->setGeometry(380,200,133,30);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("-->");
    the5->setGeometry(380,230,133,30);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("-->");
    the6->setGeometry(380,260,133,30);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("-->");
    the7->setGeometry(380,290,133,30);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("-->");
    the8->setGeometry(380,320,133,30);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("-->");
    the9->setGeometry(380,350,133,30);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("-->");
    the10->setGeometry(380,380,133,30);
    the10->setPalette(elseColor);


    //算法语句
    word1 = new QLabel(ui->dockWidget);
    word1->setText("void  InseqStack(Sqstack v,Elem b)");
    word1->setGeometry(10,12,1000,15);
    word1->setFont(ft);

    word2 = new QLabel(ui->dockWidget);
    word2->setText("{");
    word2->setGeometry(10,29,1000,15);
    word2->setFont(ft);

    word3 = new QLabel(ui->dockWidget);
    word3->setText("     if(isEmpty(v))//判断栈是否为空");
    word3->setGeometry(10,46,1000,15);
    word3->setFont(ft);

    word4 = new QLabel(ui->dockWidget);
    word4->setText("       return ERROR;");
    word4->setGeometry(10,63,1000,15);
    word4->setFont(ft);

    word5 = new QLabel(ui->dockWidget);
    word5->setText("     else");
    word5->setGeometry(10,80,1000,15);
    word5->setFont(ft);

    word6 = new QLabel(ui->dockWidget);
    word6->setText("         {");
    word6->setGeometry(10,97,1000,15);
    word6->setFont(ft);

    word7 = new QLabel(ui->dockWidget);
    word7->setText("             b=v.data[v.top];//取栈顶元素");
    word7->setGeometry(10,114,1000,15);
    word7->setFont(ft);

    word8 = new QLabel(ui->dockWidget);
    word8->setText("             v.top--;//栈顶减1，即删除栈顶元素");
    word8->setGeometry(10,131,1000,15);
    word8->setFont(ft);

    word9 = new QLabel(ui->dockWidget);
    word9->setText("             return TRUE;");
    word9->setGeometry(10,148,1000,15);
    word9->setFont(ft);

    word10 = new QLabel(ui->dockWidget);
    word10->setText("         }");
    word10->setGeometry(10,165,1000,15);
    word10->setFont(ft);

    word11 = new QLabel(ui->dockWidget);
    word11->setText("}");
    word11->setGeometry(10,182,1000,15);
    word11->setFont(ft);
}

stackOutView::~stackOutView()
{
    delete ui;
}

void stackOutView::controlTwo(int i)//控制栈内数据移动
{
    switch(i)
    {
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
    }
}

void stackOutView::display(int pos,QString ele)//显示
{
    switch(pos)
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

void stackOutView::sleepOneSecond()
{
    t.start();
    while(t.elapsed()<1000)  //1000ms = 1s
    {
        QCoreApplication::processEvents();
    }
}

void stackOutView::refresh()
{
    lenTwo=elementTwo.size();
    if(lenTwo>10)
    {
        QMessageBox::information(this,"错误","数据溢出!");
    }
    else
    {
        int i;
        for(i=0;i<lenTwo;i++)
        {
            display(i+1,elementTwo.data()[i]);
        }
        controlTwo(0);
    }
}

void stackOutView::on_startButton_clicked()
{
    ui->startButton->setEnabled(false);
    refresh();
    ui->pauseButton->setEnabled(true);
    startSign=1;
    word1->setPalette(redColor);
    sleepOneSecond();
    word1->setPalette(blackColor);
    word2->setPalette(redColor);
    sleepOneSecond();
    word2->setPalette(blackColor);
    word3->setPalette(redColor);
    sleepOneSecond();
    word3->setPalette(blackColor);
    word4->setPalette(redColor);
    sleepOneSecond();
    word4->setPalette(blackColor);
    word5->setPalette(redColor);
    sleepOneSecond();
    word5->setPalette(blackColor);
    word6->setPalette(redColor);
    sleepOneSecond();
    int i=0,temp=11;
    while(i<lenTwo)
    {
        while(pause)
        {
            sleepOneSecond();
        }

        sleepOneSecond();
        word6->setPalette(blackColor);
        word7->setPalette(redColor);
        sleepOneSecond();
        controlTwo(i+1);
        word7->setPalette(blackColor);
        word8->setPalette(redColor);
        sleepOneSecond();
        ui->currentlineEdit->setText(QString::number(i+1));
        display(temp,elementTwo.data()[i]);
        word8->setPalette(blackColor);
        word9->setPalette(redColor);
        sleepOneSecond();
        i++;
        temp++;
        word9->setPalette(blackColor);
    }
    controlTwo(0);
    word10->setPalette(redColor);
    word10->setPalette(blackColor);
    sleepOneSecond();
    word11->setPalette(redColor);
    word11->setPalette(blackColor);
    ui->currentlineEdit->setText("Complete!");
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void stackOutView::on_pauseButton_clicked()
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

void stackOutView::on_frashButton_clicked()
{
    int i=0;
    ui->currentlineEdit->setText(QString::number(0));
    while(i<lenTwo)
       {
            display(11+i,NULL);
            i++;
       }
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void stackOutView::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void stackOutView::on_backButton_clicked()
{
    this->close();
}
