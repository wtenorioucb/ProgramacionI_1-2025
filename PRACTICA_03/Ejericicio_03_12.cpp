// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 12
// Problema planteado: función que al enviar el tiempo total en minutos

#include <iostream>
using namespace std;

void calcularTiempo(int minutos) {
    int jornada = 8 * 60;  // 8 horas en minutos
    if (minutos > jornada) {
        cout << "Trabajo " << minutos - jornada << " minutos extra." << endl;  // Si el trabajador trabajó más de 480 minutos, se calcula el tiempo extra (minutos trabajados - 480) 
    } else {
        cout << "Debe " << jornada - minutos << " minutos a la empresa." << endl;
    }
}

int main() {
    int minutos;
    cout << "Ingrese el tiempo total trabajado en minutos: ";
    cin >> minutos;
    calcularTiempo(minutos);
    return 0;
}