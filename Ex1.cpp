#include <iostream>

using namespace std;

/*
 Crie a função calcular_mdc(A, B) para retornar o MDC entre dois inteiros A e B
utilizando o Algoritmo de Euclides.
*/


int calcularMdc(int A, int B)
{

    int quociente;
    int resto;
    


    int resultado = 0;

    if (A > B)
    {
        // Primeiro passo

        //quociente = A / B; 
        resto =  A % B;

        // Segundo passo

        while (resto != 0){

            //resultado = B/resto; 
            A = B;
            B = resto;
            resto = A%B;
        }
        //std::cout << resultado << endl;

        return B;
    }
    return 0;
}


int main()
{
int A, B;

cout << "Informe o Primeiro Valor:" << endl;
    cin >> A;

    cout << "Informe o Segundo Valor: "<< endl;
    cin >> B;

    cout << calcularMdc(A,B) << endl;

    return 0;
}