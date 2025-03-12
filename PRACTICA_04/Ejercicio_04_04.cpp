// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 10/03/2025
// N�mero de ejercicio: 4
/* Problema planteado: Crea dos funciones:
Una funci�n llamada convertirCelsiusAFahrenheit que reciba grados Celsius y
devuelva la conversi�n a Fahrenheit.
Una funci�n llamada mayorTemperatura que reciba dos valores de temperatura y
devuelva el valor mayor.*/
#include <iostream>
using namespace std;
// Funci�n para convertir Celsius a Fahrenheit
double convertirCelsiusAFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}
// Funci�n para determinar la mayor temperatura
double mayorTemperatura(double temp1, double temp2) {
    return (temp1 > temp2) ? temp1 : temp2;
}
int main() {
    double celsius1, celsius2;
    // Pedir al usuario dos temperaturas en Celsius
    cout << "Ingrese la primera temperatura en Celsius: ";
    cin >> celsius1;
    cout << "Ingrese la segunda temperatura en Celsius: ";
    cin >> celsius2;
    // Convertir ambas temperaturas a Fahrenheit
    double fahrenheit1 = convertirCelsiusAFahrenheit(celsius1);
    double fahrenheit2 = convertirCelsiusAFahrenheit(celsius2);
    // Mostrar las conversiones
    cout << "Temperatura 1 en Fahrenheit: " << fahrenheit1 << endl;
    cout << "Temperatura 2 en Fahrenheit: " << fahrenheit2 << endl;
    // Determinar la mayor temperatura en Fahrenheit
    double mayor = mayorTemperatura(fahrenheit1, fahrenheit2);
    cout << "La mayor temperatura en Fahrenheit es: " << mayor << endl;
    return 0;
}

