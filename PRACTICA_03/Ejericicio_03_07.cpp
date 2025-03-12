// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 7
// Problema planteado:  función para enviar un número entero y mostrar cuántos dígitos tiene.

#include <iostream>
using namespace std;

int contarDigitos(int num) {
    int contador = 0;
    do {
        contador++;
        num /= 10;
    } while (num > 0); // El bucle se repite mientras el número sea mayor que 0
    return contador;
}

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "El numero tiene " << contarDigitos(numero) << " dígitos." << endl;
    return 0;
}