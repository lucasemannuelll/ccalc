#include "input.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINE 256

int read_input(double *a, double *b, char *op)
{
    char line[MAX_LINE];
    int pos = 0;

    if (fgets(line, MAX_LINE, stdin) == NULL) 
    {
        fprintf(stderr, "Error: failed to read input\n");
        return 1;
    }

    if (sscanf(line, "%lf %c %lf %n", a, op, b, &pos) != 3) 
    {
        fprintf(stderr, "Error: invalid format. Expected: number operator number\n");
        return 1;
    }

    while (line[pos] != '\0' && isspace((unsigned char)line[pos])) 
    {
        pos++;
    }

    if (line[pos] != '\0') 
    {
        fprintf(stderr, "Error: extra characters after input\n");
        return 1;
    }

    return 0;
}
