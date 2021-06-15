#include "qss.h"

Qss::Qss()
{

}

QString Qss::BackgroundColor(QString red, QString green, QString blue, QString alpha)
{
    return QString("background-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::borderColor(QString red, QString green, QString blue, QString alpha)
{
    return QString("border-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::Color(QString red, QString green, QString blue, QString alpha)
{
    return QString("color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::selectionColor(QString red, QString green, QString blue, QString alpha)
{
    return QString("select-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::selectionBackgroundColor(QString red, QString green, QString blue, QString alpha)
{
    return QString("select-background-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}
