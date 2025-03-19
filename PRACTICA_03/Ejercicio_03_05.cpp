// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 5

/* Problema planteado:Realizar una función para el Cálculo del promedio ponderado: Generar
aleatoriamente 4 calificaciones entre 1 y 100 y sus respectivos pesos son
(10,20,30,40), luego calcular el promedio ponderado.*/
#include <iostream>
#include <cstdlib>  // Para srand() y rand()
#include <ctime>    // Para time()

using namespace std;

// Función para calcular el promedio ponderado
double calcularPromedioPonderado(int c1, int c2, int c3, int c4) {
    int pesos[] = {10, 20, 30, 40};
    int sumaPesos = pesos[0] + pesos[1] + pesos[2] + pesos[3];
    double promedio = (c1 * pesos[0] + c2 * pesos[1] + c3 * pesos[2] + c4 * pesos[3]) / (double)sumaPesos;
    return promedio;
}

int main() {
    srand(time(0)); // Inicializar la semilla aleatoria
    // Generar calificaciones aleatorias entre 1 y 100
    int c1 = rand() % 100 + 1;
    int c2 = rand() % 100 + 1;
    int c3 = rand() % 100 + 1;
    int c4 = rand() % 100 + 1;
    // Mostrar las calificaciones generadas
    cout << "Calificaciones generadas:\n";
    cout << "C1: " << c1 << " (Peso 10)\n";
    cout << "C2: " << c2 << " (Peso 20)\n";
    cout << "C3: " << c3 << " (Peso 30)\n";
    cout << "C4: " << c4 << " (Peso 40)\n";
    // Calcular el promedio ponderado
    double promedio = calcularPromedioPonderado(c1, c2, c3, c4);
    cout << "Promedio Ponderado: " << promedio << endl;
    return 0;
}
