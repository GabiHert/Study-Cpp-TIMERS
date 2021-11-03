#include "mainwindow.h"
#include "ui_mainwindow.h"

int cont=0;
int state = 0;
int timerId = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::timerEvent(QTimerEvent *event)
{
    cont++;
    ui->label->setNum(cont);

}

void MainWindow::on_startStop_clicked()
{
    (state)?(state = 0):(state++);
    if(state)
    {
        if(!timerId)timerId = startTimer(100);
        ui->startStop->setText("Stop");
    }
    else
    {
        if(timerId)
        {
            killTimer(timerId);
            timerId=0;
        }
        ui->startStop->setText("Start");
    }

}


void MainWindow::on_Reset_clicked()
{
    cont = 0;
    ui->label->setNum(cont);
}

