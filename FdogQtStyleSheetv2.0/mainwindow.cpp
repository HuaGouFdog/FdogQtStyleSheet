#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColor>
#include<QColorDialog>
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->splitter->setStretchFactor(0,10);
    ui->splitter->setStretchFactor(1,30);

    ui->splitter_2->setStretchFactor(0,100);
    ui->splitter_2->setStretchFactor(1,400);

    ui->splitter_3->setStretchFactor(0,20);
    ui->splitter_3->setStretchFactor(1,20);

    ui->spinBox->setValue(ui->label_3->maximumHeight());
    ui->spinBox_2->setValue(ui->label_3->maximumWidth());

    //默认选中
    ui->radioButton->setChecked(true);
    ui->radioButton_9->setChecked(true);

    connect(this,SIGNAL(senddata()),this,SLOT(showdata()));
}

QString MainWindow::setColor(QString type)
{
    QColor c = QColorDialog::getColor(Qt::blue,this,"fdog selet color",QColorDialog::ShowAlphaChannel);
    if(c.isValid())
    {
        if(type=="background-color")
        return qss.BackgroundColor(QString::number(c.red()),QString::number(c.green()),QString::number(c.blue()),QString::number(c.alpha()));
        if(type=="border-color")
        return qss.borderColor(QString::number(c.red()),QString::number(c.green()),QString::number(c.blue()),QString::number(c.alpha()));
        if(type=="color")
        return qss.Color(QString::number(c.red()),QString::number(c.green()),QString::number(c.blue()),QString::number(c.alpha()));
        if(type=="select-color")
        return qss.selectionColor(QString::number(c.red()),QString::number(c.green()),QString::number(c.blue()),QString::number(c.alpha()));
        if(type=="select-background-color")
        return qss.selectionBackgroundColor(QString::number(c.red()),QString::number(c.green()),QString::number(c.blue()),QString::number(c.alpha()));
    }
    return "";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showdata()
{
    switch (this->currentNewRow) {
    case 0:
        ui->label_3->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 1:
        ui->pushButton_15->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 2:
        ui->toolButton_7->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 3:
        ui->radioButton_4->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 4:
        ui->checkBox->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 5:
        ui->lineEdit_4->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 6:
        ui->textEdit_2->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 7:
        ui->spinBox_10->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 8:
        ui->comboBox_2->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 9:
        ui->horizontalScrollBar->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 10:
        ui->verticalScrollBar->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 11:
        ui->horizontalSlider->setStyleSheet(ui->textEdit->toPlainText());
        break;
    case 12:
        ui->verticalSlider->setStyleSheet(ui->textEdit->toPlainText());
        break;
    default:
        break;
    }
}


void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    //选择的行
    this->currentNewRow=currentRow;
    //qDebug()<<"选择的是"<<currentRow;
    switch (currentRow) {
    case 0:
        ui->stackedWidget->setCurrentIndex(0);
        ui->spinBox->setValue(ui->label_3->maximumHeight());
        ui->spinBox_2->setValue(ui->label_3->maximumWidth());
        break;
    case 1:
        ui->stackedWidget->setCurrentIndex(1);
        ui->spinBox->setValue(ui->pushButton_15->maximumHeight());
        ui->spinBox_2->setValue(ui->pushButton_15->maximumWidth());
        break;
    case 2:
        ui->stackedWidget->setCurrentIndex(2);
        ui->spinBox->setValue(ui->toolButton_7->maximumHeight());
        ui->spinBox_2->setValue(ui->toolButton_7->maximumWidth());
        break;
    case 3:
        ui->stackedWidget->setCurrentIndex(3);
        ui->spinBox->setValue(ui->radioButton_4->maximumHeight());
        ui->spinBox_2->setValue(ui->radioButton_4->maximumWidth());
        break;
    case 4:
        ui->stackedWidget->setCurrentIndex(4);
        ui->spinBox->setValue(ui->checkBox->maximumHeight());
        ui->spinBox_2->setValue(ui->checkBox->maximumWidth());
        break;
    case 5:
        ui->stackedWidget->setCurrentIndex(5);
        ui->spinBox->setValue(ui->lineEdit_4->maximumHeight());
        ui->spinBox_2->setValue(ui->lineEdit_4->maximumWidth());
        break;
    case 6:
        ui->stackedWidget->setCurrentIndex(6);
        ui->spinBox->setValue(ui->textEdit_2->maximumHeight());
        ui->spinBox_2->setValue(ui->textEdit_2->maximumWidth());
        break;
    case 7:
        ui->stackedWidget->setCurrentIndex(7);
        ui->spinBox->setValue(ui->spinBox_10->maximumHeight());
        ui->spinBox_2->setValue(ui->spinBox_10->maximumWidth());
        break;
    case 8:
        ui->stackedWidget->setCurrentIndex(8);
        ui->spinBox->setValue(ui->comboBox_2->maximumHeight());
        ui->spinBox_2->setValue(ui->comboBox_2->maximumWidth());
        break;
    case 9:
        ui->stackedWidget->setCurrentIndex(9);
        ui->spinBox->setValue(ui->horizontalScrollBar->maximumHeight());
        ui->spinBox_2->setValue(ui->horizontalScrollBar->maximumWidth());
        break;
    case 10:
        ui->stackedWidget->setCurrentIndex(10);
        ui->spinBox->setValue(ui->verticalScrollBar->maximumHeight());
        ui->spinBox_2->setValue(ui->verticalScrollBar->maximumWidth());
        break;
    case 11:
        ui->stackedWidget->setCurrentIndex(11);
        ui->spinBox->setValue(ui->horizontalSlider->maximumHeight());
        ui->spinBox_2->setValue(ui->horizontalSlider->maximumWidth());
        break;
    case 12:
        ui->stackedWidget->setCurrentIndex(12);
        ui->spinBox->setValue(ui->verticalSlider->maximumHeight());
        ui->spinBox_2->setValue(ui->verticalSlider->maximumWidth());
        break;
    default:
        break;
    }
    this->currentNewRow=currentRow;
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    switch (this->currentNewRow) {
    case 0:
        ui->label_3->setMaximumHeight(arg1);
        break;
    case 1:
        ui->pushButton_15->setMaximumHeight(arg1);
        break;
    case 2:
        ui->toolButton_7->setMaximumHeight(arg1);
        break;
    default:
        break;
    }
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    switch (this->currentNewRow) {
    case 0:
        ui->label_3->setMaximumWidth(arg1);
        break;
    case 1:
        ui->pushButton_15->setMaximumWidth(arg1);
        break;
    case 2:
        ui->toolButton_7->setMaximumWidth(arg1);
        break;
    default:
        break;
    }
}
void MainWindow::on_pushButton_13_clicked()
{
    ui->textEdit->append(setColor("background-color"));
    emit senddata();
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->textEdit->append(setColor("border-color"));
    emit senddata();
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->textEdit->append(setColor("color"));
    emit senddata();
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->textEdit->append(setColor("select-color"));
    emit senddata();
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->textEdit->append(setColor("select-background-color"));
    emit senddata();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit->clear();
    switch(index)
    {
    case 0://默认
        ui->textEdit->append(qss.borderStyle("none"));
        break;
    case 1://实线
        ui->textEdit->append(qss.borderStyle("solid"));
        break;
    case 2://虚线
        ui->textEdit->append(qss.borderStyle("dotted"));
        break;
    case 3://双实线
        ui->textEdit->append(qss.borderStyle("double"));
        break;
    }
    emit senddata();
}

void MainWindow::on_spinBox_4_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderWidth(arg1));
    emit senddata();
}

void MainWindow::on_spinBox_5_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderAllRadius(arg1));
    emit senddata();
}

void MainWindow::on_spinBox_6_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderTopLeftRadius(arg1));
    emit senddata();
}

void MainWindow::on_spinBox_7_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderTopRightRadius(arg1));
    emit senddata();
}

void MainWindow::on_spinBox_8_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderBottomLeftRadius(arg1));
    emit senddata();
}

void MainWindow::on_spinBox_9_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.borderBottomRightRadius(arg1));
    emit senddata();
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->textEdit->append(qss.fontFamily(ui->fontComboBox->currentText()));
    emit senddata();
}

void MainWindow::on_spinBox_3_valueChanged(const QString &arg1)
{
    ui->textEdit->append(qss.fontSize(arg1));
    emit senddata();
}

void MainWindow::on_comboBox_4_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        ui->textEdit->append(qss.fontStyle("normal"));
        break;
    case 1:
        ui->textEdit->append(qss.fontStyle("italic"));
        break;
    default:
        break;
    }
    emit senddata();
}

void MainWindow::on_comboBox_5_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        ui->textEdit->append(qss.fontWeight("normal"));
        break;
    case 1:
        ui->textEdit->append(qss.fontWeight("bold"));
        break;
    default:
        break;
    }
    emit senddata();
}

void MainWindow::on_comboBox_6_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        ui->textEdit->append(qss.fontDecoration("blink"));
        break;
    case 1:
        ui->textEdit->append(qss.fontDecoration("underline"));
        break;
    case 2:
        ui->textEdit->append(qss.fontDecoration("overline"));
        break;
    case 3:
        ui->textEdit->append(qss.fontDecoration("line-through"));
        break;
    default:
        break;
    }
    emit senddata();
}

void MainWindow::on_comboBox_3_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        ui->label_3->setAlignment(Qt::AlignLeft|Qt::AlignTop);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignLeft|Qt::AlignTop)");
        break;
    case 1:
        ui->label_3->setAlignment(Qt::AlignLeft|Qt::AlignBottom);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignLeft|Qt::AlignBottom)");
        break;
    case 2:
        ui->label_3->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignLeft|Qt::AlignVCenter)");
        break;
    case 3:
        ui->label_3->setAlignment(Qt::AlignRight|Qt::AlignTop);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignRight|Qt::AlignTop)");
        break;
    case 4:
        ui->label_3->setAlignment(Qt::AlignRight|Qt::AlignBottom);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignRight|Qt::AlignBottom)");
        break;
    case 5:
        ui->label_3->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignRight|Qt::AlignVCenter)");
        break;
    case 6:
        ui->label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignHCenter|Qt::AlignTop)");
        break;
    case 7:
        ui->label_3->setAlignment(Qt::AlignCenter|Qt::AlignBottom);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignCenter|Qt::AlignBottom)");
        break;
    case 8:
        ui->label_3->setAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        ui->lineEdit_2->setText("setAlignment(Qt::AlignCenter|Qt::AlignVCenter)");
        break;
    default:
        break;
    }
}

void MainWindow::on_comboBox_7_currentIndexChanged(int index)
{
    switch (index) {
    case 0:
        this->font.setStyleStrategy(QFont::NoAntialias);
        ui->label_3->setFont(this->font);
        ui->lineEdit_3->setText("setStyleStrategy(QFont::NoAntialias)");
        break;
    case 1:
        this->font.setStyleStrategy(QFont::PreferAntialias);
        ui->label_3->setFont(this->font);
        ui->lineEdit_3->setText("setStyleStrategy(QFont::PreferAntialias)");
        break;
    default:
        break;
    }
}
