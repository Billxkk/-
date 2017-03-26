#include "treereartravel.h"
#include "ui_treereartravel.h"

TreeRearTravel::TreeRearTravel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TreeRearTravel)
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

    ui->lineEdit_1->setText("C");
    ui->lineEdit_2->setText("D");
    ui->lineEdit_3->setText("B");
    ui->lineEdit_4->setText("F");
    ui->lineEdit_5->setText("G");
    ui->lineEdit_6->setText("E");
    ui->lineEdit_7->setText("A");

    QFont uiLabel("Microsoft YaHei", 12, 75);
    ui->label_18->setFont(uiLabel);
    ui->label_19->setFont(uiLabel);
    ui->label_20->setFont(uiLabel);
    ui->label_21->setFont(uiLabel);
    ui->label_22->setFont(uiLabel);
    ui->label_23->setFont(uiLabel);
    ui->label_24->setFont(uiLabel);
    ui->label_25->setFont(uiLabel);
    ui->label_26->setFont(uiLabel);


    the7 = new QLabel(ui->groupBox);
    the7->setText("-->");
    the7->setGeometry(270,30,30,25);
    the7->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("-->");
    the3->setGeometry(210,80,30,25);
    the3->setPalette(elseColor);

    the1 = new QLabel(ui->groupBox);
    the1->setText("-->");
    the1->setGeometry(180,140,30,25);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("-->");
    the2->setGeometry(240,140,30,25);
    the2->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("-->");
    the6->setGeometry(330,80,30,25);
    the6->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("-->");
    the4->setGeometry(300,140,30,25);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("-->");
    the5->setGeometry(360,140,30,25);
    the5->setPalette(elseColor);
}

TreeRearTravel::~TreeRearTravel()
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

void TreeRearTravel::paintEvent(QPaintEvent *)
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

void TreeRearTravel::animationOne(int i,bool judge)
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

void TreeRearTravel::animationTwo(int i)
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

void TreeRearTravel::postorder(int i)
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

void TreeRearTravel::stackNotEmpty(int i)
{
    switch(i){
    case 1:
        ui->label_18->setPalette(redColor);
        ui->label_17->setText("A");
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);//������Label
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);//A������

        ui->label_18->setPalette(redColor);
        ui->label_16->setText("B");
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);//������Label
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);//B������

        ui->label_18->setPalette(redColor);
        ui->label_15->setText("C");
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);//������Label
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);//C������
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//C������
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);//������Label
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_21->setPalette(redColor);//C���ҽ��
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);
        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//C���ҽ��
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);//������Label
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_22->setPalette(redColor);//C
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);

        break;
    case 2:
        ui->label_18->setPalette(redColor);
        ui->label_15->setText("D");
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);//D������
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//D������
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_21->setPalette(redColor);//D���ҽ��
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//D���ҽ��
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_22->setPalette(redColor);//D
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);
        break;
    case 3:
        ui->label_22->setPalette(redColor);//B
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);
        break;
    case 4:
        ui->label_21->setPalette(redColor);//A���ҽ��
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_16->setText("E");//E ��ջ
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);//E������
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_15->setText("F");
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);//F������
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");     //F ����
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_21->setPalette(redColor);//F���ҽ��
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");     //F �ҽ��
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_22->setPalette(redColor);//F
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);

        break;
    case 5:
        ui->label_21->setPalette(redColor);
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);//E���ҽ��

        ui->label_18->setPalette(redColor);
        ui->label_15->setText("G");
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_20->setPalette(redColor);//G������
        sleepOnesecond();
        ui->label_20->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//G������
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_21->setPalette(redColor);//G���ҽ��
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);

        ui->label_18->setPalette(redColor);
        ui->label_14->setText("Null");//G���ҽ��
        sleepOnesecond();
        ui->label_18->setPalette(blackColor);
        ui->label_19->setPalette(redColor);
        sleepOnesecond();
        ui->label_19->setPalette(blackColor);
        ui->label_14->setText(" ");
        sleepOnesecond();

        ui->label_22->setPalette(redColor);//G
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);

        break;
    case 6:
        ui->label_22->setPalette(redColor);//E
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);
        break;
    case 7:
        ui->label_22->setPalette(redColor);//A
        sleepOnesecond();
        ui->label_22->setPalette(blackColor);
        break;
    default:
        break;
    }
}

void TreeRearTravel::deleteStack(int i)
{
    switch(i){
    case 1:
        ui->label_15->setText(" ");//ɾ��C
        sleepOnesecond();

        ui->label_21->setPalette(redColor);
        sleepOnesecond();
        ui->label_21->setPalette(blackColor);//B���ҽ��
        break;
    case 2:
        ui->label_15->setText(" ");//ɾ��D
        sleepOnesecond();
        break;
    case 3:
        ui->label_16->setText(" ");//ɾ��B
        sleepOnesecond();
        break;
    case 4:
        ui->label_15->setText(" ");//ɾ��F
        sleepOnesecond();
        break;
    case 5:
        ui->label_15->setText(" ");//ɾ��G
        sleepOnesecond();
        break;
    case 6:
        ui->label_16->setText(" ");//ɾ��E
        sleepOnesecond();
        break;
    case 7:
        ui->label_17->setText(" ");//ɾ��A
        sleepOnesecond();
        break;
    default:
        break;
    }
}

void TreeRearTravel::on_startButton_clicked()
{
    startSign=1;
    ui->startButton->setEnabled(false);

    ui->pauseButton->setEnabled(true);
     element="";
     int i;
     animationTwo(0);

    ui->label_18->setPalette(redColor);
     for(i=1;i<=7;i++)                                           //ѭ��
     {

         stackNotEmpty(i);//����ջ �ڵ�ֵ
         animationTwo(i);//��ʾ��ǰԪ��ָ��
         sleepOnesecond();
         ui->label_18->setPalette(blackColor);//������Label

         while(pause)
         {
             sleepOnesecond();
         }
         sleepOnesecond();

         postorder(i);
         ui->lineEdit->setText(element);
         ui->inforlineEdit->setText("�����ǰ����!");
         while(pause)
         {
             sleepOnesecond();
         }
         sleepOnesecond();
         animationOne(i,false);
         ui->inforlineEdit->setText("���÷��ʱ��!");

         deleteStack(i);//ɾ��ջ
     }
     /////////////////////////////////////////////////////////////////////////////////////

     sleepOnesecond();
     animationTwo(0);
     ui->inforlineEdit->setText("���!");
     ui->pauseButton->setEnabled(false);
     ui->frashButton->setEnabled(true);
     startSign=0;
}

void TreeRearTravel::on_pauseButton_clicked()
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

void TreeRearTravel::on_frashButton_clicked()
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

void TreeRearTravel::on_explainButton_clicked()
{
   QMessageBox::information(this,"˵��","��ʾ����ͨ����ť�����п��ƣ�����ťΪ��ɫʱ�޷������"
                            "��ʾ��������ʾ�����У��㷨����ʾ���벢�ɶԵ�ǰ�к�ɫ��ʾ");
}

void TreeRearTravel::on_backButton_clicked()
{
    this->close();
}

void TreeRearTravel::sleepOnesecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}
