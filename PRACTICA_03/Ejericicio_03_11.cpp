// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 11
// Problema planteado:  función para evaluar un número de la serie de Collatz.

#include <iostream>
using namespace std;

int pasos(int numero);

int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "Se necesita " << pasos(numero) << " pasos para llegar a 1";
}

int pasos(int numero) //Función para calcular la cantidad de pasos
{
    int contador = 0;
    while (numero > 1)
    {
        if (numero % 2 == 0) numero /= 2; //Realiza la operación si es par
        else numero = numero * 3 + 1; //Realiza la operación si es impar
        contador++;
    }
    return contador;
}