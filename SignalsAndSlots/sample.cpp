#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include "sample.h"

using namespace std;

counter::counter(int val)
{
    m_value = val;
}

counter::~counter()
{
    m_value = 0;
}

int counter::getValue()
{
    return m_value;
}

void counter::setValue(int val)
{
    if(m_value != val)
    {
        m_value = val;
        emit valueChanged(val);  //arise signal
    }
}


catcher::catcher()
{

}

void catcher::display()
{
    cout << "Catcher slot was called" << endl;
}
