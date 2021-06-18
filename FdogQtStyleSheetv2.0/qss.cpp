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
    return QString("selectselection-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::selectionBackgroundColor(QString red, QString green, QString blue, QString alpha)
{
    return QString("selectselection-background-color:rgba(%1,%2,%3,%4);").arg(red,green,blue,alpha);
}

QString Qss::borderStyle(QString style)
{
    return QString("border-style:%1;").arg(style);
}

QString Qss::borderWidth(QString width)
{
    return QString("border-width:%1px;").arg(width);
}

QString Qss::borderAllRadius(QString width)
{
    return QString("border-radius:%1px;").arg(width);
}

QString Qss::borderTopLeftRadius(QString width)
{
    return QString("border-top-left-radius:%1px;").arg(width);
}

QString Qss::borderTopRightRadius(QString width)
{
    return QString("border-top-right-radius:%1px;").arg(width);
}

QString Qss::borderBottomLeftRadius(QString width)
{
    return QString("border-bottom-left-radius:%1px;").arg(width);
}

QString Qss::borderBottomRightRadius(QString width)
{
    return QString("border-bottom-right-radius:%1px;").arg(width);
}

QString Qss::fontFamily(QString family)
{
    return QString("font-family:%1;").arg(family);
}

QString Qss::fontSize(QString size)
{
    return QString("font-size:%1px;").arg(size);
}

QString Qss::fontStyle(QString style)
{
    return QString("font-style:%1;").arg(style);
}

QString Qss::fontWeight(QString weight)
{
    return QString("font-weight:%1;").arg(weight);
}

QString Qss::fontDecoration(QString decoration)
{
    return QString("text-decoration:%1;").arg(decoration);
}
