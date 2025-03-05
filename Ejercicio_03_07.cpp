// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 7

// Problema planteado:Realizar una función para enviar un número entero y mostrar cuántos dígitos tiene.
#include <iostream>
using namespace std;
// Función para contar los dígitos de un número entero
int contarDigitos(int num) {
    if (num == 0) return 1; // El número 0 tiene un solo dígito
    int contador = 0;
    num = abs(num); // Tomamos el valor absoluto para manejar números negativos
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
