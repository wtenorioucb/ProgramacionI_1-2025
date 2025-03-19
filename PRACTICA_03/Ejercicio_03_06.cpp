// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 6

/* Problema planteado: Realizar una función y enviar el un año y un mes (como número) y determinar
cuántos días tiene ese mes considerando si el año es bisiesto.*/
#include <iostream>

using namespace std;
// Función para determinar si un año es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}
// Función para obtener los días del mes
int diasDelMes(int anio, int mes) {
    if (mes < 1 || mes > 12) {
        cout << "Mes invalido.\n";
        return -1; // Código de error
    }
    // Días de cada mes
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Si es febrero y el año es bisiesto, tiene 29 días
    if (mes == 2 && esBisiesto(anio)) {
        return 29;
    }
    return dias[mes - 1];
}
int main() {
    int anio, mes;
    cout << "Ingrese un anio: ";
    cin >> anio;
    cout << "Ingrese un mes (1-12): ";
    cin >> mes;
    int dias = diasDelMes(anio, mes);
    if (dias != -1) {
        cout << "El mes " << mes << " del anio " << anio << " tiene " << dias << " dias.\n";
    }
    return 0;
}

