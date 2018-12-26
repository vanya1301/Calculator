#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

bool plusTrigger,minusTrigger,multTrigger,devTrigger,powTrigger;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_zeroButton_clicked()
{
    if(ui->label->text().length()==0){
        return;
    }
    else {
        ui->label->setText(ui->label->text()+"0");
    }
}

void MainWindow::on_dotButton_clicked()
{
    static bool dotState;
    if(ui->label->text().size()==0){
        dotState=true;
        ui->label->setText(ui->label->text()+"0.");
        return;
    }
    if(!dotState){
        ui->label->setText(ui->label->text()+".");
        dotState = true;
    }
}

void MainWindow::on_oneButton_clicked()
{
    ui->label->setText(ui->label->text()+"1");
}

void MainWindow::on_twoButton_clicked()
{
    ui->label->setText(ui->label->text()+"2");
}

void MainWindow::on_threeButton_clicked()
{
    ui->label->setText(ui->label->text()+"3");
}

void MainWindow::on_fourButton_clicked()
{
    ui->label->setText(ui->label->text()+"4");
}

void MainWindow::on_fiveButton_clicked()
{
    ui->label->setText(ui->label->text()+"5");
}

void MainWindow::on_sixButton_clicked()
{
    ui->label->setText(ui->label->text()+"6");
}


void MainWindow::on_sevenButton_clicked()
{
    ui->label->setText(ui->label->text()+"7");
}


void MainWindow::on_eightButton_clicked()
{
    ui->label->setText(ui->label->text()+"8");
}

void MainWindow::on_nineButton_clicked()
{
    ui->label->setText(ui->label->text()+"9");
}

void MainWindow::on_equalButton_clicked()
{
    b=ui->label->text().toDouble();
    if(plusTrigger){
        ui->label->setText(QString::number(a+b));
    }
    if(minusTrigger){
        ui->label->setText(QString::number(a-b));
    }
    if(multTrigger){
        ui->label->setText(QString::number(a*b));
    }
    if(devTrigger){
        ui->label->setText(QString::number(a/b));
    }
    if(powTrigger){
        ui->label->setText(QString::number(pow(a,b)));
    }


    plusTrigger=false;
    minusTrigger=false;
    multTrigger=false;
    devTrigger=false;

}


void MainWindow::on_clearButton_clicked()
{
    ui->label->setText("");
    plusTrigger=false;
    minusTrigger=false;
    multTrigger=false;
    devTrigger=false;
    a=0;
    b=0;

}

void MainWindow::on_plusButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        plusTrigger=true;
    }
}

void MainWindow::on_minusButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        minusTrigger=true;
    }
}

void MainWindow::on_multiplyButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        multTrigger=true;
    }
}

void MainWindow::on_devideButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        devTrigger=true;
    }
}

void MainWindow::on_sqrtButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        ui->label->setText(QString::number(sqrt(a)));
    }
}

void MainWindow::on_sqrButton_clicked()
{
    if(ui->label->text().size()==0){
        return;
    }
    else{
        a=ui->label->text().toDouble();
        ui->label->clear();
        powTrigger=true;
    }
}
