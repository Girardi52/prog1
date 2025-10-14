#include <iostream>

/*
Crie a função eh_primo(N) que retorna true se o inteiro N for primo, e false caso
contrário.

*/
using namespace std;

int ehPrimo(int Numero)
{
    
    

    int aux{1};
    int divisores;
    while (aux != 0){
        aux = Numero % 2     ==  0;
        divisores ++;
    }
    


    if (divisores == 2){
        cout << "Seu Numero eh primo" << endl;

    }else{
        cout << "Seu Numero Não eh primo: " << endl;
    }
    
    // //int divisores{0};
    // cout << "Seu Numero eh Primo:" << divisores << endl;

    
    return 0;
} 

int main()
{
    int N;
    cout << "Informe o Valor de N:" << endl;
    cin >> N;

    ehPrimo(N);

    return 0;

}

if ( numero/ 1 == 1 && numero / numero == 1){
    eh primo
}