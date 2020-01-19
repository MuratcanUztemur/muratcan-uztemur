#ifndef SAMPLE_H
#define SAMPLE_H

#include <QObject>

class counter
{
    // macro for using Q_OBJECT utilites (signals and slots)
    Q_OBJECT

public:
    counter(int val = 0);
    ~counter();
    int getValue();
    void setValue(int val = 0);

private:
    int m_value;

signals:
    void valueChanged(int newValue);
};



class catcher
{
    Q_OBJECT
public:
    catcher();

public slots:
    void display();

};


#endif // SAMPLE_H


