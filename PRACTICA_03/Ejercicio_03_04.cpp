// Materia: Programaci�n I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creaci�n: 04/03/2025

// N�mero de ejercicio: 4

/* Problema planteado:Realizar una funci�n para el c�lculo del IMC (�ndice de Masa Corporal): Leer el
peso en kilogramos y la altura en metros de una persona, luego calcular su IMC
usando la f�rmula.*/
#include <iostream>
using namespace std;
// Funci�n para calcular el IMC
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


