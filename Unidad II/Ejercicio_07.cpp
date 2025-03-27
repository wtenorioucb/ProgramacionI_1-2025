// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Contar cuántos números pares e impares hay en el vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
void ContarParesImparesVector(int[], int, int&, int&);

int main()
{
    int n, pares = 0, impares = 0;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    MostrarVector(numeros, n);
    ContarParesImparesVector(numeros, n, pares, impares);
    cout << "\nHay " << pares << " numeros pares." << endl;
    cout << "Hay " << impares << " numeros impares." << endl;
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

void ContarParesImparesVector(int numeros[], int n, int& pares, int& impares)
{
    for (int i = 0; i < n; i++)
    {
        if (numeros[i]%2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }        
    }
}