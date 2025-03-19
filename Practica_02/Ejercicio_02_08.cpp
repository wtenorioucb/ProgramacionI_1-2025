// Materia: Programacion I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha modificacion: 25/02/2025
// Numero de ejericio: 8
/* Problema planteado: Generar:
121
12321
1234321
123454321
12345654321
1234567654321
123456787654321
12345678987654321
*/
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        for (int j = i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

