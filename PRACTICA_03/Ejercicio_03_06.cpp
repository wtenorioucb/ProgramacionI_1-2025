// Materia: Programaci�n I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creaci�n: 04/03/2025

// N�mero de ejercicio: 6

/* Problema planteado: Realizar una funci�n y enviar el un a�o y un mes (como n�mero) y determinar
cu�ntos d�as tiene ese mes considerando si el a�o es bisiesto.*/
#include <iostream>

using namespace std;
// Funci�n para determinar si un a�o es bisiesto
bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}
// Funci�n para obtener los d�as del mes
int diasDelMes(int anio, int mes) {
    if (mes < 1 || mes > 12) {
        cout << "Mes invalido.\n";
        return -1; // C�digo de error
    }
    // D�as de cada mes
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // Si es febrero y el a�o es bisiesto, tiene 29 d�as
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

