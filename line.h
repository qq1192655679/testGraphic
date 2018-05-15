#ifndef LINE_H
#define LINE_H
#include "point.h"
#include <QPainter>
class Line{
public:
    Line(){}
    Line(Point &a, Point &b);
    Line(Line &l);
    void show(QPainter & painter);

private:
    Point _pa, _pb;
};

#endif // LINE_H
