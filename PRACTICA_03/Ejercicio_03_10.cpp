// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 10 
// Problema planteado: suma de serie matematica en funciones
#include <iostream>
using namespace std;

void serie (int);

int main () {
    int n;
    cout << "Ingrese el valor de n" << endl;
    cin >> n;
    serie(n); //se llama a la funcion serie
}

void serie (int num) { //esta funcion es void que recibe un numero y calcula la suma de la serie
    int numerador = 0, denominador = 1; //se inicializan las variables
    for(int i = 1; i <= num; i++){ //se calcula la suma de la serie
        numerador = denominador + numerador * i; //se calcula el numerador
        denominador = denominador * i; //se calcula el denominador
    }

    cout << "resultado: " << numerador << "/" << denominador << endl;
}