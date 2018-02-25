#include "mousememory.h"

Mousememory::Mousememory(QObject *parent) : QObject(parent)
{

}

void Mousememory::test()
{
    qDebug()<< "hello from c++";
}

void Mousememory::clear()
{
   qDebug() << "clear the data";
}

void Mousememory::save()
{
    qDebug() << "save the data";
}

void Mousememory::add(double x, double y)
{
    QPoint p(x,y);
    qDebug() << "adding" << p;
}

void Mousememory::add(QPointF point)
{
    qDebug() << "adding float" << point;
}
