#include <stdio.h>

/*
leia um Número Inteiro do usuário e Imprima-o caso seja maior que 20. Caso contrário imprima uma mensagem
informando que o valor é inferior a 20.

*/

int main()
{
    int numero;
    printf("Informe um Número Para o Usuário: ");
    scanf("%d", &numero);

    if (numero > 20)
    {
        printf("Seu numero eh %d", numero);
    }
    if (numero < 20)
    {
        printf("Informe outro número, Seu número é Invalido: ");

    }
    return 0;
}