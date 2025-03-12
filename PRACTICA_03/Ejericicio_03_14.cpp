// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 14
// Problema planteado: . Simulación de un cajero automático

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad) {
    if (cantidad > saldo) {
        cout << "Saldo insuficiente!" << endl;
        return saldo;
    }
    if (int(cantidad) % 10 != 0) {
        cout << "El monto debe ser múltiplo de 10." << endl;
        return saldo;
    }
    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << endl;
    return saldo;
}

int main() {
    double saldo = 1000;
    double cantidad;
    cout << "Ingrese la cantidad a retirar: ";
    cin >> cantidad;
    saldo = retirarDinero(saldo, cantidad);
    return 0;
}