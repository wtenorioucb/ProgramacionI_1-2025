// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 21/02/2025
// Número de ejercicio: 7
/* Problema planteado:
1 2 3 4 …………..n
1 2 3 4……. n-1
1 2 3 …...n-2
……….
1*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
