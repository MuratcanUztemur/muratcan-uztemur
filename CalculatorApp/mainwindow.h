#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_clearButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_zeroButton_clicked();

    void on_pointButton_clicked();

    void on_sumButton_clicked();

    void on_modButton_clicked();

    void on_substractButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

    void on_equalButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
