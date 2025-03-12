// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 5
// Problema planteado: función para el Cálculo del promedio ponderado


#include <iostream>
#include <cstdlib>
using namespace std;

float promedioPonderado(int nota1, int nota2, int nota3, int nota4);
int random();

int main()
{
    srand(time(NULL));
    int nota1 = random();
    int nota2 = random();
    int nota3 = random();
    int nota4 = random();

    cout << "Las notas obtenidas respectivamente son: " << nota1 << " " << nota2 << " " << nota3
    << " " << nota4 << " " << endl;

    cout << "El promedio ponderado es " << promedioPonderado(nota1, nota2, nota3, nota4);
}

int random() //Función que genera un número aleatorio entre 1 y 100
{
    return rand() % 100 + 1;
}

float promedioPonderado(int nota1, int nota2, int nota3, int nota4) //Función que calcula el promedio ponderado
{
    double notaFinal = (nota1 * 0.10) + (nota2 * 0.20) + (nota3 * 0.30) + (nota4 * 0.40);
    return notaFinal;
}