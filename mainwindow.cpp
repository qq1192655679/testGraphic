#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter> 
#include "house.h"
#include "person.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
} 

void MainWindow::setHouse(House house){
    this->_house = house;
}
void MainWindow::setPerson(Person person){
    this->_person = person;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);    
    painter.setPen(QPen(Qt::blue,4));//设置画笔形式
    this->_house.show(painter);
    this->_person.show(painter);
}


