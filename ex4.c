#include <stdio.h>

/*
leia dois valores números inteiros do usuário e efetue a adição entre eles. caso o resultado seja maior que
10 imprima-o. caso contrário, imprima uma mensagem informando que o valor resultando é inferior a 10

*/


int main()
{
    int numero1;
    printf("Informe seu Número Aqui: ");
    scanf("%d", &numero1);

    int numero2;
    printf("Informe seu Segundo Número:");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;

    if (soma >10)
    {
        printf("Sua Soma eh: %d", soma);
    }
    if (soma < 10)
    {
        printf("Sua Soma eh Menor que 10, tente outro: ");
    }
    return 0;
}