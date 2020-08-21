/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QSlider *horizontalSlider_5;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QSlider *horizontalSlider_6;
    QLineEdit *lineEdit_6;
    QLabel *label_9;
    QSlider *horizontalSlider_7;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QSlider *horizontalSlider_8;
    QLineEdit *lineEdit_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *horizontalSlider_3;
    QLabel *label_5;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QSlider *horizontalSlider_9;
    QLineEdit *lineEdit_9;
    QLabel *label_15;
    QSlider *horizontalSlider_10;
    QLineEdit *lineEdit_10;
    QLabel *label_16;
    QSlider *horizontalSlider_11;
    QLineEdit *lineEdit_11;
    QLabel *label_17;
    QSlider *horizontalSlider_12;
    QLineEdit *lineEdit_12;
    QGroupBox *groupBox_5;
    QLabel *label_6;
    QFontComboBox *fontComboBox;
    QLabel *label_11;
    QSpinBox *spinBox;
    QLabel *label_12;
    QLabel *label_13;
    QSpinBox *spinBox_2;
    QLabel *label_18;
    QComboBox *comboBox;
    QSpinBox *spinBox_3;
    QLabel *label_19;
    QLabel *label_20;
    QComboBox *comboBox_2;
    QLabel *label_21;
    QSpinBox *spinBox_4;
    QComboBox *comboBox_3;
    QLabel *label_22;
    QComboBox *comboBox_4;
    QLabel *label_23;
    QComboBox *comboBox_5;
    QLabel *label_24;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_2;
    QLabel *label;
    QGroupBox *groupBox_8;
    QPushButton *pushButton;
    QWidget *tab_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(970, 561);
        MainWindow->setMinimumSize(QSize(970, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, 9, 951, 301));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid #4A708B;\n"
"    background: #C0C0C0;\n"
"    height: 5px;\n"
"    border-radius: 1px;\n"
"    padding-left:-1px;\n"
"    padding-right:-1px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"    background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"        stop: 0 #5DCCFF, stop: 1 #1874CD);\n"
"    border: 1px solid #4A708B;\n"
"    height: 10px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #575757;\n"
"    border: 0px solid #777;\n"
"    height: 10px;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal\n"
"{\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5,\n"
"        stop:0.6 #45ADED, stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
""
                        "}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #2A8BDA,\n"
"        stop:0.778409 rgba(255, 255, 255, 255));\n"
"\n"
"    width: 11px;\n"
"    margin-top: -3px;\n"
"    margin-bottom: -3px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #00009C;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #aaa;\n"
"    border-radius: 4px;\n"
"}"));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(200, 10, 171, 138));
        groupBox_6->setMaximumSize(QSize(300, 138));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(15, 0));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        horizontalSlider_5 = new QSlider(groupBox_6);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setMinimumSize(QSize(0, 0));
        horizontalSlider_5->setMaximum(255);
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_5, 0, 1, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(40, 16777215));

        gridLayout_3->addWidget(lineEdit_5, 0, 2, 1, 1);

        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(15, 0));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        horizontalSlider_6 = new QSlider(groupBox_6);
        horizontalSlider_6->setObjectName(QStringLiteral("horizontalSlider_6"));
        horizontalSlider_6->setMaximum(255);
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_6, 1, 1, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox_6);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(40, 16777215));

        gridLayout_3->addWidget(lineEdit_6, 1, 2, 1, 1);

        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(15, 0));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        horizontalSlider_7 = new QSlider(groupBox_6);
        horizontalSlider_7->setObjectName(QStringLiteral("horizontalSlider_7"));
        horizontalSlider_7->setMaximum(255);
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_7, 2, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMaximumSize(QSize(40, 16777215));

        gridLayout_3->addWidget(lineEdit_7, 2, 2, 1, 1);

        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(15, 0));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        horizontalSlider_8 = new QSlider(groupBox_6);
        horizontalSlider_8->setObjectName(QStringLiteral("horizontalSlider_8"));
        horizontalSlider_8->setMaximum(255);
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_8, 3, 1, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_6);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMaximumSize(QSize(40, 16777215));

        gridLayout_3->addWidget(lineEdit_8, 3, 2, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(7, 10, 171, 138));
        groupBox_4->setMaximumSize(QSize(300, 138));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lineEdit, 0, 2, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lineEdit_2, 1, 2, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lineEdit_3, 2, 2, 1, 1);

        horizontalSlider_4 = new QSlider(groupBox_4);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_4, 3, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(0, 0));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(15, 0));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(15, 0));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        horizontalSlider_3 = new QSlider(groupBox_4);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(15, 0));

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(15, 0));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_4);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(lineEdit_4, 3, 2, 1, 1);

        groupBox_7 = new QGroupBox(groupBox);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(390, 10, 171, 138));
        groupBox_7->setMaximumSize(QSize(300, 138));
        gridLayout_4 = new QGridLayout(groupBox_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(15, 0));

        gridLayout_4->addWidget(label_14, 0, 0, 1, 1);

        horizontalSlider_9 = new QSlider(groupBox_7);
        horizontalSlider_9->setObjectName(QStringLiteral("horizontalSlider_9"));
        horizontalSlider_9->setMinimumSize(QSize(0, 0));
        horizontalSlider_9->setMaximum(255);
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_9, 0, 1, 1, 1);

        lineEdit_9 = new QLineEdit(groupBox_7);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(lineEdit_9, 0, 2, 1, 1);

        label_15 = new QLabel(groupBox_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(15, 0));

        gridLayout_4->addWidget(label_15, 1, 0, 1, 1);

        horizontalSlider_10 = new QSlider(groupBox_7);
        horizontalSlider_10->setObjectName(QStringLiteral("horizontalSlider_10"));
        horizontalSlider_10->setMaximum(255);
        horizontalSlider_10->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_10, 1, 1, 1, 1);

        lineEdit_10 = new QLineEdit(groupBox_7);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(lineEdit_10, 1, 2, 1, 1);

        label_16 = new QLabel(groupBox_7);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(15, 0));

        gridLayout_4->addWidget(label_16, 2, 0, 1, 1);

        horizontalSlider_11 = new QSlider(groupBox_7);
        horizontalSlider_11->setObjectName(QStringLiteral("horizontalSlider_11"));
        horizontalSlider_11->setMaximum(255);
        horizontalSlider_11->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_11, 2, 1, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_7);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(lineEdit_11, 2, 2, 1, 1);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(15, 0));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        horizontalSlider_12 = new QSlider(groupBox_7);
        horizontalSlider_12->setObjectName(QStringLiteral("horizontalSlider_12"));
        horizontalSlider_12->setMaximum(255);
        horizontalSlider_12->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_12, 3, 1, 1, 1);

        lineEdit_12 = new QLineEdit(groupBox_7);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(lineEdit_12, 3, 2, 1, 1);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 160, 551, 131));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 22, 54, 16));
        fontComboBox = new QFontComboBox(groupBox_5);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(70, 22, 80, 20));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 48, 54, 16));
        spinBox = new QSpinBox(groupBox_5);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 49, 80, 18));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 74, 16, 16));
        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 74, 54, 16));
        spinBox_2 = new QSpinBox(groupBox_5);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(230, 75, 80, 18));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(170, 74, 54, 16));
        comboBox = new QComboBox(groupBox_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 74, 80, 20));
        spinBox_3 = new QSpinBox(groupBox_5);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));
        spinBox_3->setGeometry(QRect(390, 25, 80, 18));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(330, 24, 54, 16));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(330, 50, 54, 16));
        comboBox_2 = new QComboBox(groupBox_5);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(390, 50, 80, 20));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 100, 54, 16));
        spinBox_4 = new QSpinBox(groupBox_5);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));
        spinBox_4->setGeometry(QRect(230, 25, 80, 18));
        comboBox_3 = new QComboBox(groupBox_5);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(230, 100, 80, 20));
        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(170, 100, 54, 16));
        comboBox_4 = new QComboBox(groupBox_5);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 100, 80, 20));
        label_23 = new QLabel(groupBox_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(170, 50, 54, 16));
        comboBox_5 = new QComboBox(groupBox_5);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(230, 50, 80, 20));
        label_24 = new QLabel(groupBox_5);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(170, 24, 54, 16));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(570, 10, 371, 281));
        groupBox_3->setMinimumSize(QSize(0, 0));
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setPointSize(9);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(textEdit);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 310, 951, 241));
        tabWidget->setMinimumSize(QSize(0, 0));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 231, 81));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 141, 31));
        label->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"border-radius:5px;"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_8 = new QGroupBox(tab);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 100, 231, 81));
        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 30, 111, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Qt\346\240\267\345\274\217\350\241\250\344\270\200\351\224\256\347\224\237\346\210\220", nullptr));
        groupBox->setTitle(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\350\276\271\346\241\206\351\242\234\350\211\262", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "R:", nullptr));
        lineEdit_5->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "G:", nullptr));
        lineEdit_6->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "B:", nullptr));
        lineEdit_7->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "A:", nullptr));
        lineEdit_8->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\203\214\346\231\257\351\242\234\350\211\262", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "0", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        lineEdit_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "G:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "B:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "A:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "R:", nullptr));
        lineEdit_4->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "R:", nullptr));
        lineEdit_9->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "G:", nullptr));
        lineEdit_10->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "B:", nullptr));
        lineEdit_11->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "A:", nullptr));
        lineEdit_12->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\345\205\266\344\273\226", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\255\227\344\275\223:", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\244\247\345\260\217:", nullptr));
        label_12->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\351\243\216\346\240\274:", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\345\244\247\345\260\217:", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "none", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "solid", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "dotted", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "dashed", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "double", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "groove ", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "ridge", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "inset ", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "outset ", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "inherit ", nullptr));

        label_19->setText(QApplication::translate("MainWindow", "\345\234\206\350\247\222\345\244\247\345\260\217:", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\257\271\351\275\220:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "\345\267\246\344\270\212\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "\345\267\246\344\270\213\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(3, QApplication::translate("MainWindow", "\345\217\263\344\270\212\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(4, QApplication::translate("MainWindow", "\345\217\263\344\270\213\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(5, QApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
        comboBox_2->setItemText(6, QApplication::translate("MainWindow", "\344\270\255\344\270\212\345\261\205\344\270\255", nullptr));
        comboBox_2->setItemText(7, QApplication::translate("MainWindow", "\344\270\255\344\270\213\345\261\205\344\270\255", nullptr));
        comboBox_2->setItemText(8, QApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));

        label_21->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\347\262\227\347\273\206:", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("MainWindow", "normal", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainWindow", "oblique", nullptr));
        comboBox_3->setItemText(2, QApplication::translate("MainWindow", "italic", nullptr));

        label_22->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\346\240\267\345\274\217:", nullptr));
        comboBox_4->setItemText(0, QApplication::translate("MainWindow", "normal", nullptr));
        comboBox_4->setItemText(1, QApplication::translate("MainWindow", "bold", nullptr));
        comboBox_4->setItemText(2, QApplication::translate("MainWindow", "lighter", nullptr));

        label_23->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\344\277\256\351\245\260:", nullptr));
        comboBox_5->setItemText(0, QApplication::translate("MainWindow", "\346\227\240", nullptr));
        comboBox_5->setItemText(1, QApplication::translate("MainWindow", "underline", nullptr));
        comboBox_5->setItemText(2, QApplication::translate("MainWindow", "overline", nullptr));
        comboBox_5->setItemText(3, QApplication::translate("MainWindow", "line-through", nullptr));
        comboBox_5->setItemText(4, QApplication::translate("MainWindow", "blink", nullptr));

        label_24->setText(QApplication::translate("MainWindow", "\346\226\207\345\255\227\351\227\264\350\267\235:", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "QSS\344\273\243\347\240\201", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">background-color: rgba(170, 85, 255,255);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">border-color: rgba(0, 255, 255,255);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">color: rgba(0, 255, 255,255);</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right"
                        ":0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">font: 11pt &quot;80 Decibels&quot;;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana,Arial,Helvetica,sans-serif'; font-size:12pt; color:#333333; background-color:#ffffff;\">border-radius:150px;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'verdana,Arial,Helvetica,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">border-width:20px;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'verdana,Arial,Helvetica,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">letter-spacing : 1pt; /*\345\255\227\351\227\264\350\267\235\347\246\273*/</span></p></body"
                        "></html>", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Label\346\225\210\346\236\234", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\212\261\347\213\227\345\210\266\344\275\234", nullptr));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Button\346\225\210\346\236\234", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\350\212\261\347\213\227\346\230\276\347\244\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\347\241\200\347\273\204\344\273\266", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "123", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
