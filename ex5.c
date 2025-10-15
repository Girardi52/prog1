#include <stdio.h>

/*
Leia um número inteiro do usuário, verifique se ele é múltiplo de 3 e imprima uma das seguintes mensagens
correspondentes:
• “É múltiplo de 3!”
• “NÃO é múltiplo de 3!
*/



int main()
{
    int numero; 
    printf("Informe um Numero:");
    scanf("%d", &numero);

    if (numero % 3 == 0)
    {
        printf("Seu numero Eh Multiplo de 3 ");
        
    }
    if (numero % 3 != 0)
    {
        printf("Seu Numero Não é Multiplo de 3 ");
    }
    return 0;
}