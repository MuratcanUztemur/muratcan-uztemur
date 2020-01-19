/********************************************************************************
** Form generated from reading UI file 'slider.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDER_H
#define UI_SLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slider
{
public:
    QWidget *centralwidget;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Slider)
    {
        if (Slider->objectName().isEmpty())
            Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->resize(800, 600);
        centralwidget = new QWidget(Slider);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 170, 301, 51));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 291, 61));
        label->setTextFormat(Qt::AutoText);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 170, 141, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 30, 241, 81));
        Slider->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Slider);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Slider->setMenuBar(menubar);
        statusbar = new QStatusBar(Slider);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Slider->setStatusBar(statusbar);

        retranslateUi(Slider);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Slider);
    } // setupUi

    void retranslateUi(QMainWindow *Slider)
    {
        Slider->setWindowTitle(QCoreApplication::translate("Slider", "Slider", nullptr));
        label->setText(QCoreApplication::translate("Slider", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">TextLabel</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Slider", "Button", nullptr));
        label_2->setText(QCoreApplication::translate("Slider", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Slider: public Ui_Slider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDER_H
