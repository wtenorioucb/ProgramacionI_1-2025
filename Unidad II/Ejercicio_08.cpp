// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Eliminar un valor de un vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
void EliminarValorVector(int[], int&, int);

int main()
{
    int n, valorEliminar;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    cout << "VECTOR ORIGINAL";
    MostrarVector(numeros, n);
    cout << "\nIngrese el valor que desea eliminar: ";
    cin >> valorEliminar;
    EliminarValorVector(numeros, n, valorEliminar);
    cout << "NUEVO VECTOR";
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

void EliminarValorVector(int numeros[], int& n, int valor)
{
    int nuevoVectorNumeros[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (valor != numeros[i])
        {
            nuevoVectorNumeros[j] = numeros[i];
            j++;
        }
    }
    n = j;
    for (int i = 0; i < n; i++)
    {
        numeros[i] = nuevoVectorNumeros[i];
    }
}