#include <stdio.h>     // para printf e scanf 


/*
Leia um Número inteiro e Imprima seu Sucessor e Antecessor

*/

int main()
{
    int numero;
    printf("Informe Um Número:");
    scanf("%d",&numero);

    printf("Seu Antecessor eh %d e seu Sucessor eh %d", numero-1, numero+1 );
    return 0;

}