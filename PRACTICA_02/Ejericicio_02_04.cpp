// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 4
// Problema planteado: Simular el lanzamiento de una moneda

#include <iostream>
#include <cstdlib>  // Para rand()
#include <ctime>    // Para time()
using namespace std;

int main() {
    int n, cara = 0, cruz = 0;

    cout << "Ingrese el numero de lanzamientos: ";
    cin >> n;

    srand(time(0)); // Inicializa los números aleatorios

    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2; // 0 = Cruz, 1 = Cara
        if (resultado == 1) 
            cara++;
        else 
            cruz++;
    }

    // Ahora que ya contamos las caras y cruces, calculamos los porcentajes
    double porcentajeCara = (cara * 100.0) / n;
    double porcentajeCruz = (cruz * 100.0) / n;

    cout << "Cara: " << cara << " (" << porcentajeCara << "%)" << endl;
    cout << "Cruz: " << cruz << " (" << porcentajeCruz << "%)" << endl;

    return 0;
}
