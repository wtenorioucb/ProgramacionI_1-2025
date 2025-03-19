// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 9

/* Problema planteado:Leer un valor que represente una cierta cantidad de dinero; escribir un algoritmo
que permita convertir dicho valor en billetes y monedas, de tal forma que sea la
menor cantidad de billetes y monedas a convertir.
Ej: Sea el monto = 655 Bs.
La salida será:
 3 billetes de 200 Bs
1 billete de 50 Bs.
 1 moneda de 5 Bs.*/
#include <iostream>
using namespace std;
void convertirDinero(double monto) {
    // Definimos los valores de los billetes y las monedas
    int billetes[] = {200, 100, 50, 20, 10, 5};   // Billetes
    double monedas[] = {1, 0.5, 0.1};             // Monedas
    cout << "El monto " << monto << " Bs se convierte en:\n";
    // Calcular la cantidad de billetes
    for (int i = 0; i < 6; i++) {
        int cantidadBilletes = monto / billetes[i];
        if (cantidadBilletes > 0) {
            cout << cantidadBilletes << " billete(s) de " << billetes[i] << " Bs\n";
            monto -= cantidadBilletes * billetes[i];
        }
    }
    // Calcular la cantidad de monedas
    for (int i = 0; i < 3; i++) {
        int cantidadMonedas = monto / monedas[i];
        if (cantidadMonedas > 0) {
            cout << cantidadMonedas << " moneda(s) de " << monedas[i] << " Bs\n";
            monto -= cantidadMonedas * monedas[i];
        }
    }
}
int main() {
    double monto;
    cout << "Ingrese el monto en Bs: ";
    cin >> monto;
    convertirDinero(monto);
    return 0;
}
