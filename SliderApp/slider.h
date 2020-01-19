#ifndef SLIDER_H
#define SLIDER_H

#include <QMainWindow>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class Slider; }
QT_END_NAMESPACE


class Slider : public QMainWindow
{
    Q_OBJECT

public:
    Slider(QWidget *parent = nullptr);
    ~Slider();

private slots:
    void on_pushButton_pressed();

private:
    Ui::Slider *ui;
    void labelChange();

};




#endif // SLIDER_H
