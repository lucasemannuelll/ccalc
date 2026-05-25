#include "aritmetica.h"

int calcular(double valor_a, double valor_b, char operador, double *resultado)
{
    switch (operador)
    {
        case '+':
            *resultado = valor_a + valor_b;
            return 0;
        
        case '-':
            *resultado = valor_a - valor_b;
            return 0;
        
        case '*':
            *resultado = valor_a * valor_b;
            return 0;
        
        case '/':
            // Verifica divisão por zero antes de calcular
            if (valor_b == 0) return 1;
            *resultado = valor_a / valor_b;
            return 0;

        default:
            // Operador não reconhecido
            return 2;
    }
}
