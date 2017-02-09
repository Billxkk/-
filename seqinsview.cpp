#include "seqinsview.h"
#include "ui_seqinsview.h"

seqInsView::seqInsView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seqInsView)
{
    ui->setupUi(this);
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
    else if(place<1 || place > 9)
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
}

void seqInsView::on_startButton_clicked()
{

}

void seqInsView::on_pauseButton_clicked()
{

}

void seqInsView::on_frashButton_clicked()
{

}

void seqInsView::on_explainButton_clicked()
{

}

void seqInsView::on_backButton_clicked()
{

}
