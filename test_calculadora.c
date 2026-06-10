#include <stdio.h>
#include <assert.h> 
#include "function_divisao.c"
#include "function_multiplicar.c"

int main()
{
    assert((5 + 5) == 10);
   
    assert((20 - 8) == 12);

    assert(dividir(15, 3) == 5);

    assert(multiplicar(4, 3) == 12);

    printf("Todos os testes com assert() da calculadora-3-c: PASSOU\n");

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}
