#include <QApplication>
#include "mainwindow.h"
#include<QTextCodec>
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("System");    //获取系统编码
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);


    MainWindow w;
    w.setWindowTitle(QObject::tr("教学软件"));
    w.show();
    
    return a.exec();
}
