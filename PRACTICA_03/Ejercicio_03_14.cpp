// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 14 
// Problema planteado: cajero en funciones
#include <iostream>
using namespace std;

double retirarDinero (double, double);

int main () {
    double cantidad, saldo = 1000.0;
    cout << "Ingrese el monto a retirar: " << endl;
    cin >> cantidad;
    saldo = retirarDinero(saldo, cantidad);
    cout << "Su saldo actual es de: " << saldo << endl;
}

double retirarDinero (double saldo, double cantidad) {
    if(saldo >= cantidad){
        int aux = cantidad * 1;
        if(aux % 10 == 0) {
            cout << "Retiro exitoso" << endl;
            return saldo - cantidad;
        } else {
            cout << "Monto no valido" << endl;
        }
    } else {
        cout << "Saldo insuficiente" << endl;
    }

    return saldo;
}