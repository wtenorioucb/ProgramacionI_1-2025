// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 2
// Problema planteado: simulacion de dado

#include <iostream>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int n, pares = 0;  

    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    srand(time(0)); // Inicializa los números aleatorios

    for (int i = 1; i <= n; i++) {
        int dado = rand() % 6 + 1; // Número entre 1 y 6
        cout << "Lanzamiento " << i << ": " << dado << endl;

        if (dado % 2 == 0) pares++; // Contamos los pares
    }

    cout << "\nPares obtenidos: " << pares << endl;
    return 0;
}
