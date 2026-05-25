#include "entrada.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINHA 256

int ler_entrada(double *valor_a, double *valor_b, char *operador)
{
    char linha[MAX_LINHA];
    int posicao = 0;

    if (fgets(linha, MAX_LINHA, stdin) == NULL) 
    {
        fprintf(stderr, "Erro: falha ao ler entrada\n");
        return 1;
    }

    // sscanf lê a entrada formatada: número, operador e número
    // %n armazena em 'posicao' quantos caracteres foram lidos com sucesso
    if (sscanf(linha, "%lf %c %lf %n", valor_a, operador, valor_b, &posicao) != 3) 
    {
        fprintf(stderr, "Erro: formato inválido. Esperado: número operador número\n");
        return 1;
    }

    // Pula espaços em branco após os dados válidos
    while (linha[posicao] != '\0' && isspace((unsigned char)linha[posicao])) 
    {
        posicao++;
    }

    // Verifica se há caracteres extras na linha (além do esperado)
    if (linha[posicao] != '\0') 
    {
        fprintf(stderr, "Erro: caracteres extras após a entrada\n");
        return 1;
    }

    return 0;
}
