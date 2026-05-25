#include <stdio.h>
#include <stdlib.h>
#include "entrada.h"
#include "aritmetica.h"

int main(void)
{
    double valor_a, valor_b, resultado;
    char operador;
    
    if (ler_entrada(&valor_a, &valor_b, &operador) != 0) 
    {
        return EXIT_FAILURE;
    }

    int erro = calcular(valor_a, valor_b, operador, &resultado);
    if (erro == 1) 
    {
        fprintf(stderr, "Erro: divisão por zero\n");
        return EXIT_FAILURE;
    }

    else if (erro == 2) 
    {
        fprintf(stderr, "Erro: operador inválido (use +, -, *, /)\n");
        return EXIT_FAILURE;
    }

    printf("%g %c %g = %g\n", valor_a, operador, valor_b, resultado);
    
    return EXIT_SUCCESS;
}
