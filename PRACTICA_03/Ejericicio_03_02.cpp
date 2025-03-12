// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 2
// Problema planteado: función para convertir grados Celsius a Fahrenheit

#include <iostream>
using namespace std;

double celsiusAFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;
    cout << "Equivalente en Fahrenheit: " << celsiusAFahrenheit(celsius) << endl;
    return 0;
}