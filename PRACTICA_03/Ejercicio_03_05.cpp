// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 5 
// Problema planteado: notas aleatorias, promedio usando funciones
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double promedio (int, int, int, int);

int main () {
    srand(time(NULL));
    int n1, n2, n3, n4;
    n1 = rand()%(100) + 1;
    n2 = rand()%(100) + 1;
    n3 = rand()%(100) + 1;
    n4 = rand()%(100) + 1;

    cout << "La nota 1 es: " << n1 << endl; //se imprimen las notas generadas aleatoriamente
    cout << "La nota 2 es: " << n2 << endl;
    cout << "La nota 3 es: " << n3 << endl;
    cout << "La nota 4 es: " << n4 << endl;
    cout << "El promedio ponderado es: " << promedio(n1, n2, n3, n4) << endl;
}

double promedio (int n1, int n2, int n3, int n4) { //esta funcion calcula el promedio ponderado
    double notaFinal = n1 * 0.10;
    notaFinal += n2 * 0.20;
    notaFinal += n3 * 0.30;
    notaFinal += n4 * 0.40;

    return notaFinal;
}