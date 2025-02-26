// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 6
// Problema planteado: algoritmo que permita adivinar un número

#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    srand(time(0)); // Inicializa aleatoria
    int numeroSecreto = rand() % 51; // Número entre 0 y 50
    int intento, intentos = 5;

    cout << "Estoy pensando un numero entre 0 y 50. Adivinalo en 5 intentos" << endl;

    for (int i = 1; i <= intentos; i++) {
        cout << "Intento " << i << ": ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "¡Felicitaciones! Adivinaste el numero." << endl;
            return 0; // Termina el programa
        } else if (intento < numeroSecreto) {
            cout << "El numero es mayor." << endl;
        } else {
            cout << "El numero es menor." << endl;
        }
    }

    cout << "Lo siento, no adivinaste. El numero era: " << numeroSecreto << endl;
    return 0;
}
