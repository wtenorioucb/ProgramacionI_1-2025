// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 10
// Problema planteado: a función para calcula la siguiente serie matemática.


#include <iostream>
using namespace std;

float sumatoria(int num);

int main()
{
    int num = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El resultado de la sumatoria es " << sumatoria(num);
}

float sumatoria(int num) //Función de la sumatoria
{
    float resultado = 0;
    for (int i = 1; i <= num; i++)
    {
        resultado += 1.0/i;
    }
    return resultado;
}