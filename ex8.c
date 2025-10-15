#include <stdio.h>

/*
Escreva um algoritmo que calcula a média entre os valores reais informados pelo usuário. Enquanto o
usuário informar valores positivos o sistema deve proceder com o cálculo. Quanto o usuário informar
um valor negativo o sistema deve apresentar o resultado da média e ser finalizado.

*/

int main()
{
    int numero = 1;
    int contador = 0;
    int soma =0;
    while (numero > 0)
    {
        printf("Informe um Número pra gente: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            contador ++;
            soma += numero;
        }
    }
    printf("Sua soma eh: \n%d\n", soma);
    int media = soma / contador;

    printf("Sua media eh: \n%d\n",media);
    return 0;
}   