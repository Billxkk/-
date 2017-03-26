#include "queueenter.h"
#include "ui_queueenter.h"

QueueEnter::QueueEnter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QueueEnter)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QPixmap(":/img/img1.jpg")));
    this->setPalette(palette);

    this->setWindowTitle("循环队列 入队/出队");
        this->setWindowIcon(QIcon(":/img/bitbug_favicon.ico"));




    startColor.setColor(QPalette::WindowText,Qt::red);//队首 红色箭头
    endColor.setColor(QPalette::WindowText,Qt::black);//队尾 黑色箭头
    disColor.setColor(QPalette::WindowText,Qt::white);//不显示 白色箭头
    redColor=startColor;
    blackColor=endColor;
    Len=0;//队列长度
    endPointer=0;//队尾位置

    ui->label_1->setPalette(redColor);//队首    队空时仅显示队首红色箭头
    ui->label_2->setPalette(disColor);
    ui->label_3->setPalette(disColor);
    ui->label_4->setPalette(disColor);
    ui->label_5->setPalette(disColor);
    ui->label_6->setPalette(disColor);
    ui->label_7->setPalette(disColor);
    ui->label_8->setPalette(disColor);
    ui->label_9->setPalette(disColor);
    ui->label_10->setPalette(disColor);
    ui->label_11->setPalette(disColor);
    ui->label_12->setPalette(disColor);

        QFont uiLabel("Microsoft YaHei", 10, 75);
         ui->label->setText("Status enQueue( Queue *Q, elelm e){");
    ui->label_15->setText("   if(((Q.rear + 1) % MaxLen) == Q.front)");
    ui->label_16->setText("         return ERROR;");
    ui->label_17->setText("   else{ Q->data[Q->rear] = x;");
    ui->label_18->setText("         Q->rear = ((Q->rear)+1)%MaxLen;");
    ui->label_19->setText("      }");
    ui->label_20->setText(" }");

    ui->label_28->setText("Elem outQueue (Queue *Q){");
    ui->label_29->setText("     if( Q.front == Q.rear)");
    ui->label_30->setText("         return ERROR;");
    ui->label_31->setText("      else{");
    ui->label_32->setText("        Q->front = (Q->front+1)%MaxLen;");
    ui->label_33->setText("          }");
    ui->label_34->setText(" }");
    ui->label->setFont(uiLabel);
    ui->label_15->setFont(uiLabel);
    ui->label_16->setFont(uiLabel);
    ui->label_17->setFont(uiLabel);
    ui->label_18->setFont(uiLabel);
    ui->label_19->setFont(uiLabel);
    ui->label_20->setFont(uiLabel);
    ui->label_28->setFont(uiLabel);
    ui->label_29->setFont(uiLabel);
    ui->label_30->setFont(uiLabel);
    ui->label_31->setFont(uiLabel);
    ui->label_32->setFont(uiLabel);
    ui->label_33->setFont(uiLabel);
    ui->label_34->setFont(uiLabel);


}

QueueEnter::~QueueEnter()
{
    delete ui;
}

void QueueEnter::paintEvent(QPaintEvent *event)//绘制演示区
{
        QPainter painter(this);
        QPen pen(Qt::green, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
        painter.setPen(pen);
        painter.drawEllipse(301, 213, 204, 210);//外圆
        painter.drawEllipse(340, 253, 129, 135);//内圆
        painter.drawLine(405,213,405,253);//顺时针线段
        painter.drawLine(458,229,437,263);
        painter.drawLine(497,275,463,292);
        painter.drawLine(505,319,469,319);
        painter.drawLine(496,362,464,348);
        painter.drawLine(461,405,441,375);
        painter.drawLine(405,423,405,388);
        painter.drawLine(353,409,371,377);
        painter.drawLine(311,364,345,347);
        painter.drawLine(301,319,340,319);
        painter.drawLine(310,276,346,293);
        painter.drawLine(348,230,370,264);
      //  painter.drawPixmap(0,0,1400,900,QPixmap(":/img/timg1.jpg"));

}

void QueueEnter::display(char data, int place, bool status){
    switch(place){
    case 1:
        ui->lineEdit_1->setFrame(status);
        ui->lineEdit_1->setText(QString(data));
        break;
    case 2:
        ui->lineEdit_2->setFrame(status);
        ui->lineEdit_2->setText(QString(data));
        break;
    case 3:
        ui->lineEdit_3->setFrame(status);
        ui->lineEdit_3->setText(QString(data));
        break;
    case 4:
        ui->lineEdit_4->setFrame(status);
        ui->lineEdit_4->setText(QString(data));
        break;
    case 5:
        ui->lineEdit_5->setFrame(status);
        ui->lineEdit_5->setText(QString(data));
        break;
    case 6:
        ui->lineEdit_6->setFrame(status);
        ui->lineEdit_6->setText(QString(data));
        break;
    case 7:
        ui->lineEdit_7->setFrame(status);
        ui->lineEdit_7->setText(QString(data));
        break;
    case 8:
        ui->lineEdit_8->setFrame(status);
        ui->lineEdit_8->setText(QString(data));
        break;
    case 9:
        ui->lineEdit_9->setFrame(status);
        ui->lineEdit_9->setText(QString(data));
        break;
    case 10:
        ui->lineEdit_10->setFrame(status);
        ui->lineEdit_10->setText(QString(data));
        break;
    case 11:
        ui->lineEdit_11->setFrame(status);
        ui->lineEdit_11->setText(QString(data));
        break;
    case 12:
        ui->lineEdit_12->setFrame(status);
        ui->lineEdit_12->setText(QString(data));
        break;
    default:
        break;

    }
}

void QueueEnter::setColor(int num,QPalette Color){//设置箭头颜色
    switch(num){

    case 1:
        ui->label_1->setPalette(Color);
        break;
    case 2:
        ui->label_2->setPalette(Color);
        break;
    case 3:
        ui->label_3->setPalette(Color);
        break;
    case 4:
        ui->label_4->setPalette(Color);
        break;
    case 5:
        ui->label_5->setPalette(Color);
        break;
    case 6:
        ui->label_6->setPalette(Color);
        break;
    case 7:
        ui->label_7->setPalette(Color);
        break;
    case 8:
        ui->label_8->setPalette(Color);
        break;
    case 9:
        ui->label_9->setPalette(Color);
        break;
    case 10:
        ui->label_10->setPalette(Color);
        break;
    case 11:
        ui->label_11->setPalette(Color);
        break;
    case 0:
    case 12:
        ui->label_12->setPalette(Color);
        break;
    default:
        break;
    }
}

void QueueEnter::on_enterButton_clicked()
{
    ui->enterButton->setEnabled(false);
    if(ui->enterLineEdit->text().isEmpty()){    //空
        qDebug("empty");
            ui->enterButton->setEnabled(true);
        return;
    }
    char data = ui->enterLineEdit->text().at(0).toAscii();
    ui->label->setPalette(redColor);
    sleepOneSecond();
    ui->label->setPalette(blackColor);
    ui->label_15->setPalette(redColor);
    sleepOneSecond();
    if(Len == 11){
        ui->label_15->setPalette(blackColor);
        ui->label_16->setPalette(redColor);
        sleepOneSecond();
        ui->label_16->setPalette(blackColor);
            QMessageBox::warning(NULL,"队满","队列数据满");//队满退出
                ui->enterButton->setEnabled(true);
            return;
    }
    ui->label_15->setPalette(blackColor);
    ui->label_17->setPalette(redColor);
    sleepOneSecond();
    ui->label_17->setPalette(blackColor);
    ui->label_18->setPalette(redColor);
    sleepOneSecond();
    ui->label_18->setPalette(blackColor);
    save.enqueue(data);
    Len++;//长度加一
    if(Len==1){
    setColor(endPointer+1,startColor);//设置队首箭头
    }
    else{
    setColor(endPointer+1,disColor);
    }
    endPointer=(endPointer+1)%12;//队尾前移
    setColor(endPointer+1,endColor);
    char tempData;//存储队员数据
    int place = (endPointer-Len+12)%12;//存储当前访问圆圈方框位置
    while(!save.empty()){
        tempData = save.dequeue();
        temp.enqueue(tempData);
        display(tempData,place+1,1);
        place=(place+1+12)%12;
    }
    temp.swap(save);
    ui->enterButton->setEnabled(true);
}

void QueueEnter::on_outButton_clicked()
{
    ui->outButton->setEnabled(false);
    ui->label_28->setPalette(redColor);
    sleepOneSecond();
    ui->label_28->setPalette(blackColor);
    ui->label_29->setPalette(redColor);
    sleepOneSecond();

    if(save.empty()){
            ui->label_29->setPalette(blackColor);
            ui->label_30->setPalette(redColor);
            sleepOneSecond();
            ui->label_30->setPalette(blackColor);

            QMessageBox::warning(NULL,"队空","队列数据为空");//队空退出
                ui->outButton->setEnabled(true);
        return;
    }
        ui->label_29->setPalette(blackColor);
    ui->label_31->setPalette(redColor);
    sleepOneSecond();
    ui->label_31->setPalette(blackColor);
    ui->label_32->setPalette(redColor);
    sleepOneSecond();
    ui->label_32->setPalette(blackColor);
    char data = save.dequeue();
    ui->outLineEdit->setText(QString(data));
    int startPlace = (endPointer-Len+12)%12;
    qDebug()<<startPlace;

    setColor(startPlace+1,disColor);
    setColor((startPlace+2)%12,startColor);
    Len--;
    ui->outButton->setEnabled(true);
}

void QueueEnter::on_explainButton_clicked()
{
    QMessageBox::information(this,"说明","<p>演示过程通过按钮来进行控制，当按钮为灰色时无法点击。"
                             "演示过程在演示区进行，算法区显示代码并可对当前行红色显示</p>"
                             " 在“入队元素”后的栏中输入要入队的元素，点击入队按钮，将进行入队"
                             "操作（默认仅将第一个字符作为入队数据）。"
                             "点击出队按钮，将进行出队操作，并将出队元素输出到上方栏中。");
}

void QueueEnter::on_backButton_clicked()
{
    this->close();
}

void QueueEnter::sleepOneSecond()
{
    QElapsedTimer t;
    t.start();
    while(t.elapsed()<1000)
    {
        QCoreApplication::processEvents();
    }
}
