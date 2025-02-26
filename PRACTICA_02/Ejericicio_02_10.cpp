// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 10
// Problema planteado: Verificar si un número es primo

#include <iostream>
using namespace std;

int main() {
    int n, esPrimo = 1; // Suponemos que es primo

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n <= 1) {
        esPrimo = 0; // Los números menores o iguales a 1 no son primos
    } else {
        for (int i = 2; i * i <= n; i++) { // Solo verificamos hasta la raíz cuadrada de n
            if (n % i == 0) {
                esPrimo = 0; // Si es divisible por algún número, no es primo
                break;
            }
        }
    }

    if (esPrimo)
        cout << n << " es un numero primo." << endl;
    else
        cout << n << " no es un numero primo." << endl;

    return 0;
}
