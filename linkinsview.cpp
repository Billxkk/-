#include "linkinsview.h"
#include "ui_linkinsview.h"

linkInsView::linkInsView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::linkInsView)
{
    ui->setupUi(this);
    this->setWindowTitle("链表插入元素");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
            this->setStyleSheet("QMainWindow{background-image: url(:/img/img1.jpg)}");

    pause=0;
    startSign=0;
    ft.setPointSize(9);
    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);
    redColor.setColor(QPalette::WindowText,Qt::red);
    blackColor = currentColor;

    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);

    QFont uiLabel("Microsoft YaHei", 10, 75);
    ui->label_2->setText("Status ListInsert(LinkList &L,int i,elem e){");
    ui->label_3->setText("         p = L; j = 0;");
    ui->label_4->setText("         while( p && j<i-1){//搜索插入位置的前一个结点");
    ui->label_5->setText("                   p = p->next; ++j; }");
    ui->label_6->setText("         if( p == NULL)//判断插入序号是否正确");
    ui->label_7->setText("               return ERROR;");
    ui->label_8->setText("         s = new LinkList; s->data = e;");
    ui->label_9->setText("         s->next = p->next; p->next = s;//插入新结点");
    ui->label_10->setText("        return OK;");
    ui->label_11->setText(" }");
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


    the1 = new QLabel(ui->groupBox);
    the1->setText("--->");
    the1->setGeometry(115,40,35,25);
    the1->setFont(ft);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("--->");
    the2->setGeometry(175,40,35,25);
    the2->setFont(ft);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("--->");
    the3->setGeometry(235,40,35,25);
    the3->setFont(ft);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("--->");
    the4->setGeometry(295,40,35,25);
    the4->setFont(ft);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("--->");
    the5->setGeometry(355,40,35,25);
    the5->setFont(ft);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("--->");
    the6->setGeometry(415,40,35,25);
    the6->setFont(ft);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("--->");
    the7->setGeometry(475,40,35,25);
    the7->setFont(ft);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("--->");
    the8->setGeometry(535,40,35,25);
    the8->setFont(ft);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("--->");
    the9->setGeometry(595,40,35,25);
    the9->setFont(ft);
    the9->setPalette(elseColor);

    the10 = new QLabel(ui->groupBox);
    the10->setText("--->");
    the10->setGeometry(655,40,35,25);
    the10->setFont(ft);
    the10->setPalette(elseColor);

    the11 = new QLabel(ui->groupBox);
    the11->setText("↘ ↗");
    the11->setGeometry(115,65,35,20);
    the11->setFont(ft);
    the11->setPalette(elseColor);

    the12 = new QLabel(ui->groupBox);
    the12->setText("↘ ↗");
    the12->setGeometry(175,65,35,20);
    the12->setFont(ft);
    the12->setPalette(elseColor);

    the13 = new QLabel(ui->groupBox);
    the13->setText("↘ ↗");
    the13->setGeometry(235,65,35,20);
    the13->setFont(ft);
    the13->setPalette(elseColor);

    the14 = new QLabel(ui->groupBox);
    the14->setText("↘ ↗");
    the14->setGeometry(295,65,35,20);
    the14->setFont(ft);
    the14->setPalette(elseColor);

    the15 = new QLabel(ui->groupBox);
    the15->setText("↘ ↗");
    the15->setGeometry(355,65,35,20);
    the15->setFont(ft);
    the15->setPalette(elseColor);

    the16 = new QLabel(ui->groupBox);
    the16->setText("↘ ↗");
    the16->setGeometry(415,65,35,20);
    the16->setFont(ft);
    the16->setPalette(elseColor);

    the17 = new QLabel(ui->groupBox);
    the17->setText("↘ ↗");
    the17->setGeometry(475,65,35,20);
    the17->setFont(ft);
    the17->setPalette(elseColor);

    the18 = new QLabel(ui->groupBox);
    the18->setText("↘ ↗");
    the18->setGeometry(535,65,35,20);
    the18->setFont(ft);
    the18->setPalette(elseColor);

    the19 = new QLabel(ui->groupBox);
    the19->setText("↘ ↗");
    the19->setGeometry(595,65,35,20);
    the19->setFont(ft);
    the19->setPalette(elseColor);

    the20 = new QLabel(ui->groupBox);
    the20->setText("↘ ↗");
    the20->setGeometry(655,65,35,20);
    the20->setFont(ft);
    the20->setPalette(elseColor);



}

linkInsView::~linkInsView()
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
}

void linkInsView::animationOne(int i)
{
    switch(i)
    {
    case 0:
        ui->lineEdit_1->setFrame(0);
        ui->lineEdit_2->setFrame(0);
        ui->lineEdit_3->setFrame(0);
        ui->lineEdit_4->setFrame(0);
        ui->lineEdit_5->setFrame(0);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 1:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(0);
        ui->lineEdit_3->setFrame(0);
        ui->lineEdit_4->setFrame(0);
        ui->lineEdit_5->setFrame(0);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 2:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(0);
        ui->lineEdit_4->setFrame(0);
        ui->lineEdit_5->setFrame(0);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 3:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(0);
        ui->lineEdit_5->setFrame(0);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 4:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(0);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 5:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(0);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 6:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(1);
        ui->lineEdit_7->setFrame(0);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 7:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(1);
        ui->lineEdit_7->setFrame(1);
        ui->lineEdit_8->setFrame(0);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 8:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(1);
        ui->lineEdit_7->setFrame(1);
        ui->lineEdit_8->setFrame(1);
        ui->lineEdit_9->setFrame(0);
        ui->lineEdit_10->setFrame(0);
        break;
    case 9:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(1);
        ui->lineEdit_7->setFrame(1);
        ui->lineEdit_8->setFrame(1);
        ui->lineEdit_9->setFrame(1);
        ui->lineEdit_10->setFrame(0);
        break;
    default:
        ui->lineEdit_1->setFrame(1);
        ui->lineEdit_2->setFrame(1);
        ui->lineEdit_3->setFrame(1);
        ui->lineEdit_4->setFrame(1);
        ui->lineEdit_5->setFrame(1);
        ui->lineEdit_6->setFrame(1);
        ui->lineEdit_7->setFrame(1);
        ui->lineEdit_8->setFrame(1);
        ui->lineEdit_9->setFrame(1);
        ui->lineEdit_10->setFrame(1);
    }
}

void linkInsView::animationTwo(int i)
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
        ui->lineEdit_11->setFrame(0);
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
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
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
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(1);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 5:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(1);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 6:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(1);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 7:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(1);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 8:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(1);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(0);
        break;
    case 9:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(1);
        ui->lineEdit_20->setFrame(0);
        break;
    case 10:
        ui->lineEdit_11->setFrame(0);
        ui->lineEdit_12->setFrame(0);
        ui->lineEdit_13->setFrame(0);
        ui->lineEdit_14->setFrame(0);
        ui->lineEdit_15->setFrame(0);
        ui->lineEdit_16->setFrame(0);
        ui->lineEdit_17->setFrame(0);
        ui->lineEdit_18->setFrame(0);
        ui->lineEdit_19->setFrame(0);
        ui->lineEdit_20->setFrame(1);
    default:
        break;
    }
}

void linkInsView::animationThree(int i)
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
        the1->setPalette(currentColor);
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
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
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
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        the8->setPalette(elseColor);
        the9->setPalette(elseColor);
        the10->setPalette(elseColor);
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
        the10->setPalette(elseColor);
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
        the10->setPalette(elseColor);
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
        the10->setPalette(elseColor);
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
        the10->setPalette(elseColor);
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
        the10->setPalette(elseColor);
        break;
    case 10:
        the1->setPalette(currentColor);
        the2->setPalette(currentColor);
        the3->setPalette(currentColor);
        the4->setPalette(currentColor);
        the5->setPalette(currentColor);
        the6->setPalette(currentColor);
        the7->setPalette(currentColor);
        the8->setPalette(currentColor);
        the9->setPalette(currentColor);
        the10->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void linkInsView::animationFour(int i)
{
    switch(i)
    {
    case 0:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 1:
        the11->setPalette(currentColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 2:
        the11->setPalette(elseColor);
        the12->setPalette(currentColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 3:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(currentColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 4:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(currentColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 5:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(currentColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 6:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(currentColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 7:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(currentColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 8:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(currentColor);
        the19->setPalette(elseColor);
        the20->setPalette(elseColor);
        break;
    case 9:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(currentColor);
        the20->setPalette(elseColor);
        break;
    case 10:
        the11->setPalette(elseColor);
        the12->setPalette(elseColor);
        the13->setPalette(elseColor);
        the14->setPalette(elseColor);
        the15->setPalette(elseColor);
        the16->setPalette(elseColor);
        the17->setPalette(elseColor);
        the18->setPalette(elseColor);
        the19->setPalette(elseColor);
        the20->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void linkInsView::display(int i,QString ele)
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

void linkInsView::disappear(int i)
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

void linkInsView::refresh()
{
    int i;
    animationOne(len);
    animationTwo(0);
    animationThree(len);
    animationFour(0);

    for(i=0;i<len;i++)
    {
        display(i+1,element.data()[i]);
    }

    int time = len<place?len:place;
    while(time--){
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
    if(place<1 || place>len+1)
    {
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        QMessageBox::information(this,"Error","Please check out the position!");
        ui->label_7->setPalette(blackColor);
    }

}


void linkInsView::on_startButton_clicked()
{
    int i;
    startSign=1;
    ui->startButton->setEnabled(false);

    ui->pauseButton->setEnabled(true);


    ui->label_2->setPalette(redColor);
    sleepOnesecond();
    ui->label_2->setPalette(blackColor);
    ui->label_3->setPalette(redColor);
    sleepOnesecond();
    ui->label_3->setPalette(blackColor);

    refresh();

    sleepOnesecond();
    ui->label_6->setPalette(blackColor);
    ui->label_8->setPalette(redColor);
    sleepOnesecond();

    animationTwo(place);

    display(place+10,elem);

    while(pause)
    {
        sleepOnesecond();
    }
    ui->label_8->setPalette(blackColor);
    ui->label_9->setPalette(redColor);
    sleepOnesecond();
    ui->processlineEdit->setText("当前指针断开!");
    disappear(place);
    while(pause)
    {
        sleepOnesecond();
    }
    sleepOnesecond();
    animationFour(place);
    ui->processlineEdit->setText("指针重链接!");
    ui->label_9->setPalette(blackColor);
    ui->label_10->setPalette(redColor);
    while(pause)
    {
        sleepOnesecond();
    }
    sleepOnesecond();
    animationOne(len+1);
    animationTwo(0);
    animationThree(len+1);
    animationFour(0);
    display(place,elem);
    for(i=place;i<len+1;i++)
    {
        display(i+1,element.data()[i-1]);
    }
    display(place+10,NULL);
    ui->processlineEdit->setText("完成!");
    ui->label_10->setPalette(blackColor);
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void linkInsView::on_pauseButton_clicked()
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



void linkInsView::on_frashButton_clicked()
{
    int i;
    animationOne(len);
    animationTwo(0);
    animationThree(len);
    animationFour(0);
    for(i=0;i<len;i++)
    {
        display(i+1,element.data()[i]);
    }
    display(len+1,NULL);
    ui->processlineEdit->setText(NULL);
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void linkInsView::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void linkInsView::on_backButton_clicked()
{
    this->close();
}

void linkInsView::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1500)
    {
        QCoreApplication::processEvents();
    }
}
