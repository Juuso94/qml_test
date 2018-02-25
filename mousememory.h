#ifndef MEMORY_H
#define MEMORY_H

#include <QObject>
#include <QDebug>
#include <QPoint>

class Mousememory : public QObject
{
    Q_OBJECT
public:
    explicit Mousememory(QObject *parent = nullptr);

    Q_INVOKABLE void test();
    Q_INVOKABLE void clear();
    Q_INVOKABLE void save();
    Q_INVOKABLE void add(double x, double y);
    Q_INVOKABLE void add(QPointF point);

signals:

public slots:
};

#endif // MEMORY_H
