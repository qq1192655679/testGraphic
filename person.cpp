#include "person.h"
#include <QPainter>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
Person::Person(Point &head, float rad):
    _head(head),
    _bLT(_head.getX()-0.5*rad,_head.getY()+rad),
    _bRT(_head.getX()+1.5*rad,_head.getY()+rad),
    _bLB(_head.getX()-0.5*rad,_head.getY()+4*rad),
    _bRB(_head.getX()+1.5*rad,_head.getY()+4*rad),
    _aLT(_head.getX()-1*rad,_head.getY()+3*rad),
    _aRT(_head.getX()+2*rad,_head.getY()+3*rad),
    _llLB(_bLB.getX(),_bLB.getY()+2.5*rad),
    _llRT(_bLB.getX()+rad,_bLB.getY()),
    _rlLB(_bRB.getX()-rad,_bLB.getY()+2.5*rad),
    _rlRT(_bRB.getX(),_bRB.getY()),
    _body(_bLB,_bRT),
    _left_arm(_aLT,_bLT),
    _right_arm(_aRT,_bRT),
    _left_leg(_llLB,_llRT),
    _right_leg(_rlLB,_rlRT)
{_rad=rad;}

Person::Person(Person &p):
    _head(p._head),
    _bLT(_head.getX()-0.5*p._rad,_head.getY()+p._rad),
    _bRT(_head.getX()+1.5*p._rad,_head.getY()+p._rad),
    _bLB(_head.getX()-0.5*p._rad,_head.getY()+3.5*p._rad),
    _bRB(_head.getX()+1.5*p._rad,_head.getY()+3.5*p._rad),
    _aLT(_head.getX()-1*p._rad,_head.getY()+3.5*p._rad),
    _aRT(_head.getX()+2*p._rad,_head.getY()+3.5*p._rad),
    _llLB(_bLB.getX(),_bLB.getY()+2*p._rad),
    _llRT(_bLB.getX()+0.75*p._rad,_bLB.getY()),
    _rlLB(_bRB.getX()-0.75*p._rad,_bLB.getY()+2*p._rad),
    _rlRT(_bRB.getX(),_bRB.getY()),
    _body(_bLB,_bRT),
    _left_arm(_aLT,_bLT),
    _right_arm(_aRT,_bRT),
    _left_leg(_llLB,_llRT),
    _right_leg(_rlLB,_rlRT)
{_rad=p._rad;}

void Person::show(QPainter &painter)
{
    painter.drawEllipse(_head.getX(),_head.getY(),_rad,_rad);
    _left_arm.show(painter);
    _right_arm.show(painter);
    _left_leg.show(painter);
    _right_leg.show(painter);
    _body.show(painter);
}
