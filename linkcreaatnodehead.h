#ifndef LINKCREAATNODEHEAD_H
#define LINKCREAATNODEHEAD_H

#include <QMainWindow>

namespace Ui {
class linkCreaatNodeHead;
}

class linkCreaatNodeHead : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit linkCreaatNodeHead(QWidget *parent = 0);
    ~linkCreaatNodeHead();
    
private:
    Ui::linkCreaatNodeHead *ui;
};

#endif // LINKCREAATNODEHEAD_H
