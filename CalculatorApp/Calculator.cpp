#include "Calculator.h"
#include <iostream>;

using namespace std;

Calculator::Calculator()
{
    result = 0;
}

void Calculator::sum(int val)
{
    result += val;
}

void Calculator::substract(int val)
{
    result -= val;
}

void Calculator::multiply(int val)
{
    result *= val;
}

void Calculator::divide(int val)
{
    result /= val;
}

void Calculator::minusOperation()
{
    result *= (-1);
}

void Calculator::mode(int val)
{
    result %= val;
}

int Calculator::equal()
{
    return result;
}

void Calculator::reset()
{
    result = 0;
}

void Calculator::printResult()
{
    cout << "Result= " << result << endl;
}

void Calculator::mathState(int val, int state)
{
    switch (state)
    {
    case 0: // do nothing
        break;
    case 1:
        this->sum(val); break;
    case 2:
        this->substract(val); break;
    case 3:
        this->divide(val); break;
    case 4:
        this->multiply(val); break;
    case 5:
        this->mode(val); break;
    case 6:
        this->minusOperation(); break;
    }
}
