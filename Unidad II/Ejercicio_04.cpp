// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Invertir los elementos de un vector si utilizar otro vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
void InvertirVector(int[], int);

int main()
{
    int n;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    cout << "VECTOR ORIGINAL" << endl;
    MostrarVector(numeros, n);
    InvertirVector(numeros, n);
    cout << "\nVECTOR INVERTIDO" << endl;
    MostrarVector(numeros, n);
    return 0;
}

void LlenarVector(int numeros[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i << " del vector: ";
        cin >> numeros[i];
    }
}

void MostrarVector(int numeros[], int n)
{
    cout << "Los numeros ingresados en el vector son: " << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << "\t";
    }
}

void InvertirVector(int numeros[], int n)
{
    int aux = 0;
    for (int i = 0; i < n/2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[(n-1)-i];
        numeros[(n-1)-i] = aux;
    }
}