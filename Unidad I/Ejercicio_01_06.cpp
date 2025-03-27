#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int sumar = 0;
    int sumar_amigo = 0;
    int i = 1;
    system("cls");
    cout << "Ingrese un numero: ";
    cin >> numero;
    while (i < numero)
    {
        if (numero % i == 0)
        {
            // El i es su divisor
            sumar += i;
        }
        i++;
    }
    for (int i = 1; i < sumar; i++)
    {
        if (sumar % i == 0)
        {
            sumar_amigo += i; // El i es su divisor
        }
    }
    if (sumar_amigo == numero)
        cout << "Su amigo es el numero " << sumar << " :)";
    else
        cout << "NO tiene amigos ;(";    
    return 0;
}
