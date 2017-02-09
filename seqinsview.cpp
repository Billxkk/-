#include "seqinsview.h"
#include "ui_seqinsview.h"

seqInsView::seqInsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seqInsView)
{
    ui->setupUi(this);
    pause =0;
    startSign=0;
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
    if(len>10)
    {
        QMessageBox::information(this,"错误","字符数目过多");
        return;
    }
    else if(place<1 || place >len+1)
    {
        QMessageBox::information(this,"Error","Please check out the position!");
    }
    else
    {
        //将原始数据输出
        int i;
        for(i=0;i<len;i++)
        {
            display(i+1,element.data()[i]);
        }
    }

        display(10+place,elem);

}

void seqInsView::on_startButton_clicked()//开始按钮
{
    startSign =1;

    int i;
    QElapsedTimer t;
    for(i=len;i>=place;i--)
    {
        while(pause){
            t.start();
            while(t.elapsed()<1000)
            {
                QCoreApplication::processEvents();
            }
        }

        t.start();
        while(t.elapsed()<1000)
        {
            QCoreApplication::processEvents();
        }
        ui->currentlineEdit->setText(QString::number(i));
        display(i+1,element.data()[i-1]);

    }
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
    ui->currentlineEdit->setText("Complete!");
    //需要添加箭头的动态变化过程



    display(place,elem);
    display(10+place,NULL);
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
