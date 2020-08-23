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
    //QString str_8 = QString("QSlider::groove:horizontal{border: 1px solid #999999;height: 6px;left: 5px;right: 5px;background-color: rgb(255, 241, 44);border-radius: 2px;}");
    //QString str_9 = QString("QSlider::handle:horizontal{background-color: rgb(29, 89, 255);border: 2px solid rgb(255, 255, 255);width: 8px;margin-top: -3px;margin-bottom: -3px;border-radius: 5px;}");

    //背景颜色
    QString str_1 = QString("background-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider->value())
            .arg(ui->horizontalSlider_2->value()).arg(ui->horizontalSlider_3->value()).arg(ui->horizontalSlider_4->value());
    //边框颜色
    QString str_2 = QString("border-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider_5->value())
            .arg(ui->horizontalSlider_6->value()).arg(ui->horizontalSlider_7->value()).arg(ui->horizontalSlider_8->value());
    //文字颜色
    QString str_3 = QString("color: rgba(%1, %2, %3,%4);").arg(ui->horizontalSlider_9->value())
            .arg(ui->horizontalSlider_10->value()).arg(ui->horizontalSlider_11->value()).arg(ui->horizontalSlider_12->value());
    //边框风格
    QString str_4 = QString("border-style:%1;").arg(ui->comboBox->currentText());
    //边框宽度
    QString str_5 = QString("border-width:%1px;").arg(ui->spinBox_2->value());
    //圆角大小
    QString str_6 = QString("border-radius:%1px;").arg(ui->spinBox_3->value());
    //字号/字体
    QString str_7 = QString("font:%1px \"%2\";").arg(ui->spinBox->value()).arg(ui->fontComboBox->currentText());
    //进度条宽度
    QString str_8 = QString("height:%1px;").arg(ui->spinBox_6->value());
    //进度条内间距
    QString str_9 = QString("left:%1px;right:%2px;").arg(ui->spinBox_7->value()).arg(ui->spinBox_8->value());
    //进度条按钮宽/上高/下高
    QString str_10 = QString("width: %1px;margin-top: %2px;margin-bottom: %3px;").arg(ui->spinBox_9->value()).arg(ui->spinBox_10->value()).arg(ui->spinBox_11->value());
    //按钮背景颜色
    QString str_11 = QString("background-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider_14->value())
            .arg(ui->horizontalSlider_15->value()).arg(ui->horizontalSlider_16->value()).arg(ui->horizontalSlider_17->value());
    //按钮边框颜色
    QString str_12 = QString("border-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider_18->value())
            .arg(ui->horizontalSlider_19->value()).arg(ui->horizontalSlider_20->value()).arg(ui->horizontalSlider_21->value());
    //按钮圆角大小
    QString str_13 = QString("border-radius:%1px;").arg(ui->spinBox_12->value());
    //按钮边框宽度
    QString str_14 = QString("border-width:%1px;").arg(ui->spinBox_13->value());
    int control = ui->comboBox_7->currentIndex();
    QString s;
    switch (control)
    {
    case 0:
          s = str_1+str_2+str_3+str_4+str_5+str_6+str_7;
            ui->label->setStyleSheet(s);
            ui->pushButton->setStyleSheet(s);
            ui->lineEdit_13->setStyleSheet(s);
            ui->comboBox_6->setStyleSheet(s);
            ui->spinBox_5->setStyleSheet(s);
            ui->buttonBox->setStyleSheet(s);
            ui->checkBox->setStyleSheet(s);
            ui->radioButton->setStyleSheet(s);
            ui->textEdit->setText(s);
        break;
    case 1:
         s = "QSlider::groove:horizontal{"+str_1+str_2+str_4+str_5+str_6+str_8+str_9+"}"+"QSlider::handle:horizontal{"+str_11+str_12+str_4+str_14+str_10+str_13+"}";
         qDebug()<<s;
         ui->horizontalSlider_13->setStyleSheet(s);
         break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }


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

void MainWindow::on_horizontalSlider_14_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_15_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_16_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_17_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_18_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_19_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_20_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_horizontalSlider_21_valueChanged(int value)
{
    Labelshow();
}

void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    Labelshow();
}
void MainWindow::on_spinBox_7_valueChanged(int arg1)
{
    Labelshow();
}
void MainWindow::on_spinBox_8_valueChanged(int arg1)
{
    Labelshow();
}
void MainWindow::on_spinBox_9_valueChanged(int arg1)
{
    Labelshow();
}
void MainWindow::on_spinBox_10_valueChanged(int arg1)
{
    Labelshow();
}
void MainWindow::on_spinBox_11_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_12_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_13_valueChanged(int arg1)
{
    Labelshow();
}
