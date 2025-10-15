#include <stdio.h>

/*
Escreva um algoritmo que imprima os múltiplos de 5, no intervalo de 1 até 500. Elabore ao menos 2 versões
distintas (códigos/estratégias diferentes) para este algoritmo.
*/


int main()
{
    for ( int numero = 0; numero <= 500; numero ++)
    {
        if (numero % 5 == 0)
        {
            printf("Seu Numero eh: \n%d\n", numero);
        }
    }
    return 0;
}