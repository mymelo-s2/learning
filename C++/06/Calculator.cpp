/*
 * Calculator.cpp
 *
 *  Created on: 2024/03/07
 *      Author: u-mikami
 */
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0.0;
    }
}
