#include "slider.h"
#include "ui_slider.h"
#include <windows.h>
#include <QDebug>
#include <QThread> // multi-thread structure
#include <QtConcurrent/QtConcurrent>
#include <QThreadPool>



Slider::Slider(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Slider)
{
    ui->setupUi(this);

    // SET LABEL PROPERITIES -----------------
    // label
    ui->label->setText("Slider Value");
    //set font
    QFont font = ui->label->font();
    font.setPointSize(20);
    font.setBold(true);
    ui->label->setFont(font);

    // label_2
    ui->label_2->setText("Button Info");
    //set font
    QFont font_2 = ui->label_2->font();
    font_2.setPointSize(20);
    font_2.setBold(true);
    ui->label_2->setFont(font_2);

}

Slider::~Slider()
{
    delete ui;

}



void Slider::on_pushButton_pressed()
{
    QtConcurrent::run(this, &Slider::labelChange);

}

void Slider::labelChange()
{
    ui->label_2->setText("Butona basildi");
    Sleep(2000);
    ui->label_2->setText("Buton bekleniyor");
}








