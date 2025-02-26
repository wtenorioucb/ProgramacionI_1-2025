// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 25/02/2025
// Número de ejercicio: 2
/*Problema planteado: Simular el lanzamiento de un dado n veces y determinar la frecuencia de
repetición de las caras pares.*/
#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()
using namespace std;
int main() {
    int n;
    cout << "Ingrese el numero de veces que desea lanzar el dado: ";
    cin >> n;
    srand(time(0));
    int freq2 = 0, freq4 = 0, freq6 = 0;
    for (int i = 0; i < n; i++) {
        int resultado = (rand() % 6) + 1;
        cout << "Lanzamiento " << (i + 1) << ": " << resultado << endl;
        if (resultado == 2) freq2++;
        else if (resultado == 4) freq4++;
        else if (resultado == 6) freq6++;
    }
    cout << "\nFrecuencia de caras pares:" << endl;
    cout << "2 apareció " << freq2 << " veces." << endl;
    cout << "4 apareció " << freq4 << " veces." << endl;
    cout << "6 apareció " << freq6 << " veces." << endl;

    return 0;
}
