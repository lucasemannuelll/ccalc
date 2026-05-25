#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "arithmetic.h"

int main(void)
{
    double a, b, result;
    char op;
    
    if (read_input(&a, &b, &op) != 0) 
    {
        return EXIT_FAILURE;
    }

    int err = compute(a, b, op, &result);
    if (err == 1) 
    {
        fprintf(stderr, "Error: division by zero\n");
        return EXIT_FAILURE;
    }

    else if (err == 2) 
    {
        fprintf(stderr, "Error: invalid operator (use +, -, *, /)\n");
        return EXIT_FAILURE;
    }

    printf("%g %c %g = %g\n", a, op, b, result);
    
    return EXIT_SUCCESS;
}
