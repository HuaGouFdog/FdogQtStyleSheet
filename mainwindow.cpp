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

void MainWindow::Labelshow()
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
    QString str_4 = QString("border-style:%1;").arg(ui->comboBox->currentText());
    QString str_5 = QString("border-width:%1px;").arg(ui->spinBox_2->value());
    QString str_6 = QString("border-radius:%1px;").arg(ui->spinBox_3->value());

    QString str_7 = QString("font:%1px \"%2\";").arg(ui->spinBox->value()).arg(ui->fontComboBox->currentText());

    qDebug().noquote()<<str_7;


    QString s = str_1+str_2+str_3+str_4+str_5+str_6+str_7;
    ui->label->setStyleSheet(s);
    ui->pushButton->setStyleSheet(s);
    ui->lineEdit_13->setStyleSheet(s);
    ui->comboBox_6->setStyleSheet(s);
    ui->spinBox_5->setStyleSheet(s);
    ui->buttonBox->setStyleSheet(s);
    ui->checkBox->setStyleSheet(s);
    ui->radioButton->setStyleSheet(s);
    ui->textEdit->setText(s);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->lineEdit->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_2_valueChanged(int value)
{
    ui->lineEdit_2->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_3_valueChanged(int value)
{
    ui->lineEdit_3->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_4_valueChanged(int value)
{
    ui->lineEdit_4->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{
    ui->lineEdit_5->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_6_valueChanged(int value)
{
    ui->lineEdit_6->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_7_valueChanged(int value)
{
    ui->lineEdit_7->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_8_valueChanged(int value)
{
    ui->lineEdit_8->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_9_valueChanged(int value)
{
    ui->lineEdit_9->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_10_valueChanged(int value)
{
    ui->lineEdit_10->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_11_valueChanged(int value)
{
    ui->lineEdit_11->setText(QString::number(value));
    Labelshow();
}

void MainWindow::on_horizontalSlider_12_valueChanged(int value)
{
    ui->lineEdit_12->setText(QString::number(value));
    Labelshow();
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
    Labelshow();
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    Labelshow();
}
