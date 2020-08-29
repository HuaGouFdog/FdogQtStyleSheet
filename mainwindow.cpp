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
    //加载动态图
    m_movie = new QMovie(":/lib/dongtaitu.gif");
    //设置动态图大小
    m_si.setWidth(200);
    m_si.setHeight(200);
    m_movie->setScaledSize(m_si);
    //标签加载动态图
    ui->label_79->setMovie(m_movie);
    //开始
    m_movie->start();
    ui->tableWidget->setAlternatingRowColors(true);
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
    //进度条划过
    QString str_15 = QString("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(%1, %2, %3, %4), stop:1 rgba(%5, %6, %7, %8));")
            .arg(ui->horizontalSlider_22->value())
            .arg(ui->horizontalSlider_23->value()).arg(ui->horizontalSlider_24->value()).arg(ui->horizontalSlider_25->value())
            .arg(ui->horizontalSlider_26->value()).arg(ui->horizontalSlider_27->value()).arg(ui->horizontalSlider_28->value())
            .arg(ui->horizontalSlider_29->value());
    QString str_16 = QString("width:%1px;").arg(ui->spinBox_14->value());
    QString str_17 = QString("padding-top:%1px;padding-bottom:%2px;").arg(ui->spinBox_15->value()).arg(ui->spinBox_15->value());
    QString str_18 = QString("min-height:%1px;").arg(ui->spinBox_16->value());
    QString str_19 = QString("QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{background:rgba(%1,%2,%3,%4);}QScrollBar::sub-page:vertical,QScrollBar::sub-page:vertical{background:rgba(%5,%6,%7,%8);}")
            .arg(ui->horizontalSlider_22->value()).arg(ui->horizontalSlider_23->value()).arg(ui->horizontalSlider_24->value())
            .arg(ui->horizontalSlider_25->value()).arg(ui->horizontalSlider_26->value()).arg(ui->horizontalSlider_27->value())
            .arg(ui->horizontalSlider_28->value()).arg(ui->horizontalSlider_29->value());
    QString str_20 = QString("border-style:%1;").arg(ui->comboBox_14->currentText());
    //边框宽度
    QString str_21 = QString("font-style:%1;").arg(ui->comboBox_3->currentText());
    QString str_22 = QString("font-weight: %1;").arg(ui->comboBox_4->currentText());
    QString str_23 = QString("text-decoration:%1;").arg(ui->comboBox_5->currentText());
    QString str_24 = QString("height:%1px;").arg(ui->spinBox_18->value());
    QString str_25 = QString("width:%1px;").arg(ui->spinBox_17->value());
    QString str_26 = QString("width:%1px;").arg(ui->spinBox_18->value());
    QString str_27 = QString("spacing:%1px;").arg(ui->spinBox_21->value());
    QString str_28 = QString("width:%1px;height:%2px;").arg(ui->spinBox_22->value()).arg(ui->spinBox_22->value());
    QString str_29 = QString("alternate-background-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider_22->value())
            .arg(ui->horizontalSlider_23->value()).arg(ui->horizontalSlider_24->value()).arg(ui->horizontalSlider_25->value());
    QString str_30 = QString("gridline-color:rgba(%1,%2,%3,%4);").arg(ui->horizontalSlider_26->value())
            .arg(ui->horizontalSlider_27->value()).arg(ui->horizontalSlider_28->value()).arg(ui->horizontalSlider_29->value());
    QString s;
    switch (control)
    {
    case 0:
        s = str_1+str_2+str_3+str_4+str_5+str_6+str_7+str_21+str_22+str_23;
        ui->label->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 1:
        s = str_1+str_2+str_3+str_4+str_5+str_6+str_7;
        ui->lineEdit_13->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 2:
        s = str_1+str_2+str_3+str_4+str_5+str_6+str_7;
        ui->pushButton->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 3:
        s = "QScrollBar:vertical{"+str_1+str_2+str_4+str_5+str_6+str_16+str_17+"}"+"QScrollBar::handle:vertical{"+str_20+str_14+str_13+str_11+str_12+str_18+"}"+str_19;
         ui->verticalScrollBar->setStyleSheet(s);
         qDebug()<<s;
         ui->textEdit->setText(s);
        break;
    case 4:
        s = "QSlider::groove:horizontal{"+str_1+str_2+str_4+str_5+str_6+str_8+str_9+"}"+"QSlider::handle:horizontal{"+str_11+str_12+str_20+str_14+str_10+str_13+"}"+"QSlider::sub-page:horizontal {"+str_15+"}";
        qDebug()<<s;
        ui->horizontalSlider_13->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 5:
        s = "QProgressBar{"+str_1+str_2+str_3+str_4+str_5+str_6+str_7+"text-align: center;"+"}"+"QProgressBar::chunk{"+str_11+str_26+"}";
        ui->progressBar->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 6:
        s="QWidget::tab{"+str_1+str_2+str_3+str_4+str_5+str_6+str_7+str_24+str_25+"}";
        //qDebug()<<s;
        ui->tabWidget_2->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 7:
        s="QToolBox::tab {"+str_1+str_2+str_3+str_4+str_5+str_6+str_7+"}";
        ui->toolBox->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 8:
        s="QTableWidget{"+str_1+str_2+str_3+str_4+str_5+str_6+str_29+str_30+str_7+"}"+"QHeaderView::section{"+str_4+str_5+str_6+str_11+str_12+"}";
        ui->tableWidget->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 9:
        s = "QCheckBox{"+str_1+str_2+str_3+str_4+str_5+str_6+str_7+str_21+str_22+str_23+str_27+"}"+"QCheckBox::indicator{"+str_28+str_11+str_12+"}";
        ui->checkBox->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 10:
       s = "QRadioButton{"+str_1+str_2+str_3+str_4+str_5+str_6+str_7+str_21+str_22+str_23+str_27+"}"+"QRadioButton::indicator{"+str_28+str_11+str_12+"}";
        ui->radioButton->setStyleSheet(s);
        ui->textEdit->setText(s);
        break;
    case 11:
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
    ui->lineEdit_14->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_15_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_15->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_16_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_16->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_17_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_17->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_18_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_18->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_19_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_19->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_20_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_20->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_21_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_21->setText(QString::number(value));
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

void MainWindow::on_horizontalSlider_22_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_22->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_23_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_23->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_24_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_24->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_25_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_25->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_26_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_26->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_27_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_27->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_28_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_28->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_29_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_29->setText(QString::number(value));
}

void MainWindow::on_spinBox_14_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_15_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_16_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_radioButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    control = 0;
}

void MainWindow::on_radioButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    control = 1;
}

void MainWindow::on_radioButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    control = 2;
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    control = 3;
}

void MainWindow::on_radioButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    control = 4;
}

void MainWindow::on_radioButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    control = 5;
}

void MainWindow::on_radioButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    control = 6;
}

void MainWindow::on_radioButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    control = 7;
}

void MainWindow::on_horizontalSlider_30_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_30->setText(QString::number(value));
}
void MainWindow::on_horizontalSlider_31_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_31->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_32_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_32->setText(QString::number(value));
}

void MainWindow::on_horizontalSlider_33_valueChanged(int value)
{
    Labelshow();
    ui->lineEdit_33->setText(QString::number(value));
}


void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    Labelshow();
}

void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    Labelshow();
}

void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    Labelshow();
}

void MainWindow::on_radioButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
    control = 11;
}

void MainWindow::on_spinBox_18_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_17_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_19_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_radioButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    control = 9;
}

void MainWindow::on_radioButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
    control = 10;
}

void MainWindow::on_spinBox_21_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_spinBox_22_valueChanged(int arg1)
{
    Labelshow();
}

void MainWindow::on_radioButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
    control = 8;
}
