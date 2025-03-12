// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 3
// Problema planteado: función para determinar si un número es capicúa.

#include <iostream>
using namespace std;

bool esCapicua(int num) {
    int original = num, reverso = 0;

    while (num > 0) { // Mientras el número 'num' sea mayor que 0
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    return original == reverso; // Comparamos el número original con su reverso
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El numero " << numero << (esCapicua(numero) ? " es capicua." : " no es capicua.") << endl;
    return 0;
}