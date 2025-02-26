// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 11
// Problema planteado: Invertir un número

#include <iostream>
using namespace std;

int main() {
    int n, invertido = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n > 0) {
        int digito = n % 10; // Extraemos el último dígito
        invertido = invertido * 10 + digito; // Construimos el número invertido
        n /= 10; // Eliminamos el último dígito del número original
    }

    cout << "Numero invertido: " << invertido << endl;
    return 0;
}
