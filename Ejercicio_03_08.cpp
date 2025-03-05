// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 8

/* Problema planteado:Realizar una función para generar aleatoriamente las edades (1 y 35) y alturas (120
y 200) de N alumnos, mostrar la edad y la estatura media, la cantidad de alumnos
mayores de 18 años, y la cantidad de alumnos que miden más de 1.75 cm.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Función para generar y analizar las edades y alturas
void analizarAlumnos(int N) {
    if (N <= 0) {
        cout << "El numero de alumnos debe ser mayor que 0.\n";
        return;
    }
    srand(time(0)); // Inicializar la semilla para números aleatorios
    int sumaEdad = 0, sumaAltura = 0;
    int mayores18 = 0, mas175cm = 0;
    cout << "Lista de alumnos:\n";
    for (int i = 0; i < N; i++) {
        int edad = rand() % 35 + 1;      // Genera edades entre 1 y 35
        int altura = rand() % 81 + 120;  // Genera alturas entre 120 y 200
        cout << "Alumno " << i + 1 << " -> Edad: " << edad << ", Altura: " << altura << " cm\n";
        // Sumar para promedios
        sumaEdad += edad;
        sumaAltura += altura;
        // Contar alumnos mayores de 18 años
        if (edad > 18) {
            mayores18++;
        }
        // Contar alumnos con altura mayor a 175 cm
        if (altura > 175) {
            mas175cm++;
        }
    }
    // Calcular promedios
    double edadMedia = (double)sumaEdad / N;
    double alturaMedia = (double)sumaAltura / N;

    // Mostrar resultados
    cout << "\nResultados:\n";
    cout << "Edad media: " << edadMedia << endl;
    cout << "Altura media: " << alturaMedia << " cm\n";
    cout << "Alumnos mayores de 18 anios: " << mayores18 << endl;
    cout << "Alumnos que miden mas de 175 cm: " << mas175cm << endl;
}

int main() {
    int N;
    cout << "Ingrese el numero de alumnos: ";
    cin >> N;
    analizarAlumnos(N);
    return 0;
}

