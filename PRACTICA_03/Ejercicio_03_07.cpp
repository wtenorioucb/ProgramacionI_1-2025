// Materia: Programaci�n I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creaci�n: 04/03/2025

// N�mero de ejercicio: 7

// Problema planteado:Realizar una funci�n para enviar un n�mero entero y mostrar cu�ntos d�gitos tiene.
#include <iostream>
using namespace std;
// Funci�n para contar los d�gitos de un n�mero entero
int contarDigitos(int num) {
    if (num == 0) return 1; // El n�mero 0 tiene un solo d�gito
    int contador = 0;
    num = abs(num); // Tomamos el valor absoluto para manejar n�meros negativos
    while (num > 0) {
        num /= 10;
        contador++;
    }
    return contador;
}
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    cout << "El numero tiene " << contarDigitos(numero) << " digitos.\n";
    return 0;
}
