// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 25/02/2025
// Número de ejercicio: 9
// Problema planteado: Generar N números aleatorios y calcular sumatoria, promedio, mayor y menor

#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla aleatoria
    int n;
    cout << "Ingrese la cantidad de numeros aleatorios: ";
    cin >> n;

    int suma = 0, mayor = 0, menor = 1001; // Valores iniciales
    int numero;

    for (int i = 0; i < n; i++) {
        numero = rand() % 1000 + 1; // Número entre 1 y 1000
        cout << numero << " ";
        suma += numero;

        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
    }

    cout << "\nSumatoria: " << suma;
    cout << "\nPromedio: " << suma / n;
    cout << "\nMayor numero: " << mayor;
    cout << "\nMenor numero: " << menor << endl;

    return 0;
}
