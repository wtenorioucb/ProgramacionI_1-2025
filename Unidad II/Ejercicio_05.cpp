// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Contar la frecuencia de un número en un vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
int ContarFrecuenciaValor(int[], int, int);

int main()
{
    int n, valorBuscado;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    MostrarVector(numeros, n);
    cout << "\nIngrese el valor que desea contar: ";
    cin >> valorBuscado;
    cout << "Se ha encontrado " << ContarFrecuenciaValor(numeros, n, valorBuscado) << " veces(vez) el valor " << valorBuscado;
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
    for (int i = 0; i < n; i++)
    {
        cout << numeros[i] << "\t";
    }
}

int ContarFrecuenciaValor(int numeros[], int n, int valor)
{
    int contador = 0;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] == valor)
        {
            contador++;
        }
    }
    return contador;
}