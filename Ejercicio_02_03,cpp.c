// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 21/02/2025
// Número de ejercicio:3
/* Problema planteado:Convertir un número en base n a base 10, empleando el Teorema Fundamental de
la Numeración:
Ej: Convertir 10102 base 10
1 * 23 + 0 * 22 + 1 * 21 + 0 * 20 = 10*/
#include <iostream>
#include <cmath> // Para pow()

using namespace std;

int convertirABase10(int numero, int base) {
    int resultado = 0, exponente = 0;

    while (numero > 0) {
        int digito = numero % 10;
        resultado += digito * pow(base, exponente);
        numero /= 10;
        exponente++;
    }

    return resultado;
}

int main() {
    int numero, base;

    cout << "Ingrese el numero en base n: ";
    cin >> numero;

    cout << "Ingrese la base n: ";
    cin >> base;

    if (base < 2) {
        cout << "La base debe ser al menos 2." << endl;
        return 1;
    }

    int resultado = convertirABase10(numero, base);
    cout << "El numero " << numero << " en base " << base << " equivale a " << resultado << " en base 10." << endl;

    return 0;
}

