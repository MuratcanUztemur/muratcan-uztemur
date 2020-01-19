#include "slider.h"
#include <QApplication>
#include <QThreadPool>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Slider w;

    // set max thread to 30
    QThreadPool::globalInstance()->setMaxThreadCount(30);

    w.show();
    return a.exec();
}
