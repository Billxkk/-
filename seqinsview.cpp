#include "seqinsview.h"
#include "ui_seqinsview.h"

seqInsView::seqInsView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seqInsView)
{
    ui->setupUi(this);
    this->setWindowTitle("顺序表插入");
    this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
        this->setStyleSheet("QMainWindow{background-image: url(:/img/timg7.jpg)}");

    pause =0;
    startSign=0;
    ft.setPointSize(12);//默认算法区字符大小
    defaultColor.setColor(QPalette::WindowText,Qt::black);//默认颜色
    workingColor.setColor(QPalette::WindowText,Qt::red);//执行时颜色

    currentColor.setColor(QPalette::WindowText,Qt::black);
    elseColor.setColor(QPalette::WindowText,Qt::white);

    ui->frashButton->setEnabled(false);
    ui->pauseButton->setEnabled(false);


    num1 = new QLabel(ui->dockWidget);
    num1->setText("status ListIns(Sqlist &v,int i,Elem b)");
    num1->setGeometry(10,25,1000,15);
    num1->setFont(ft);

    num2 = new QLabel(ui->dockWidget);
    num2->setText("{");
    num2->setGeometry(10,40,1000,15);
    num2->setFont(ft);

    num3 = new QLabel(ui->dockWidget);
    num3->setText("    if(i<1 || i>v.last+1)");
    num3->setGeometry(10,55,1000,15);
    num3->setFont(ft);

    num4 = new QLabel(ui->dockWidget);
    num4->setText("        return ERROR;");
    num4->setGeometry(10,70,1000,15);
    num4->setFont(ft);

    num5 = new QLabel(ui->dockWidget);
    num5->setText("    if(v.last >= maxlen)");
    num5->setGeometry(10,85,1000,15);
    num5->setFont(ft);

    num6 = new QLabel(ui->dockWidget);
    num6->setText("      error(\"overflow\");");
    num6->setGeometry(10,100,1000,15);
    num6->setFont(ft);

    num7= new QLabel(ui->dockWidget);
    num7->setText("    else{   for(j=v.elem[v.last];j>=i;--j)");
    num7->setGeometry(10,115,1000,15);
    num7->setFont(ft);

    num8 = new QLabel(ui->dockWidget);
    num8->setText("                   v.elem[j+1]=v.elem[j];");
    num8->setGeometry(10,130,1000,15);
    num8->setFont(ft);

    num9 = new QLabel(ui->dockWidget);
    num9->setText("                v.elem[i]=b;");
    num9->setGeometry(10,145,1000,15);
    num9->setFont(ft);

    num10= new QLabel(ui->dockWidget);
    num10->setText("               ++v.last;");
    num10->setGeometry(10,160,1000,15);
    num10->setFont(ft);

    num11= new QLabel(ui->dockWidget);
    num11->setText("               return OK;");
    num11->setGeometry(10,175,1000,15);
    num11->setFont(ft);

    num12= new QLabel(ui->dockWidget);
    num12->setText("             }");
    num12->setGeometry(10,190,1000,15);
    num12->setFont(ft);

    num13 = new QLabel(ui->dockWidget);
    num13->setText("}");
    num13->setGeometry(10,205,1000,15);
    num13->setFont(ft);

    //箭头
    the1 = new QLabel(ui->groupBox);
    the1->setText("--->");
    the1->setGeometry(43,40,30,25);
    the1->setPalette(elseColor);

    the2 = new QLabel(ui->groupBox);
    the2->setText("--->");
    the2->setGeometry(103,40,30,25);
    the2->setPalette(elseColor);

    the3 = new QLabel(ui->groupBox);
    the3->setText("--->");
    the3->setGeometry(163,40,35,25);
    the3->setPalette(elseColor);

    the4 = new QLabel(ui->groupBox);
    the4->setText("--->");
    the4->setGeometry(228,40,31,25);
    the4->setPalette(elseColor);

    the5 = new QLabel(ui->groupBox);
    the5->setText("--->");
    the5->setGeometry(289,40,31,25);
    the5->setPalette(elseColor);

    the6 = new QLabel(ui->groupBox);
    the6->setText("--->");
    the6->setGeometry(350,40,30,25);
    the6->setPalette(elseColor);

    the7 = new QLabel(ui->groupBox);
    the7->setText("--->");
    the7->setGeometry(410,40,30,25);
    the7->setPalette(elseColor);

    the8 = new QLabel(ui->groupBox);
    the8->setText("--->");
    the8->setGeometry(470,40,30,25);
    the8->setPalette(elseColor);

    the9 = new QLabel(ui->groupBox);
    the9->setText("--->");
    the9->setGeometry(530,40,30,25);
    the9->setPalette(elseColor);
}

seqInsView::~seqInsView()
{
    delete ui;
    if(!num1){delete num1;}
    if(!num2){
        delete num2;
    }
    if(!num3){
        delete num3;
    }
    if(!num4){
        delete num4;
    }
    if(!num5){
        delete num5;
    }
    if(!num6){
        delete num6;
    }
    if(!num7){
        delete num7;
    }
    if(!num8){
        delete num8;
    }
    if(!num9){
        delete num9;
    }
    if(!num10){
        delete num10;
    }
    if(!num11){
        delete num11;
    }
    if(!num12){
        delete num12;
    }
    if(!num13){
        delete num13;
    }

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

}

void seqInsView::display(int pos,QString ele)
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

void seqInsView::animation(int i)//箭头变化
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
    }
}

void seqInsView::refresh()
{
    len=element.size();

    num1->setPalette(workingColor);
    sleepOneSecond();
    num1->setPalette(defaultColor);

    num3->setPalette(workingColor);
    sleepOneSecond();

    if(place<1 || place >len+1)
    {
        num3->setPalette(defaultColor);
        num4->setPalette(workingColor);

        QMessageBox::information(this,"Error","Please check out the position!");
        this->close();
    }
        num3->setPalette(defaultColor);

        num5->setPalette(workingColor);
    if(len>10)
    {
        sleepOneSecond();
        num5->setPalette(defaultColor);
        num6->setPalette(workingColor);
        QMessageBox::information(this,"错误","字符数目过多");
        this->close();
    }
        sleepOneSecond();
        num5->setPalette(defaultColor);

        //将原始数据输出
        int i;
        for(i=0;i<len;i++)
        {
            display(i+1,element.data()[i]);
        }


        display(10+place,elem);

        animation(0);

}

void seqInsView::on_startButton_clicked()//开始按钮
{
    ui->startButton->setEnabled(false);
    refresh();
    ui->pauseButton->setEnabled(true);
    startSign =1;
    num7->setPalette(workingColor);
        sleepOneSecond();
    int i;

    for(i=len;i>=place;i--)
    {
        while(pause){               //检测是否暂停
            sleepOneSecond();
        }
       num7->setPalette(defaultColor);
       num8->setPalette(workingColor);

        sleepOneSecond();
        ui->currentlineEdit->setText(QString::number(i));
        animation(i);
        display(i+1,element.data()[i-1]);

        num8->setPalette(defaultColor);
        num7->setPalette(workingColor);
            sleepOneSecond();

    }
    num7->setPalette(defaultColor);
    num9->setPalette(workingColor);
    sleepOneSecond();
       animation(0);
    display(place,elem);
    display(10+place,NULL);
    num9->setPalette(defaultColor);

    num10->setPalette(workingColor);
        sleepOneSecond();
    num10->setPalette(defaultColor);
    num11->setPalette(workingColor);

        sleepOneSecond();
    num11->setPalette(defaultColor);

    ui->currentlineEdit->setText("Complete!");

    ui->pauseButton->setEnabled(false);
    ui->frashButton->setEnabled(true);


    startSign =0;
}

void seqInsView::on_pauseButton_clicked()//暂停按钮
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

void seqInsView::on_frashButton_clicked()//复位按钮
{
    int i;
    ui->currentlineEdit->setText(QString::number(len));
    animation(0);
    for(i=0;i<len;i++)
    {
        display(i+1,element.data()[i]);
    }
    display(len+1,NULL);
    display(10+place,elem);
    ui->startButton->setEnabled(true);
    ui->frashButton->setEnabled(false);
}

void seqInsView::on_explainButton_clicked()//说明按钮
{
        QMessageBox::information(this,"说明","test information 测试 \n 转行");
}

void seqInsView::on_backButton_clicked()
{
    this->close();
}

void seqInsView::sleepOneSecond()
{
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}
