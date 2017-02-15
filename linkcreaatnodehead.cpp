#include "linkcreaatnodehead.h"
#include "ui_linkcreaatnodehead.h"

linkCreaatNodeHead::linkCreaatNodeHead(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::linkCreaatNodeHead)
{
    ui->setupUi(this);
}

linkCreaatNodeHead::~linkCreaatNodeHead()
{
    delete ui;
}
