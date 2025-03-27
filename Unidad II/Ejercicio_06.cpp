// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Encontrar la posición de un número en el vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
void EncontrarPosicionValor(int[], int, int);

int main()
{
    int n, valorBuscado;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    MostrarVector(numeros, n);
    cout << "\nIngrese el valor que desea buscar: ";
    cin >> valorBuscado;
    EncontrarPosicionValor(numeros, n, valorBuscado);
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
    cout << "\nLos numeros ingresados en el vector son: " << endl;
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << "\t";
    }
}

void EncontrarPosicionValor(int numeros[], int n, int valor)
{
    int contador = 0;
    bool encontrado = false;
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] == valor)
        {
            cout << "El valor " << valor << " esta en la posicion "  << i << endl;
            encontrado = true;
        }
    }
    if (!(encontrado))
    {
        cout << "El valor " << valor << " no esta en el vector." << endl;
    }
    
}