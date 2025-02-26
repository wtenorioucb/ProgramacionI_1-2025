// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 3
// Problema planteado: Convertir un número en base n a base 10

#include <iostream>
#include <cmath> // Para la función pow()
using namespace std;

int main() {

    int numero, base, resultado = 0, potencia = 0;

    cout << "Ingrese el numero en la base deseada: ";
    cin >> numero;
    cout << "Ingrese la base del numero: ";
    cin >> base;

    while (numero > 0) {
        int digito = numero % 10; // Obtiene el último dígito
        resultado += digito * pow(base, potencia); // Convierte a base 10
        numero /= 10; // Quita el último dígito
        potencia++; // Aumenta la posición del dígito
    }

    cout << "El numero en base 10 es: " << resultado << endl;
    return 0;
}
