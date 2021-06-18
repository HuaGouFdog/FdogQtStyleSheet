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
    //设置边框风格
    QString borderStyle(QString style);
    //设置边框大小
    QString borderWidth(QString width);
    //设置整圆角大小
    QString borderAllRadius(QString width);
    //设置四边圆角大小
    QString borderTopLeftRadius(QString width);
    QString borderTopRightRadius(QString width);
    QString borderBottomLeftRadius(QString width);
    QString borderBottomRightRadius(QString width);
    //设置字体
    QString fontFamily(QString family);
    //设置字体大小
    QString fontSize(QString size);
    //设置字体对齐方式
    //QString fontAlignment(QString alignment);
    //设置字体样式
    QString fontStyle(QString style);
    //设置字体粗细
    QString fontWeight(QString weight);
    //文字修饰
    QString fontDecoration(QString decoration);
};

#endif // QSS_H
