#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "point.h"
#include "line.h"
#include "rectangle.h"
#include "house.h"
#include "person.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setHouse(House house);
    void setPerson(Person person);

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainWindow *ui;
    House _house;
    Person _person;
};

#endif // MAINWINDOW_H
