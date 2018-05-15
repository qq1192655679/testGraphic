#ifndef HOUSE_H
#define HOUSE_H
#include <QPainter>
#include "point.h"
#include "line.h"
#include "rectangle.h"
class House{
public:
    House(){}
    House(Point &lb,Point &rt,Point &top);
    House(House &h);
    void show(QPainter &painter);
private:
    Point _wLB, _wRT, _wLT, _wRB;
    Point _dLB, _dRB, _dRT, _dLT;
    Point _top;
    Line _leftroof,_rightroof;
    Rectangle _wall;
    Rectangle _door;

};

#endif // HOUSE_H
