#include <QApplication>
#include "mainwindow.h"
#include<QTextCodec>
#include<QDebug>
#include<QFontDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec *codec = QTextCodec::codecForName("System");    //获取系统编码
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForTr(codec);




    MainWindow w;
    a.setStyleSheet("QLineEdit {font-family:Microsoft YaHei UI; font:14px}");
    w.setWindowTitle(QObject::tr("数据结构教学软件"));
    w.show();
    
    return a.exec();
}
