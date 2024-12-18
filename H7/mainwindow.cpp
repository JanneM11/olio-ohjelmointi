#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    QString t = "Painiketta Count painettu " % s % " kertaa";
    ui->labelInfo->setText(t);
}


void MainWindow::on_btnReset_clicked()
{
    counter=0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    QString t = "Painiketta Count painettu " % s % " kertaa";
    ui->labelInfo->setText(t);

}

