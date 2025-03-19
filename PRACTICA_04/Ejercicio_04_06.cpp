// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 10/03/2025
// Número de ejercicio: 6
/* Problema planteado:Leer un número entero y determinar si las sumas de sus dígitos distintos de cero
forman un número primo; de ser así, imprimir el mensaje respectivo.*/
#include <iostream>
using namespace std;
// Funcion para verificar si un numero es primo
bool esPrimo(int num) {
    if (num < 2) return false; // Numeros menores a 2 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false; // Si es divisible por otro numero, no es primo
    }
    return true; // Si no encontro divisores, es primo
}
// Funcion para calcular la suma de los digitos distintos de cero
int sumaDigitosDistintosDeCero(int numero) {
    int suma = 0;
    while (numero > 0) {
        int digito = numero % 10; // Extrae el ultimo dígito
        if (digito != 0) {
            suma += digito; // Suma solo si es distinto de cero
        }
        numero /= 10; // Elimina el ultimo dígito
    }
    return suma;
}
int main() {
    int numero;
    // Solicitar numero al usuario
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    // Asegurar que el numero sea positivo
    numero = abs(numero);
    // Calcular la suma de los digitos distintos de cero
    int suma = sumaDigitosDistintosDeCero(numero);
    // Verificar si la suma es un numero primo
    if (esPrimo(suma)) {
        cout << "La suma de los digitos distintos de cero es " << suma << " y es un numero primo.";
    } else {
        cout << "La suma de los digitos distintos de cero es " << suma << " y NO es un numero primo.";
    }
    return 0;
}

