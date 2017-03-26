#include "treeprotravel.h"
#include "ui_treeprotravel.h"

TreeProTravel::TreeProTravel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TreeProTravel)
{
    ui->setupUi(this);
    this->setWindowTitle("�������������");
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

            QFont uiLabel("Microsoft YaHei", 12, 75);
    ui->label_3->setText("void ProVisit( Tree *bt ){");
    ui->label_4->setText("         if( bt ){");
    ui->label_5->setText("               visit(bt);");
    ui->label_6->setText("               ProVisit( bt->lChild );");
    ui->label_7->setText("               ProVisit( bt->rChild );");
    ui->label_8->setText("          }");
    ui->label_9->setText("   }");
    ui->label_3->setFont(uiLabel);
    ui->label_4->setFont(uiLabel);
    ui->label_5->setFont(uiLabel);
    ui->label_6->setFont(uiLabel);
    ui->label_7->setFont(uiLabel);
    ui->label_8->setFont(uiLabel);
    ui->label_9->setFont(uiLabel);



    the1 = new QLabel(ui->groupBox);
    the1->setText("-->");
    the1->setGeometry(265,30,30,25);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("-->");
    the2->setGeometry(205,80,30,25);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("-->");
    the3->setGeometry(175,140,30,25);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("-->");
    the4->setGeometry(235,140,30,25);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("-->");
    the5->setGeometry(325,80,30,25);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("-->");
    the6->setGeometry(295,140,30,25);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("-->");
    the7->setGeometry(355,140,30,25);
    the7->setPalette(elseColor);
}

TreeProTravel::~TreeProTravel()
{
    delete ui;
    delete the1;
    delete the2;
    delete the3;
    delete the4;
    delete the5;
    delete the6;
    delete the7;
}

void TreeProTravel::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen(Qt::red,3,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin);
    painter.setPen(pen);
    painter.drawLine(310,175,275,200);
    painter.drawLine(335,175,370,200);
    painter.drawLine(250,225,245,260);
    painter.drawLine(275,225,280,260);
    painter.drawLine(370,225,365,260);
    painter.drawLine(395,225,400,260);
}

void TreeProTravel::animationOne(int i,bool judge)
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
    default:
        break;
    }
}

void TreeProTravel::animationTwo(int i)
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
        break;
    case 1:
        the1->setPalette(currentColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        break;
    case 2:
        the1->setPalette(elseColor);
        the2->setPalette(currentColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        break;
    case 3:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(currentColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        break;
    case 4:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(currentColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        break;
    case 5:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(currentColor);
        the6->setPalette(elseColor);
        the7->setPalette(elseColor);
        break;
    case 6:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(currentColor);
        the7->setPalette(elseColor);
        break;
    case 7:
        the1->setPalette(elseColor);
        the2->setPalette(elseColor);
        the3->setPalette(elseColor);
        the4->setPalette(elseColor);
        the5->setPalette(elseColor);
        the6->setPalette(elseColor);
        the7->setPalette(currentColor);
        break;
    default:
        break;
    }
}

void TreeProTravel::preorder(int i)
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
    default:
        break;
    }
}

void TreeProTravel::stackNotEmpty(int i)
{
    switch(i){
    case 1:
        ui->label_17->setText("A");
        break;
    case 2:
        ui->label_16->setText("B");
        break;
    case 3:
        ui->label_15->setText("C");
        break;
    case 4:
        ui->label_14->setText("Null");
        break;
    case 5:
        ui->label_14->setText("Null");
        break;
    case 6:
        ui->label_15->setText("F");
        break;
    case 7:
        ui->label_14->setText("Null");
        break;
    default:
        break;
    }
}

void TreeProTravel::EmptyPointer(int i)
{
    switch(i){
    case 4:
        ui->label_14->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_14->setText("Null");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);

        ui->label_14->setText(" ");
        sleepOnesecond();
        ui->label_15->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_15->setText("D");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label

        while(pause)
        {
        sleepOnesecond();
        }
        sleepOnesecond();
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);
        break;
    case 5:
        ui->label_14->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_14->setText("Null");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);

        ui->label_14->setText(" ");
        sleepOnesecond();
        ui->label_15->setText(" ");
        sleepOnesecond();
        ui->label_16->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_16->setText("E");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label

        while(pause)
        {
        sleepOnesecond();
        }
        sleepOnesecond();
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);
        break;
    case 7:
        ui->label_14->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_14->setText("Null");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);

        ui->label_14->setText(" ");
        sleepOnesecond();
        ui->label_15->setText(" ");
        ui->label_7->setPalette(redColor);
        sleepOnesecond();
        ui->label_7->setPalette(blackColor);

        ui->label_3->setPalette(redColor);
        ui->label_15->setText("G");
        sleepOnesecond();
        ui->label_3->setPalette(blackColor);//������Label

        while(pause)
        {
        sleepOnesecond();
        }
        sleepOnesecond();
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);
        break;
    default:
        break;
    }

}

void TreeProTravel::on_startButton_clicked()
{
    startSign=1;
    ui->startButton->setEnabled(false);

    ui->pauseButton->setEnabled(true);
    element="";
    int i;
    animationTwo(0);//��ͷ

    for(i=1;i<=7;i++)                                           //ѭ��
    {
    ui->label_3->setPalette(redColor);
    stackNotEmpty(i);//����ջ �ڵ�ֵ
    animationTwo(i);//��ʾ��ǰԪ��ָ��
    sleepOnesecond();
    ui->label_3->setPalette(blackColor);//������Label

        while(pause)
        {
            sleepOnesecond();
        }
        sleepOnesecond();
        ui->label_4->setPalette(redColor);
        sleepOnesecond();
        ui->label_4->setPalette(blackColor);

        //�ж�bt�Ƿ�Ϊ��ָ��
        EmptyPointer(i);

        ui->label_5->setPalette(redColor);
        sleepOnesecond();
        ui->label_5->setPalette(blackColor);


        preorder(i);//���� ��ʾ���String
        ui->lineEdit->setText(element);
        ui->inforlineEdit->setText("�����ǰ����!");

        while(pause)
        {
            sleepOnesecond();
        }
        sleepOnesecond();

        animationOne(i,false);
        ui->inforlineEdit->setText("���÷��ʱ��!");

        ui->label_6->setPalette(redColor);
        sleepOnesecond();
        ui->label_6->setPalette(blackColor);
    }
    ///////////////////////////////////////////////////////////////////////

            ui->label_3->setPalette(redColor);
            ui->label_14->setText("Null");
            sleepOnesecond();
            ui->label_3->setPalette(blackColor);//������Label

            while(pause)
            {
            sleepOnesecond();
            }
            sleepOnesecond();
            ui->label_4->setPalette(redColor);
            sleepOnesecond();
            ui->label_4->setPalette(blackColor);

            ui->label_14->setText(" ");
            ui->label_7->setPalette(redColor);
            sleepOnesecond();
            ui->label_7->setPalette(blackColor);

            ui->label_3->setPalette(redColor);
            ui->label_14->setText("Null");
            sleepOnesecond();
            ui->label_3->setPalette(blackColor);//������Label
            ui->label_4->setPalette(redColor);
            sleepOnesecond();
            ui->label_4->setPalette(blackColor);

            ui->label_14->setText(" ");
            sleepOnesecond();
            ui->label_15->setText(" ");
            sleepOnesecond();
            ui->label_16->setText(" ");
            sleepOnesecond();
            ui->label_17->setText(" ");     //��ջ��

    sleepOnesecond();
    animationTwo(0);
    ui->inforlineEdit->setText("���!");
    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);
    startSign=0;
}

void TreeProTravel::on_pauseButton_clicked()
{
    if(!startSign)//��ʾδ��ʼʱ��ͣ��ť��Ч
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

void TreeProTravel::on_frashButton_clicked()
{
    int i;
    for(i=1;i<=7;i++)
    {
        animationOne(i,true);
    }
    ui->lineEdit->setText(NULL);
    ui->inforlineEdit->setText(NULL);
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void TreeProTravel::on_explainButton_clicked()
{
    QMessageBox::information(this,"˵��","��ʾ����ͨ����ť�����п��ƣ�����ťΪ��ɫʱ�޷������"
                             "��ʾ��������ʾ�����У��㷨����ʾ���벢�ɶԵ�ǰ�к�ɫ��ʾ");
}

void TreeProTravel::on_backButton_clicked()
{
    this->close();
}

void TreeProTravel::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}

