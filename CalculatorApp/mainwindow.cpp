#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <bits/stdc++.h>
#include <string>
#include "Calculator.h"

using namespace std;

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

// define calculator object
Calculator calculator;
int calcState = 0;
bool resetScreen = false;

void MainWindow::on_clearButton_clicked()
{
    ui->calcLabel->setText(NULL);
    calculator.reset();
}

void MainWindow::on_oneButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"1");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"1");
    }
}

void MainWindow::on_twoButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"2");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"2");
    }
}

void MainWindow::on_threeButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"3");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"3");
    }
}
void MainWindow::on_fourButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"4");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"4");
    }
}

void MainWindow::on_fiveButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"5");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"5");
    }
}

void MainWindow::on_sixButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"6");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"6");
    }
}

void MainWindow::on_sevenButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"7");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"7");
    }
}

void MainWindow::on_eightButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"8");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"8");
    }
}

void MainWindow::on_nineButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"9");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"9");
    }
}

void MainWindow::on_zeroButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+"0");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+"0");
    }
}

void MainWindow::on_pointButton_clicked()
{
    if (resetScreen)
    {
        ui->calcLabel->setText(NULL);
        ui->calcLabel->setText(ui->calcLabel->text()+".");
        resetScreen = false;
    }
    else
    {
        ui->calcLabel->setText(ui->calcLabel->text()+".");
    }
}

// ******************************************************************
// ******************************************************************

void MainWindow::on_sumButton_clicked()
{
    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 1;
    resetScreen = true;
    calculator.printResult();

}

// MODE operation
void MainWindow::on_modButton_clicked()
{
    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 5;
    resetScreen = true;
    calculator.printResult();
}

void MainWindow::on_substractButton_clicked()
{

    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 2;
    resetScreen = true;
    calculator.printResult();

}

void MainWindow::on_multiplyButton_clicked()
{
    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 4;
    resetScreen = true;
    calculator.printResult();
}

void MainWindow::on_divideButton_clicked()
{
    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 3;
    resetScreen = true;
    calculator.printResult();
}

void MainWindow::on_equalButton_clicked()
{
    calculator.mathState(ui->calcLabel->text().toInt(), calcState);
    ui->calcLabel->setText(QString::number(calculator.equal()));
    calcState = 0;
}
