#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColor>
#include<QColorDialog>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,10);
    ui->splitter->setStretchFactor(1,30);

    ui->splitter_2->setStretchFactor(0,70);
    ui->splitter_2->setStretchFactor(1,400);

    ui->splitter_3->setStretchFactor(0,20);
    ui->splitter_3->setStretchFactor(1,20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_13_clicked()
{
    QColor c = QColorDialog::getColor(Qt::blue,this,"fdog selet color",QColorDialog::ShowAlphaChannel);
    if(c.isValid())
    {
        QString strcolor = QString("background-color:rgba(%1,%2,%3,%4);").arg(QString::number(c.red()),
                                                                              QString::number(c.green()),
                                                                              QString::number(c.blue()),
                                                                              QString::number(c.alpha()));
    }
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    //选择的行
    this->currentNewRow=currentRow;
    qDebug()<<"选择的是"<<currentRow;
    switch (currentRow) {
    case 0:
        ui->stackedWidget->setCurrentIndex(0);
        break;
    case 1:
        ui->stackedWidget->setCurrentIndex(1);
        break;
    case 2:
        ui->stackedWidget->setCurrentIndex(2);
        break;
    case 3:

        break;
    case 4:

        break;
    case 5:

        break;
    case 6:
        break;
    default:
        break;
    }
}
