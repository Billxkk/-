#include "seqdelview.h"
#include "ui_seqdelview.h"

seqDelView::seqDelView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seqDelView)
{
    ui->setupUi(this);
    this->setWindowTitle("顺序表删除");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));
        this->setStyleSheet("QMainWindow{background-image: url(:/img/timg7.jpg)}");

    pause =0;
    startSign =0;
    ft.setPointSize(12);//默认算法区字符大小
    ft.setBold(true);
    defaultColor.setColor(QPalette::WindowText,Qt::black);//默认颜色
    workingColor.setColor(QPalette::WindowText,Qt::red);//执行时颜色

    ui->frashButton_2->setEnabled(false);
    ui->pauseButton_2->setEnabled(false);

    num1= new QLabel(ui->dockWidget);
    num1->setText("status  ListDel(Sqlis &v,int i)");
    num1->setGeometry(10,20,1000,15);
    num1->setFont(ft);

    num2 = new QLabel(ui->dockWidget);
    num2->setText("{ //将线性存储结构顺序表v中的第i个位置元素删除，i的有效取值范围为：1<=i<=v.last");
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
    num7->setText("    else{   for(j=i;j<=v.last;++j)");
    num7->setGeometry(10,110,1000,15);
    num7->setFont(ft);

    num8 = new QLabel(ui->dockWidget);
    num8->setText("                   v.elem[j-1]=v.elem[j];");
    num8->setGeometry(10,125,1000,15);
    num8->setFont(ft);

    num9 = new QLabel(ui->dockWidget);
    num9->setText("                v.elem[i]=b;");
    num9->setGeometry(10,140,1000,15);
    num9->setFont(ft);

    num10= new QLabel(ui->dockWidget);
    num10->setText("               v.last=v.last-1;");
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

seqDelView::~seqDelView()
{
    delete ui;
}

void seqDelView::display(int pos,QString ele)
{
    switch(pos)
        {
        case 1:
            ui->lineEdit_11->setText(ele);
            break;
        case 2:
            ui->lineEdit_12->setText(ele);
            break;
        case 3:
            ui->lineEdit_13->setText(ele);
            break;
        case 4:
            ui->lineEdit_14->setText(ele);
            break;
        case 5:
            ui->lineEdit_15->setText(ele);
            break;
        case 6:
            ui->lineEdit_16->setText(ele);
            break;
        case 7:
            ui->lineEdit_17->setText(ele);
            break;
        case 8:
            ui->lineEdit_18->setText(ele);
            break;
        case 9:
            ui->lineEdit_19->setText(ele);
            break;
        case 10:
            ui->lineEdit_20->setText(ele);
            break;

        default:
            break;
        }
}

void seqDelView::refresh()
{
    len=elementdel.size();
    num1->setPalette(workingColor);
    sleepOneSecond();
    num1->setPalette(defaultColor);
    num3->setPalette(workingColor);
    sleepOneSecond();
    if(position<1 || position>len)
    {
        num3->setPalette(defaultColor);
        num4->setPalette(workingColor);
        QMessageBox::information(this,"错误","删除位置错误!");
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
            display(i+1,elementdel.data()[i]);
        }
        display(10+position,elemdel.data()[position-1]);

}



void seqDelView::on_startButton_2_clicked()//开始按钮
{
    ui->startButton_2->setEnabled(false);
    refresh();
    ui->pauseButton_2->setEnabled(true);
    startSign =1;
    num7->setPalette(workingColor);
    sleepOneSecond();
    int i;

    for(i=position+1;i<=len;i++)
    {
        while(pause)
        {               //检测是否暂停
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
        ui->currentlineEdit_2->setText(QString::number(i) + "-->" + QString::number(i-1));
        display(i-1,elementdel.data()[i-1]);

        sleepOneSecond(500);

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
   // display(position,elemdel);
   // display(10+position,NULL);
    num9->setPalette(defaultColor);

    num10->setPalette(workingColor);
        sleepOneSecond();
    num10->setPalette(defaultColor);

        display(len,NULL);

    num11->setPalette(workingColor);
        sleepOneSecond();
    num11->setPalette(defaultColor);

    ui->currentlineEdit_2->setText("Complete!");
    //需要添加箭头的动态变化过程



    ui->pauseButton_2->setEnabled(false);
    ui->frashButton_2->setEnabled(true);
    startSign =0;
}

void seqDelView::on_pauseButton_2_clicked()//暂停按钮
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

void seqDelView::on_frashButton_2_clicked()//复位按钮
{
    display(10+position,NULL);
    ui->currentlineEdit_2->setText(NULL);
    int i;
    for(i=0;i<len;i++)
    {
        display(i+1,elementdel.data()[i]);
    }
    display(10+position,elemdel.data()[position-1]);
    ui->startButton_2->setEnabled(true);
    ui->frashButton_2->setEnabled(false);
}

void seqDelView::on_explainButton_2_clicked()//说明按钮
{
            QMessageBox::information(this,"说明","演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                                     "演示过程在演示区进行，算法区显示代码并可对当前行红色显示");
}

void seqDelView::on_backButton_2_clicked()//返回按钮
{
    this->close();
}

void seqDelView::sleepOneSecond(int time)
{
    t.start();
    while(t.elapsed()<time)
    {
        QCoreApplication::processEvents();
    }
}

