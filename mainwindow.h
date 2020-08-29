#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMovie>
#include<QSize>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int control=0;
    QMovie * m_movie;                   //添加动态图
    QSize m_si;                         //动态图压缩大小
public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void Labelshow();

private slots:

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSlider_2_valueChanged(int value);

    void on_horizontalSlider_3_valueChanged(int value);

    void on_horizontalSlider_4_valueChanged(int value);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_6_valueChanged(int value);

    void on_horizontalSlider_7_valueChanged(int value);

    void on_horizontalSlider_8_valueChanged(int value);

    void on_horizontalSlider_9_valueChanged(int value);

    void on_horizontalSlider_10_valueChanged(int value);

    void on_horizontalSlider_11_valueChanged(int value);

    void on_horizontalSlider_12_valueChanged(int value);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_spinBox_3_valueChanged(int arg1);

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_spinBox_2_valueChanged(int arg1);


    void on_spinBox_valueChanged(int arg1);

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_horizontalSlider_14_valueChanged(int value);

    void on_horizontalSlider_15_valueChanged(int value);

    void on_horizontalSlider_16_valueChanged(int value);

    void on_horizontalSlider_17_valueChanged(int value);

    void on_horizontalSlider_18_valueChanged(int value);

    void on_horizontalSlider_19_valueChanged(int value);

    void on_horizontalSlider_20_valueChanged(int value);

    void on_horizontalSlider_21_valueChanged(int value);

    void on_spinBox_6_valueChanged(int arg1);
    void on_spinBox_7_valueChanged(int arg1);
    void on_spinBox_8_valueChanged(int arg1);
    void on_spinBox_9_valueChanged(int arg1);
    void on_spinBox_10_valueChanged(int arg1);
    void on_spinBox_11_valueChanged(int arg1);

    void on_spinBox_12_valueChanged(int arg1);

    void on_spinBox_13_valueChanged(int arg1);

    void on_horizontalSlider_22_valueChanged(int value);
    void on_horizontalSlider_23_valueChanged(int value);
    void on_horizontalSlider_24_valueChanged(int value);
    void on_horizontalSlider_25_valueChanged(int value);
    void on_horizontalSlider_26_valueChanged(int value);
    void on_horizontalSlider_27_valueChanged(int value);
    void on_horizontalSlider_28_valueChanged(int value);
    void on_horizontalSlider_29_valueChanged(int value);
    void on_spinBox_14_valueChanged(int arg1);

    void on_spinBox_15_valueChanged(int arg1);

    void on_spinBox_16_valueChanged(int arg1);

    void on_radioButton_2_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_horizontalSlider_30_valueChanged(int value);
    void on_horizontalSlider_31_valueChanged(int value);
    void on_horizontalSlider_32_valueChanged(int value);
    void on_horizontalSlider_33_valueChanged(int value);


    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_radioButton_10_clicked();

    void on_spinBox_18_valueChanged(int arg1);

    void on_spinBox_17_valueChanged(int arg1);

    void on_spinBox_19_valueChanged(int arg1);

    void on_radioButton_11_clicked();

    void on_radioButton_12_clicked();

    void on_spinBox_21_valueChanged(int arg1);

    void on_spinBox_22_valueChanged(int arg1);

    void on_radioButton_13_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
