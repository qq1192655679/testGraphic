#include "house.h"
#include <QPainter>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
House::House(Point &lb, Point &rt, Point &top):
    _wLB(lb),
    _wRT(rt),
    _wLT(_wLB.getX(),_wRT.getY()),
    _wRB(_wRT.getX(),_wLB.getY()),
    _dLB(_wLB.getX()+0.2*(_wRB.getX()-_wLB.getX()),_wLB.getY()),
    _dRB(_dLB.getX()+0.2*(_wRB.getX()-_wLB.getX()),_wLB.getY()),
    _dRT(_dRB.getX(),_wRT.getY()-0.4*(_wRT.getY()-_wRB.getY())),
    _dLT(_dLB.getX(),_dRT.getY()),
    _top(top),
    _leftroof(_top,_wLT),
    _rightroof(_top,_wRT),
    _wall(_wLB,_wRT),
    _door(_dLB,_dRT)
{}

House::House(House &h):
    _wLB(h._wLB),
    _wRT(h._wRT),
    _wLT(_wLB.getX(),_wRT.getY()),
    _wRB(_wRT.getX(),_wLB.getY()),
    _dLB(_wLB.getX()+0.2*(_wRB.getX()-_wLB.getX()),_wLB.getY()),
    _dRB(_dLB.getX()+0.2*(_wRB.getX()-_wLB.getX()),_wLB.getY()),
    _dRT(_dRB.getX(),_wRT.getY()-0.4*(_wRT.getY()-_wRB.getY())),
    _dLT(_dLB.getX(),_dRT.getY()),
    _top(h._top),
    _leftroof(_top,_wLT),
    _rightroof(_top,_wRT),
    _wall(_wLB,_wRT),
    _door(_dLB,_dRT)
{}

void House::show(QPainter &painter)
{
    _wall.show(painter);
    _door.show(painter);
    _leftroof.show(painter);
    _rightroof.show(painter);
}
