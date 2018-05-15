#include "mainwindow.h"
#include <QApplication>
#include <QPainter>
#include "line.h"
#include "point.h"
#include "rectangle.h"
#include "house.h"
#include "person.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Point  p1(20,200), p2(200,100),p3(110,50),p4(300,40);
    House h(p1, p2,p3);
    Person p(p4,40);
    w.setHouse(h);
    w.setPerson(p);
    w.show();

    return a.exec();
}
