// EJERCICIOS CON VECTORES
// Materia: Programación I, Paralelo 3
// Docente:  Willy Tenorio Palza
// Fecha: 27/03/2025
// EJERCICIO: Encontrar el número mayor y menor en un vector

#include <iostream>

using namespace std;

void LlenarVector(int[], int);
void MostrarVector(int[], int);
int MayorValorVector(int[], int);
int MenorValorVector(int[], int);

int main()
{
    int n;
    system("cls");
    cout << "Cuantos elementos tiene el vector: ";
    cin >> n;
    int numeros[n];
    LlenarVector(numeros, n);
    MostrarVector(numeros, n);
    cout << "\nEl MAYOR elemento del vector es: " << MayorValorVector(numeros, n) << endl;
    cout << "El MENOR elemento del vector es: " << MenorValorVector(numeros, n) << endl;
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

int MayorValorVector(int numeros[], int n)
{
    if (n > 0) // Verifica que el vector tenga al menos un elemento
    {
        int mayor = numeros[0];
        for (int i = 1; i < n; i++)
        {
            if (numeros[i] > mayor)
            {
                mayor = numeros[i];
            }
        }
        return mayor;
    }
    else
    {
        // Si el vector no tiene elementos la funcion devolvera 0
        return 0;
    }
}

int MenorValorVector(int numeros[], int n)
{
    if (n > 0) // Verifica que el vector tenga al menos un elemento
    {
        int menor = numeros[0];
        for (int i = 1; i < n; i++)
        {
            if (numeros[i] < menor)
            {
                menor = numeros[i];
            }
        }
        return menor;
    }
    else
    {
        // Si el vector no tiene elementos la funcion devolvera 0
        return 0;
    }
}