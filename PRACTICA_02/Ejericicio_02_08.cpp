// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 8
// Problema planteado: Generar

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano de la piramide: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Primera parte: Números en orden ascendente
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Segunda parte: Números en orden descendente
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
