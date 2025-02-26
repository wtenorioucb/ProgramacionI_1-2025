// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 1
// Problema planteado: suma en serie

#include <iostream>
using namespace std;

int main() {
    int n;  // Número de términos a generar
    cout << "Ingrese el número de términos: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número de términos debe ser mayor que 0." << endl;
        return 1;
    }

    int suma = 0;  // Acumulador de la suma total
    int actual = 4; // Primer término de la serie
    int diferencia1 = 2, diferencia2 = 3, diferencia3 = 4; // Tres diferencias iniciales

    for (int i = 0; i < n; i++) {
        cout << actual << " "; // Imprime el término actual
        suma += actual; // Acumula la suma total

        int siguiente = actual + diferencia1; // Calculamos el siguiente número de la serie
        int nueva_diferencia = diferencia1 + diferencia2 + diferencia3; // Nueva diferencia sumando las tres

        // Actualizamos las diferencias para la siguiente iteración
        diferencia1 = diferencia2;
        diferencia2 = diferencia3;
        diferencia3 = nueva_diferencia;
        actual = siguiente; // Pasamos al siguiente número
    }

    cout << "\nSuma total de la serie: " << suma << endl;
    return 0;
}
