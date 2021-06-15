#ifndef QSS_H
#define QSS_H

#include<QString>
class Qss
{
public:
    Qss();
    //背景颜色
    QString BackgroundColor(QString red,QString green,QString blue,QString alpha);
    //边框颜色
    QString borderColor(QString red,QString green,QString blue,QString alpha);
    //字体颜色
    QString Color(QString red,QString green,QString blue,QString alpha);
    //选择文字颜色
    QString selectionColor(QString red,QString green,QString blue,QString alpha);
    //选择文字背景颜色
    QString selectionBackgroundColor(QString red,QString green,QString blue,QString alpha);
};

#endif // QSS_H
