// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 21/02/2025
// N�mero de ejercicio: 5
// Problema planteado:Genera un n�mero aleatorio entre 1 y 10 y calcula su factorial.x
#include <iostream>

using namespace std;
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int numero;

    cout << "Ingrese un numero entre 1 y 10: ";
    cin >> numero;
    if (numero < 1 || numero > 10) {
        cout << "Numero fuera de rango. Debe estar entre 1 y 10." << endl;
        return 1;
    }
    cout << "Factorial de " << numero << " es: " << factorial(numero) << endl;

    return 0;
}

