// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 6
// Problema planteado:  determinar cuántos días tiene ese mes considerando si el año es bisiesto.

#include <iostream>
using namespace std;

int diasEnMes(int mes, int anio) {
    if (mes == 2) {
        return (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) ? 29 : 28;
    }
    return (mes == 4 || mes == 6 || mes == 9 || mes == 11) ? 30 : 31;
}

int main() {
    int mes, anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el anio: ";
    cin >> anio;
    cout << "El mes " << mes << " del anio " << anio << " tiene " << diasEnMes(mes, anio) << " dias." << endl;
    return 0;
}