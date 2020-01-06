#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
    Calculator();
    void sum(int val);
    void substract(int val);
    void divide(int val);
    void multiply(int val);
    void mode(int val);
    void minusOperation();
    int  equal();
    void reset();
    void printResult();
    void mathState(int val, int state);
private:
    int  result;

};


#endif // CALCULATOR_H
