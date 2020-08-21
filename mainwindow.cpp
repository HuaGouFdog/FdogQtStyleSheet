#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("花狗制作");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Labelshow(int value)
{
    QString str_1 = QString("background-color:rgba(%1,%2,%3,%4);")
            .arg(ui->horizontalSlider->value())
            .arg(ui->horizontalSlider_2->value())
            .arg(ui->horizontalSlider_3->value())
            .arg(ui->horizontalSlider_4->value());
    QString str_2 = QString("border-color:rgba(%1,%2,%3,%4);")
            .arg(ui->horizontalSlider_5->value())
            .arg(ui->horizontalSlider_6->value())
            .arg(ui->horizontalSlider_7->value())
            .arg(ui->horizontalSlider_8->value());
    QString str_3 = QString("color: rgba(%1, %2, %3,%4);")
            .arg(ui->horizontalSlider_9->value())
            .arg(ui->horizontalSlider_10->value())
            .arg(ui->horizontalSlider_11->value())
            .arg(ui->horizontalSlider_12->value());
    QString s = str_1+str_2+str_3;
    ui->label->setStyleSheet(s);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->lineEdit->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->lineEdit_2->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    ui->lineEdit_3->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    ui->lineEdit_4->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    ui->lineEdit_5->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_6_valueChanged(int value)
{
    ui->lineEdit_6->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_7_valueChanged(int value)
{
    ui->lineEdit_7->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_8_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_9_valueChanged(int value)
{
    ui->lineEdit_9->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_10_valueChanged(int value)
{
    ui->lineEdit_10->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_11_valueChanged(int value)
{
    ui->lineEdit_11->setText(QString::number(value));
    Labelshow(value);
}

void MainWindow::on_horizontalSlider_12_valueChanged(int value)
{
    ui->lineEdit_12->setText(QString::number(value));
    Labelshow(value);
}


void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    qDebug()<<index;
    switch(index)
    {
    case 0:
        ui->label->setAlignment(Qt::AlignLeft|Qt::AlignTop);
        break;
    case 1:
     ui->label->setAlignment(Qt::AlignLeft|Qt::AlignBottom);
        break;
    case 2:
     ui->label->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        break;
    case 3:
     ui->label->setAlignment(Qt::AlignRight|Qt::AlignTop);
        break;
    case 4:
        ui->label->setAlignment(Qt::AlignRight|Qt::AlignBottom);
        break;
    case 5:
     ui->label->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        break;
    case 6:
     ui->label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        break;
    case 7:
     ui->label->setAlignment(Qt::AlignCenter|Qt::AlignBottom);
        break;
    case 8:
     ui->label->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        break;
    }
}


void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    //border-style:solid;
    QString str = QString("border-radius:%1px;").arg(arg1);
    ui->label->setStyleSheet(str);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "solid")
    {
        qDebug()<<"11";
        ui->label->setStyleSheet("border-style:solid;");
    }
}
