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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
