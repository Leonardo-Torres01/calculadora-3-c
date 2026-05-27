#include <stdio.h>
#include <stdlib.h> 
#include "function_divisao.c"
#include "function_multiplicar.c"

int main(int argc, char *argv[])
{
   
    if (argc < 4)
    {
        printf("Erro: Argumentos insuficientes.\n");
        printf("Uso correto: .\\calculadora [operacao 1:soma, 2:subtracao, 3:divisao, 4:multiplicar] [numero1] [numero2]\n");
        printf("Exemplo: .\\calculadora 1 3 4\n");
        printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
        return 1;
    }

    
    int input = atoi(argv[1]);
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    

    switch(input)
    {
        case 1:
            printf("O resultado e: %d", num1 + num2);
            break;

        case 2:
            printf("O resultado e: %d", num1 - num2);
            break;

        case 3:
            printf("O resultado e: %d", dividir(num1, num2));
            break;

        case 4:
            printf("O resultado e: %d", multiplicar(num1, num2));
            break;
        
        default:
            printf("opcao indisponivel");
            break;
    }
    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}
