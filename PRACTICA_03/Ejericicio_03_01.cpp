// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 1
// Problema planteado: función para determinar si un número es par o impar

#include <iostream>
using namespace std;

// 1. Función para determinar si un número es par o impar.
bool esPar(int num) {
    return num % 2 == 0; // Si el residuo es 0, es par
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El numero " << numero << (esPar(numero) ? " es par." : " es impar.") << endl;
    return 0;
}
