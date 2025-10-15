#include <stdio.h>

/*
leia dois números inteiros e imprima a soma e também o Produto entre eles

*/

int main()
{
    int numero1;
    printf("Informe um Número aqui: ");
    scanf("%d", &numero1);

    int numero2;
    printf("Informe o Segundo Número: ");
    scanf("%d", &numero2);


    int soma;
    soma = numero1 + numero2;



    int produto;
    produto = numero1 * numero2;


    printf("O seu Produto eh %d e Sua Soma eh %d", produto, soma     );

}