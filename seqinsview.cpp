#include "seqinsview.h"
#include "ui_seqinsview.h"

seqInsView::seqInsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seqInsView)
{
    ui->setupUi(this);
    this->setWindowTitle("顺序表插入");
    pause =0;
    startSign=0;
    ft.setPointSize(12);//默认算法区字符大小
    defaultColor.setColor(QPalette::WindowText,Qt::black);//默认颜色
    workingColor.setColor(QPalette::WindowText,Qt::red);//执行时颜色

    num1 = new QLabel(ui->dockWidget);
    num1->setText("ListIns(Sqlist &v,int i,Elem b)");
    num1->setGeometry(10,20,1000,15);
    num1->setFont(ft);

    num2 = new QLabel(ui->dockWidget);
    num2->setText("{");
    num2->setGeometry(10,35,1000,15);
    num2->setFont(ft);

    num3 = new QLabel(ui->dockWidget);
    num3->setText("    if(i<1 || i>v.last+1)");
    num3->setGeometry(10,50,1000,15);
    num3->setFont(ft);

    num4 = new QLabel(ui->dockWidget);
    num4->setText("        return ERROR;");
    num4->setGeometry(10,65,1000,15);
    num4->setFont(ft);

    num5 = new QLabel(ui->dockWidget);
    num5->setText("    if(v.last >= maxlen)");
    num5->setGeometry(10,80,1000,15);
    num5->setFont(ft);

    num6 = new QLabel(ui->dockWidget);
    num6->setText("      error(\"overflow\")");
    num6->setGeometry(10,95,1000,15);
    num6->setFont(ft);

    num7= new QLabel(ui->dockWidget);
    num7->setText("    else{   for(j=v.elem[v.last];j>=i;--j)");
    num7->setGeometry(10,110,1000,15);
    num7->setFont(ft);

    num8 = new QLabel(ui->dockWidget);
    num8->setText("                   v.elem[j+1]=v.elem[j];");
    num8->setGeometry(10,125,1000,15);
    num8->setFont(ft);

    num9 = new QLabel(ui->dockWidget);
    num9->setText("                v.elem[i]=b;");
    num9->setGeometry(10,140,1000,15);
    num9->setFont(ft);

    num10= new QLabel(ui->dockWidget);
    num10->setText("               ++v.last;");
    num10->setGeometry(10,155,1000,15);
    num10->setFont(ft);

    num11= new QLabel(ui->dockWidget);
    num11->setText("               return OK;");
    num11->setGeometry(10,170,1000,15);
    num11->setFont(ft);

    num12= new QLabel(ui->dockWidget);
    num12->setText("             }");
    num12->setGeometry(10,185,1000,15);
    num12->setFont(ft);

    num13 = new QLabel(ui->dockWidget);
    num13->setText("}");
    num13->setGeometry(10,200,1000,15);
    num13->setFont(ft);
}

seqInsView::~seqInsView()
{
    delete ui;
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

}

void seqInsView::on_startButton_clicked()//开始按钮
{
    refresh();
    startSign =1;
    num7->setPalette(workingColor);
        sleepOneSecond();
    int i;

    for(i=len;i>=place;i--)
    {
        while(pause){               //检测是否暂停
            t.start();
            while(t.elapsed()<1000)
            {
                QCoreApplication::processEvents();
            }
        }
       num7->setPalette(defaultColor);
       num8->setPalette(workingColor);

        t.start();
        while(t.elapsed()<1000)
        {
            QCoreApplication::processEvents();
        }
        ui->currentlineEdit->setText(QString::number(i));
        display(i+1,element.data()[i-1]);

        num8->setPalette(defaultColor);
        num7->setPalette(workingColor);
            sleepOneSecond();

    }
    num7->setPalette(defaultColor);
    num9->setPalette(workingColor);
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
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
    //需要添加箭头的动态变化过程



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
    for(i=0;i<len;i++)
    {
        display(i+1,element.data()[i]);
    }
    display(len+1,NULL);
    display(10+place,elem);
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
