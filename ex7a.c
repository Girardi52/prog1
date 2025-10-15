#include <stdio.h>

/*
Escreva um algoritmo que imprima os múltiplos de 5, no intervalo de 1 até 500. Elabore ao menos 2 versões
distintas (códigos/estratégias diferentes) para este algoritmo.
*/


int main()
{
    int contador = 0;

    while (contador <= 500)
    {
        if (contador % 5 == 0)
        {
            printf("Seu Numero Eh: \n%d\n",contador);
            
        }
        contador ++;
    }
    return 0;
}