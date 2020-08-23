#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
