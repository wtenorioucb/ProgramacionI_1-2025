// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 25/02/2025
// N�mero de ejercicio: 1
// Problema planteado: Obtener la suma de la serie: 4 + 6 + 9 + 13 + 19 + 28 + 42 +��. Para n t�rminos
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese la cantidad de terminos: ";
    cin >> n;
    if (n <= 0) {
        cout << "El numero de t�rminos debe ser mayor a 0." << endl;
        return 1;
    }
    int termino = 4, suma = 4;
    int a = 2, b = 3;
    cout << "Serie: " << termino << " ";
    for (int i = 1; i < n; i++) {
        termino += a;
        suma += termino;
        cout << termino << " ";
        int nuevaDiferencia = a + b;
        a = b;
        b = nuevaDiferencia;
    }
    cout << "\nSuma de la serie: " << suma << endl;
    return 0;
}
