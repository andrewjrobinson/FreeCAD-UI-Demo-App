#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ApplicationTree->expandAll();
    ui->CamFeatureTree->expandAll();
}

MainWindow::~MainWindow()
{
    delete ui;
}
