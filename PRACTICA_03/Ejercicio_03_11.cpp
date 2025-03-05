// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 11 
// Problema planteado: conjetura de collatz en funciones 
#include <iostream>
using namespace std;

int collatz (int);

int main () 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    int p = collatz(num); //se llama a la funcion collatz
    cout << "Se llego al rsultado en " << p << " pasos" << endl;
}

int collatz (int n) {
    cout << "La serie de Collatz:\n" << n << "\t";
    int pasos = 0; 
    while(n != 1) //se realiza el ciclo hasta que n sea igual a 1
    {
        if(n % 2 == 0) //se realizan los calculos de la serie
        {
            n = n / 2; //verifica si es par
        } 
        else 
        {
            n = (n * 3) + 1; //verifica si es impar
        }
        cout << n << "\t";
        pasos++; 
    }
    return pasos;
}