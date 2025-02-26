// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 5
// Problema planteado:Genera un número aleatorio entre 1 y 10 y calcula su factorial.

#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla aleatoria
    int numero = rand() % 10 + 1; // Genera un número entre 1 y 10
    int factorial = 1;

    // Calculamos el factorial de manera simple
    for (int i = 1; i <= numero; i++) {
        factorial *= i; 
    }

    // Mostramos el resultado
    cout << "Numero generado: " << numero << endl;
    cout << "Factorial: " << factorial << endl;

    return 0;
}
