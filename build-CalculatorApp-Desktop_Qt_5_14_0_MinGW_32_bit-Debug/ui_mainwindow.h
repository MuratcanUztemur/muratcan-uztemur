/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *clearButton;
    QLabel *calcLabel;
    QPushButton *minusButton;
    QPushButton *modButton;
    QPushButton *sumButton;
    QPushButton *substractButton;
    QPushButton *eightButton;
    QPushButton *sevenButton;
    QPushButton *nineButton;
    QPushButton *threeButton;
    QPushButton *oneButton;
    QPushButton *divideButton;
    QPushButton *twoButton;
    QPushButton *multiplyButton;
    QPushButton *fiveButton;
    QPushButton *fourButton;
    QPushButton *sixButton;
    QPushButton *equalButton;
    QPushButton *zeroButton;
    QPushButton *pointButton;
    QLabel *historyLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 392);
        MainWindow->setMinimumSize(QSize(241, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(0, 90, 61, 61));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        font.setWeight(50);
        clearButton->setFont(font);
        calcLabel = new QLabel(centralwidget);
        calcLabel->setObjectName(QString::fromUtf8("calcLabel"));
        calcLabel->setGeometry(QRect(0, 30, 241, 51));
        calcLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);\n"
"background-color: rgb(234, 234, 234);"));
        minusButton = new QPushButton(centralwidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        minusButton->setGeometry(QRect(60, 90, 61, 61));
        minusButton->setFont(font);
        modButton = new QPushButton(centralwidget);
        modButton->setObjectName(QString::fromUtf8("modButton"));
        modButton->setGeometry(QRect(120, 90, 61, 61));
        modButton->setFont(font);
        sumButton = new QPushButton(centralwidget);
        sumButton->setObjectName(QString::fromUtf8("sumButton"));
        sumButton->setGeometry(QRect(180, 90, 61, 61));
        sumButton->setFont(font);
        sumButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 141, 0);\n"
""));
        substractButton = new QPushButton(centralwidget);
        substractButton->setObjectName(QString::fromUtf8("substractButton"));
        substractButton->setGeometry(QRect(180, 150, 61, 61));
        substractButton->setFont(font);
        substractButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 141, 0);"));
        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(60, 150, 61, 61));
        eightButton->setFont(font);
        eightButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(0, 150, 61, 61));
        sevenButton->setFont(font);
        sevenButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(120, 150, 61, 61));
        nineButton->setFont(font);
        nineButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(120, 270, 61, 61));
        threeButton->setFont(font);
        threeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(0, 270, 61, 61));
        oneButton->setFont(font);
        oneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName(QString::fromUtf8("divideButton"));
        divideButton->setGeometry(QRect(180, 270, 61, 61));
        divideButton->setFont(font);
        divideButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 141, 0);"));
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(60, 270, 61, 61));
        twoButton->setFont(font);
        twoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));
        multiplyButton->setGeometry(QRect(180, 210, 61, 61));
        multiplyButton->setFont(font);
        multiplyButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 141, 0);"));
        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(60, 210, 61, 61));
        fiveButton->setFont(font);
        fiveButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(0, 210, 61, 61));
        fourButton->setFont(font);
        fourButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(120, 210, 61, 61));
        sixButton->setFont(font);
        sixButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        equalButton = new QPushButton(centralwidget);
        equalButton->setObjectName(QString::fromUtf8("equalButton"));
        equalButton->setGeometry(QRect(180, 330, 61, 61));
        equalButton->setFont(font);
        equalButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 141, 0);"));
        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(0, 330, 121, 61));
        zeroButton->setFont(font);
        zeroButton->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);"));
        pointButton = new QPushButton(centralwidget);
        pointButton->setObjectName(QString::fromUtf8("pointButton"));
        pointButton->setGeometry(QRect(120, 330, 61, 61));
        pointButton->setFont(font);
        historyLabel = new QLabel(centralwidget);
        historyLabel->setObjectName(QString::fromUtf8("historyLabel"));
        historyLabel->setGeometry(QRect(0, 0, 241, 31));
        historyLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(112, 112, 112);\n"
"background-color: rgb(234, 234, 234);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        sumButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        calcLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
        minusButton->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        modButton->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        sumButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        substractButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        eightButton->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        sevenButton->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nineButton->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        threeButton->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        oneButton->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        twoButton->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        multiplyButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        fiveButton->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        fourButton->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        sixButton->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        equalButton->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        zeroButton->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pointButton->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        historyLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
