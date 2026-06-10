#include <stdio.h>
#include <stdlib.h>
#include "function_divisao.c"
#include "function_multiplicar.c"

int main(int argc, char *argv[])
{
    int input = 0;
    int num1 = 0;
    int num2 = 0;

    if (argc > 1)
    {
        if (argc < 4)
        {
            printf("Erro: Argumentos insuficientes na linha de comando.\n");
            printf("Uso: .\\calculadora [operacao] [numero1] [numero2]\n");
            return 1;
        }
        input = atoi(argv[1]);
        num1 = atoi(argv[2]);
        num2 = atoi(argv[3]);
    }

    else
    {
        printf("Calculadora\n\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n\n");
        scanf("%d", &input);
        
        printf("\n\nDigite o primeiro numero: ");
        scanf("%d", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d", &num2);
    }
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
