#include "arithmetic.h"

int compute(double a, double b, char op, double *result);

int compute(double a, double b, char op, double *result)
{
    switch (op)
    {
        case '+':
            *result = a + b;
            return 0;
        
        case '-':
            *result = a - b;
            return 0;
        
        case '*':
            *result = a * b;
            return 0;
        
        case '/':
            if (b == 0) return 1; // Division by zero
            *result = a / b;
            return 0;

        default:
            return 2; // Invalid operator
    }
}
