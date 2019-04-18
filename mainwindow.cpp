#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{


        s=s+'1';
        ui->lineEdit->setText(s);


}

void MainWindow::on_pushButton_2_clicked()
{

    s=s+'2';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_3_clicked()
{
    s=s+'3';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_4_clicked()
{
    s=s+'4';
    ui->lineEdit->setText(s);
}


void MainWindow::on_pushButton_5_clicked()
{
    s=s+'5';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_6_clicked()
{
    s=s+'6';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_7_clicked()
{
    s=s+'7';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_8_clicked()
{
    s=s+'8';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_9_clicked()
{
    s=s+'9';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_10_clicked()
{
    s=s+'0';
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_11_clicked()
{
   a= s.toInt();
   s=s2;
   k=0;
   ui->lineEdit->setText(s+'+');
}

void MainWindow::on_pushButton_15_clicked()
{
    b=s.toInt();
    s=s2;
    if(k==0)
    c=b+a;
    if(k==1)
        c=a-b;
    if(k==2)
        c=a*b;
    if(k==3)
        c=a/b;
    s=QString::number(c);
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_12_clicked()
{
    a=s.toInt();
    s=s2;
    k=1;
    ui->lineEdit->setText(s+'-');
}

void MainWindow::on_pushButton_13_clicked()
{
    a=s.toInt();
    s=s2;
    k=2;
    ui->lineEdit->setText(s+'*');
}

void MainWindow::on_pushButton_14_clicked()
{
    a=s.toInt();
    s=s2;
    k=3;
    ui->lineEdit->setText(s+'/');
}
