// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 4
// Problema planteado:  función para el cálculo del IMC

#include <iostream>
using namespace std;

// Función que calcula el índice de masa corporal
double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    cout << "Su IMC es: " << calcularIMC(peso, altura) << endl;
    return 0;
}