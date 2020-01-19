#include <QCoreApplication>
// #include <QObject>
#include "sample.h"

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    counter c1, c2;
    catcher a1, a2;

    QObject::connect(&c1, &counter::valueChanged, &a1, &catcher::display);

    c1.setValue(1);
    c1.setValue(2);

    return a.exec();
}


