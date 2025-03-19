// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 21/02/2025
// Número de ejercicio:6
/* Problema planteado:Escribir un algoritmo que permita adivinar un número que se genere internamente
al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en
base a aproximaciones para lo cual se dispone de 5 intentos.
Supongamos que el número “pensado” por la computadora sea el 42.
Salida del programa:
Estoy pensando un número entre 0 y 50
Intento 1
? 25
El numero esta entre 25 y 50
Intento 2
? 34
El numero esta entre 34 y 50
Intento 3
? 45
El numero esta entre 34 y 45
Intento 4
? 40
El numero esta entre 40 y 45
Intento 5
? 42
Felicitaciones… Adivinaste el número*/
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 51;
    int intento, min = 0, max = 50;

    cout << "Estoy pensando en un número entre 0 y 50.\n";

    for (int i = 1; i <= 5; i++) {
        cout << "Intento " << i << "\n? ";
        cin >> intento;

        if (intento == numeroSecreto) {
            cout << "Felicitaciones… Adivinaste el numero!\n";
            return 0; // Terminar el programa
        }

        if (intento < numeroSecreto) {
            min = intento;
        } else {
            max = intento;
        }

        cout << "El numero está entre " << min << " y " << max << endl;
    }

    cout << "Lo siento, se acabaron los intentos. El numero era: " << numeroSecreto << endl;
    return 0;
}

