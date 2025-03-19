// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 21/02/2025
// N�mero de ejercicio:10
/* Problema planteado: Genere N n�mero aleatorios entre 1 y 10000, mu�strelos en pantalla y cuente
cuantos n�meros son primos.*/
#include <iostream>

using namespace std;

bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int N;
    cout << "Ingrese la cantidad de numeros aleatorios a generar: ";
    cin >> N;

    int primos = 0;

    cout << "Numeros generados:\n";
    for (int i = 0; i < N; i++) {
        int num;
        cout << "Ingrese un numero entre 1 y 10000: ";
        cin >> num;
        if (num < 1 || num > 10000) {
            cout << "Numero fuera de rango, ingrese uno v�lido.\n";
            i--;
            continue;
        }
        cout << num << " ";
        if (esPrimo(num)) primos++;
    }
    cout << "\nCantidad de numeros primos: " << primos << endl;
    return 0;
}
