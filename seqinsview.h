#ifndef SEQINSVIEW_H
#define SEQINSVIEW_H

#include <QWidget>
#include<QMessageBox>
#include <QElapsedTimer>
#include<QDebug>

namespace Ui {
class seqInsView;
}

class seqInsView : public QWidget
{
    Q_OBJECT
    
public:
    explicit seqInsView(QWidget *parent = 0);
    ~seqInsView();
    void refresh();
    void display(int,QString);

    QString  element;
    int place;
    QString elem;
    int len;
    
private slots:
    void on_startButton_clicked();

    void on_pauseButton_clicked();

    void on_frashButton_clicked();

    void on_explainButton_clicked();

    void on_backButton_clicked();

private:
    Ui::seqInsView *ui;
    bool pause;//暂停标记
    bool startSign;//开始标记
};

#endif // SEQINSVIEW_H
