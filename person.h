#ifndef PERSON_H
#define PERSON_H
#include <QPainter>
#include "point.h"
#include "line.h"
#include "rectangle.h"
class Person{
public:
    Person(){}
    Person(Point &head,float rad);
    Person(Person &p);
    void show(QPainter &painter);
private:
    Point _head;
    float _rad;
    Point _bLT,_bRT,_bLB,_bRB;
    Point _aLT,_aRT;
    Point _llLB,_llRT,_rlLB,_rlRT;
    Rectangle _body;
    Line _left_arm;
    Line _right_arm;
    Rectangle _left_leg;
    Rectangle _right_leg;
};

#endif // PERSON_H
