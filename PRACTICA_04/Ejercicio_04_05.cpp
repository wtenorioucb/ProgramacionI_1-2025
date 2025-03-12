// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 5 
// Problema planteado: SWAP

#include <iostream>

using namespace std;

double salario(int, double, double&); //esta funcion tendra una variable por referencia
double bonificacion (int, double);

int main () {
    int horas;
    double sal, bono;
    cout << "ingrese la cantidad de horas trabajadas: " << endl;
    cin >> horas;
    cout << "Ingrese el sueldo por hora: " << endl;
    cin >> sal;
    cout << "Ingrese la bonificacion por horas extra: " << endl;
    cin >> bono;

    double sueldo = salario(horas, sal, bono);
    cout << "El salario es de: " << sueldo << endl;
    cout << "Por horas extra tiene una bonificacion de: " << bono << endl;
    cout << "El sueldo total es: " << sueldo + bono << endl; 
}

double salario(int horas, double sueldo, double &bono){ //esta funcion decide si se paga o no el bono
    if(horas > 8){
        bono = bonificacion(horas - 8, bono); //el bono se calcula a partir de la bonificacion 
        return 8 * sueldo;
    } else {
        bono = 0;
        return horas * sueldo; 
    }
}

double bonificacion (int horas, double bono){ //esta funcion devuelve la bonificacion
    return horas * bono; 
}