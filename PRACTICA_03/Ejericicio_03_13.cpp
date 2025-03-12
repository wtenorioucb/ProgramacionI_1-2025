// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 13
// Problema planteado: Determinar el precio de un taxi según la distancia recorrida

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos) {
    double tarifaBase = 5;
    double precioPorKm = 1.50;
    double tarifa = tarifaBase + (kmRecorridos * precioPorKm);

    if (kmRecorridos > 10) {
        tarifa *= 0.9;  // Aplicar 10% de descuento si la distancia es mayor a 10 km
    }

    return tarifa;
}

int main() {
    double km;
    cout << "Ingrese la distancia recorrida en km: ";
    cin >> km;
    cout << "La tarifa del taxi es: $" << calcularTarifa(km) << endl;
    return 0;
}