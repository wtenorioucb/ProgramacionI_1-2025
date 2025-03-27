// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Ordenar un vector en orden ascendente o descendente

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
void OrdenarVector(int[], int, char);

int main()
{
    int n;
    char tipoOrden;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    cout << "VECTOR ORIGINAL";
    MostrarVector(numeros, n);
    cout << "\nDesea ordenar (A)scendente o (D)esendente: ";
    cin >> tipoOrden;
    OrdenarVector(numeros, n, tipoOrden);
    cout << "VECTOR ORDENADO";
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

void OrdenarVector(int numeros[], int n, char tipo)
{
    int aux = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (tipo == 'A' || tipo == 'a') // NO IMPORTA QUE EL USUARIO DIGITE LA LETRA A EN MAYUSCULO O MINUSCULA
            {
                if (numeros[i] > numeros[i+1])
                {
                    // Si es mayor intercambia valores del vector
                    aux = numeros[i];
                    numeros[i] = numeros[i+1];
                    numeros[i+1] = aux;
                }
            }
            else
            {
                if (numeros[i] < numeros[i+1])
                {
                    // Si es menor intercambia valores del vector
                    aux = numeros[i];
                    numeros[i] = numeros[i+1];
                    numeros[i+1] = aux;
                }
            }
        }
    }
}