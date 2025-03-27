// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Declaración e impresión de un vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);

int main()
{
    int n;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    MostrarVector(numeros, n);
    return 0;
}

void LlenarVector(int numeros[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i << " del vector: ";
        cin >> numeros[i];
    }
}

void MostrarVector(int numeros[], int n)
{
    cout << "\nLos numeros ingresados en el vector son: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << "\t";
    }
}