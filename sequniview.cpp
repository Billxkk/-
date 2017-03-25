#include "sequniview.h"
#include "ui_sequniview.h"

seqUniView::seqUniView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seqUniView)
{
    ui->setupUi(this);
    this->setWindowTitle("顺序表合并");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
            this->setStyleSheet("QMainWindow{background-image: url(:/img/timg7.jpg)}");
    pause=0;
    startSign=0;
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;
    ft.setPointSize(12);//算法字符格式
    ft.setBold(true);


    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);

    the1 = new QLabel(ui->groupBox);
    the1->setText("↑");
    the1->setGeometry(10,65,25,30);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("↑");
    the2->setGeometry(70,65,25,30);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("↑");
    the3->setGeometry(130,65,25,30);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("↑");
    the4->setGeometry(190,65,25,30);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("↑");
    the5->setGeometry(250,65,25,30);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("↑");
    the6->setGeometry(310,65,25,30);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("↑");
    the7->setGeometry(370,65,25,30);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("↑");
    the8->setGeometry(430,65,25,30);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("↑");
    the9->setGeometry(490,65,25,30);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("↑");
    the10->setGeometry(550,65,25,30);
    the10->setPalette(elseColor);

    the11 = new QLabel(ui->groupBox);
    the11->setText("↑");
    the11->setGeometry(610,65,25,30);
    the11->setPalette(elseColor);

    the12 = new QLabel(ui->groupBox);
    the12->setText("↑");
    the12->setGeometry(670,65,25,30);
    the12->setPalette(elseColor);

    the13 = new QLabel(ui->groupBox);
    the13->setText("↑");
    the13->setGeometry(10,135,25,30);
    the13->setPalette(elseColor);

    the14 = new QLabel(ui->groupBox);
    the14->setText("↑");
    the14->setGeometry(70,135,25,30);
    the14->setPalette(elseColor);

    the15 = new QLabel(ui->groupBox);
    the15->setText("↑");
    the15->setGeometry(130,135,25,30);
    the15->setPalette(elseColor);

    the16 = new QLabel(ui->groupBox);
    the16->setText("↑");
    the16->setGeometry(190,135,25,30);
    the16->setPalette(elseColor);

    the17 = new QLabel(ui->groupBox);
    the17->setText("↑");
    the17->setGeometry(250,135,25,30);
    the17->setPalette(elseColor);

    the18 = new QLabel(ui->groupBox);
    the18->setText("↑");
    the18->setGeometry(310,135,25,30);
    the18->setPalette(elseColor);

    the19 = new QLabel(ui->groupBox);
    the19->setText("↑");
    the19->setGeometry(370,135,25,30);
    the19->setPalette(elseColor);

    the20 = new QLabel(ui->groupBox);
    the20->setText("↑");
    the20->setGeometry(430,135,25,30);
    the20->setPalette(elseColor);

    the21 = new QLabel(ui->groupBox);
    the21->setText("↑");
    the21->setGeometry(490,135,25,30);
    the21->setPalette(elseColor);

    the22 = new QLabel(ui->groupBox);
    the22->setText("↑");
    the22->setGeometry(550,135,25,30);
    the22->setPalette(elseColor);

    the23 = new QLabel(ui->groupBox);
    the23->setText("↑");
    the23->setGeometry(610,135,25,30);
    the23->setPalette(elseColor);

    the24 = new QLabel(ui->groupBox);
    the24->setText("↑");
    the24->setGeometry(670,135,25,30);
    the24->setPalette(elseColor);


    the25 = new QLabel(ui->groupBox);
    the25->setText("<font size=5><b>></b></font>");
    the25->setGeometry(310,175,10,25);
    the25->setPalette(elseColor);

    the26 = new QLabel(ui->groupBox);
    the26->setText("<");
    the26->setGeometry(320,175,10,25);
    the26->setPalette(elseColor);

    the27 = new QLabel(ui->groupBox);
    the27->setText("<font size=5><b>=</b></font>");
    the27->setGeometry(330,175,10,25);
    the27->setPalette(elseColor);

    //算法语句
    word1 = new QLabel(ui->dockWidgetContents_2);
    word1->setText("void  UniList(SqList va,SqList vb,SqList &vc)");
    word1->setGeometry(10,0,1000,15);
    word1->setFont(ft);

    word2 = new QLabel(ui->dockWidgetContents_2);
    word2->setText("{    i = j = 1; k =0;");
    word2->setGeometry(10,16,1000,15);
    word2->setFont(ft);

    word3 = new QLabel(ui->dockWidgetContents_2);
    word3->setText("     while( i <= va.last && j <= vb.last)");
    word3->setGeometry(10,32,1000,15);
    word3->setFont(ft);

    word4 = new QLabel(ui->dockWidgetContents_2);
    word4->setText("     {if( va.elem[i] > vb.elem[j] )");
    word4->setGeometry(10,48,1000,15);
    word4->setFont(ft);

    word5 = new QLabel(ui->dockWidgetContents_2);
    word5->setText("          vc.elem[++k] = vb.elem[j++];");
    word5->setGeometry(10,64,1000,15);
    word5->setFont(ft);

    word6 = new QLabel(ui->dockWidgetContents_2);
    word6->setText("      else if( va.elem[i] < vb.elem[j] )");
    word6->setGeometry(10,80,1000,15);
    word6->setFont(ft);

    word7 = new QLabel(ui->dockWidgetContents_2);
    word7->setText("           vc.elem[++k] = va.elem[i++];");
    word7->setGeometry(10,96,1000,15);
    word7->setFont(ft);

    word8 = new QLabel(ui->dockWidgetContents_2);
    word8->setText("      else{ vc.elem[++k] = va.elem[i++]; j++;");
    word8->setGeometry(10,112,1000,15);
    word8->setFont(ft);

    word9 = new QLabel(ui->dockWidgetContents_2);
    word9->setText("              }");
    word9->setGeometry(10,128,1000,15);
    word9->setFont(ft);

    word10 = new QLabel(ui->dockWidgetContents_2);
    word10->setText("     }");
    word10->setGeometry(10,144,1000,15);
    word10->setFont(ft);

    word11 = new QLabel(ui->dockWidgetContents_2);
    word11->setText("     while( i <= va.last )");
    word11->setGeometry(10,160,1000,15);
    word11->setFont(ft);

    word12 = new QLabel(ui->dockWidgetContents_2);
    word12->setText("          vc.elem[++k] = va.elem[i++];");
    word12->setGeometry(10,176,1000,15);
    word12->setFont(ft);

    word13 = new QLabel(ui->dockWidgetContents_2);
    word13->setText("     while(j <= vb.last )");
    word13->setGeometry(10,192,1000,15);
    word13->setFont(ft);

    word14 = new QLabel(ui->dockWidgetContents_2);
    word14->setText("          vc.elem[++k] = vb.elem[j++];");
    word14->setGeometry(10,208,1000,15);
    word14->setFont(ft);

    word15 = new QLabel(ui->dockWidgetContents_2);
    word15->setText("     vc.last = k;");
    word15->setGeometry(10,224,1000,15);
    word15->setFont(ft);

    word16 = new QLabel(ui->dockWidgetContents_2);
    word16->setText("}");
    word16->setGeometry(10,240,1000,15);
    word16->setFont(ft);
}

seqUniView::~seqUniView()
{
    delete ui;
}


void seqUniView::animationOne(int i)//控制第一组数据移动
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        break;
    case 11:
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
        the11->setPalette(currentColor);
        the12->setPalette(elseColor);
        break;
    case 12:
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
        the11->setPalette(elseColor);
        the12->setPalette(currentColor);
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
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
    }
}

void seqUniView::animationTwo(int i)//控制第二组数据移动
{
    switch(i)
    {
    case 1:
        the13->setPalette(currentColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 2:
        the13->setPalette(elseColor);
        the14->setPalette(currentColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 3:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(currentColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 4:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(currentColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 5:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(currentColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 6:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(currentColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 7:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(currentColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 8:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(currentColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 9:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(currentColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 10:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(currentColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
        break;
    case 11:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(currentColor);
        the24->setPalette(elseColor);
        break;
    case 12:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(currentColor);
        break;
    default:
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        the21->setPalette(elseColor);
        the22->setPalette(elseColor);
        the23->setPalette(elseColor);
        the24->setPalette(elseColor);
    }
}

void seqUniView::animationThree(int i)//控制比较值的显示
{
    switch(i)
    {
    case 25:
        the25->setPalette(currentColor);
        the26->setPalette(elseColor);
        the27->setPalette(elseColor);
        break;
    case 26:
        the25->setPalette(elseColor);
        the26->setPalette(currentColor);
        the27->setPalette(elseColor);
        break;
    case 27:
        the25->setPalette(elseColor);
        the26->setPalette(elseColor);
        the27->setPalette(currentColor);
        break;
    default:
        the25->setPalette(elseColor);
        the26->setPalette(elseColor);
        the27->setPalette(elseColor);
    }
}

void seqUniView::display(int pos,QString ele)//显示
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
    case 21:
        ui->lineEdit_21->setText(ele);
        break;
    case 22:
        ui->lineEdit_22->setText(ele);
        break;
    case 23:
        ui->lineEdit_23->setText(ele);
        break;
    case 24:
        ui->lineEdit_24->setText(ele);
        break;
    case 25:
        ui->lineEdit_25->setText(ele);
        break;
    case 26:
        ui->lineEdit_26->setText(ele);
        break;
    case 27:
        ui->lineEdit_27->setText(ele);
        break;
    case 28:
        ui->lineEdit_28->setText(ele);
        break;
    case 29:
        ui->lineEdit_29->setText(ele);
        break;
    case 30:
        ui->lineEdit_30->setText(ele);
        break;
    case 31:
        ui->lineEdit_31->setText(ele);
        break;
    case 32:
        ui->lineEdit_32->setText(ele);
        break;
    case 33:
        ui->lineEdit_33->setText(ele);
        break;
    case 34:
        ui->lineEdit_34->setText(ele);
        break;
    case 35:
        ui->lineEdit_35->setText(ele);
        break;
    case 36:
        ui->lineEdit_36->setText(ele);
        break;
    default:
        break;
    }
}

void seqUniView::sleepOneSecond(int time)
{
    t.start();
    while(t.elapsed()<time)
    {
        QCoreApplication::processEvents();
    }
}

void seqUniView::refresh()
{
    lenOne=elementOne.size();
    lenTwo=elementTwo.size();
    if(lenOne>12)
    {
        QMessageBox::information(this,"错误","第一组数据溢出!");
    }
    else if(lenTwo>12)
    {
        QMessageBox::information(this,"错误","第二组数据溢出!");
    }
    else if(lenOne+lenTwo>12)
    {
        QMessageBox::information(this,"错误","合并后数据溢出!");
    }
    else
    {
        int i;
        for(i=0;i<lenOne;i++)
        {
            display(i+1,elementOne.data()[i]);
        }
        for(i=0;i<lenTwo;i++)
        {
            display(i+13,elementTwo.data()[i]);
        }
        animationOne(0);
        animationTwo(0);
        animationThree(0);
    }
}


void seqUniView::on_startButton_clicked()
{
    ui->startButton->setEnabled(false);
    refresh();
    ui->pauseButton->setEnabled(true);
    startSign=1;

    int One,Two;//存储比较数据
    word1->setPalette(redColor);
    sleepOneSecond();
    word1->setPalette(blackColor);
    word2->setPalette(redColor);
    int i=0,j=0,temp=25;//line 2
    sleepOneSecond();
    word2->setPalette(blackColor);
    word3->setPalette(redColor);
    sleepOneSecond();
    while(i<lenOne && j<lenTwo)//line 3
    {

        while(pause)
        {
            sleepOneSecond();
        }

        sleepOneSecond();
        One=elementOne.data()[i].toAscii();
        Two=elementTwo.data()[j].toAscii();
        word3->setPalette(blackColor);
        word4->setPalette(redColor);
        animationOne(i+1);
        animationTwo(j+1);
        ui->firstlineEdit->setText(elementOne.data()[i]);
        ui->secondlineEdit->setText(elementTwo.data()[j]);
        sleepOneSecond();

        if(One>Two)//line 4
        {
            animationThree(25);
            word4->setPalette(blackColor);
            word5->setPalette(redColor);
            sleepOneSecond();
            display(temp,elementTwo.data()[j]);//line 5
            sleepOneSecond(500);
            word5->setPalette(blackColor);
            j++;
            temp++;
        }
        word4->setPalette(blackColor);
        word6->setPalette(redColor);
        if(One<Two)//line6
        {
            animationThree(26);
            sleepOneSecond();
            word6->setPalette(blackColor);
            word7->setPalette(redColor);
            sleepOneSecond();
            display(temp,elementOne.data()[i]);//line 7
             sleepOneSecond(500);
            word7->setPalette(blackColor);
            i++;
            temp++;
        }
        word6->setPalette(blackColor);
        if(One==Two)//
        {
            word8->setPalette(redColor);
            animationThree(27);
            sleepOneSecond();
            display(temp,elementOne.data()[i]);//line8
             sleepOneSecond(500);
            word8->setPalette(blackColor);
            i++;
            j++;//line9
            temp++;
        }
        word3->setPalette(redColor);
    }
    word3->setPalette(blackColor);
     word11->setPalette(redColor);
    if(i<lenOne)
    {
        ui->secondlineEdit->setText(NULL);
        animationTwo(0);
        animationThree(0);

        sleepOneSecond();
        while(i<lenOne)//line 11
        {
            while(pause)
            {
                sleepOneSecond();
            }
            sleepOneSecond();
            word11->setPalette(blackColor);
            word12->setPalette(redColor);
            sleepOneSecond();
            animationTwo(0);
            animationThree(0);
            animationOne(i+1);
            ui->firstlineEdit->setText(elementOne.data()[i]);//line12
            display(temp,elementOne.data()[i]);
            word12->setPalette(blackColor);
            i++;
            temp++;
            word11->setPalette(redColor);
        }

        animationOne(0);
        ui->firstlineEdit->setText(NULL);
    }
    word11->setPalette(blackColor);
    word13->setPalette(redColor);
    if(j<lenTwo)
    {
        ui->firstlineEdit->setText(NULL);
        animationOne(0);
        animationThree(0);

        sleepOneSecond();
        while(j<lenTwo)//line 13
        {
            while(pause)
            {
                sleepOneSecond();
            }
            sleepOneSecond();
            word13->setPalette(blackColor);
            word14->setPalette(redColor);
            sleepOneSecond();
            animationOne(0);
            animationThree(0);
            animationTwo(j+1);
            ui->secondlineEdit->setText(elementTwo.data()[j]);//line14
            display(temp,elementTwo.data()[j]);
            word14->setPalette(blackColor);
            word13->setPalette(redColor);
            j++;
            temp++;
        }

        animationTwo(0);
        ui->secondlineEdit->setText(NULL);
    }
    word13->setPalette(blackColor);
    word15->setPalette(redColor);
    sleepOneSecond();
    word15->setPalette(blackColor);
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void seqUniView::on_pauseButton_clicked()
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

void seqUniView::on_frashButton_clicked()
{
    int i=0;
    while(i<(lenOne+lenTwo))
    {
        display(25+i,NULL);
        i++;
    }
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void seqUniView::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明",tr("演示过程通过按钮来进行控制，当按钮为灰色时无法点击。演示过程在演示区进行，算法区显示代码并可对当前行红色显示"));
}

void seqUniView::on_backButton_clicked()
{
    this->close();
}
