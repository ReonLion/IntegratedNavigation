#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int a=0;
    int b=3;
    int c=a+b;
    qDebug()<<a<<"+"<<b<<"="<<c;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
