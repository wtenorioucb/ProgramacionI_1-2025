// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 21/02/2025
// Número de ejercicio: 4
/* Problema planteado:Simular el lanzamiento de una moneda n veces y determinar el porcentaje de
caras y el porcentaje de cruz*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de lanzamientos de la moneda: ";
    cin >> n;
    int caras = 0, cruz = 0;
    for (int i = 0; i < n; i++) {
        int resultado;
        cout << "Ingrese 0 para cruz o 1 para cara (Lanzamiento " << i + 1 << "): ";
        cin >> resultado;
        if (resultado == 1) caras++;
        else if (resultado == 0) cruz++;
        else {
            cout << "Entrada invalida. Solo se permite 0 o 1." << endl;
            i--;
        }
    }
    float porcentajeCaras = (caras * 100.0) / n;
    float porcentajeCruz = (cruz * 100.0) / n;
    cout << "\nResultados:" << endl;
    cout << "Caras: " << caras << " veces (" << porcentajeCaras << "%)" << endl;
    cout << "Cruz: " << cruz << " veces (" << porcentajeCruz << "%)" << endl;
    return 0;
}
