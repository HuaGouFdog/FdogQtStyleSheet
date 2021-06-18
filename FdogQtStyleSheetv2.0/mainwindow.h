#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include"qss.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    int currentNewRow =0;
    QFont font;
    Qss qss;
public:
    explicit MainWindow(QWidget *parent = 0);
    QString setColor(QString type);
    ~MainWindow();

signals:
    void senddata();

private slots:
    void showdata();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_pushButton_13_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_spinBox_4_valueChanged(const QString &arg1);

    void on_spinBox_5_valueChanged(const QString &arg1);

    void on_spinBox_6_valueChanged(const QString &arg1);

    void on_spinBox_7_valueChanged(const QString &arg1);

    void on_spinBox_8_valueChanged(const QString &arg1);

    void on_spinBox_9_valueChanged(const QString &arg1);

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_spinBox_3_valueChanged(const QString &arg1);

    void on_comboBox_4_currentIndexChanged(int index);

    void on_comboBox_5_currentIndexChanged(int index);

    void on_comboBox_6_currentIndexChanged(int index);

    void on_comboBox_3_currentIndexChanged(int index);

    void on_comboBox_7_currentIndexChanged(int index);



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
