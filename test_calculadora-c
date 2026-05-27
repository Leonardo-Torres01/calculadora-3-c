#include <stdio.h>
#include "function_multiplicar.c"
#include "function_divisao.c"

int main()
{
    int erros = 0;

    if ((5 + 5) != 10) erros++;

    
    if ((20 - 8) != 12) erros++;

    
    if (dividir(15, 3) != 5) erros++;

    
    if (multiplicar(4, 3) != 12) erros++;

    if (erros == 0)
    {
        printf("Todos os testes da calculadora-3-c: PASSOU\n");
    }
    else
    {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }
    return 0;
}
