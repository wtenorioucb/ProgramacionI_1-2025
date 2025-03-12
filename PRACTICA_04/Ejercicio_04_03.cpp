// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 3 
// Problema planteado: modificar valores y referencia

#include <iostream>
using namespace std;

int modificarValores(int, int&);

int main () {
    int n1, n2, n3;
    cout << "ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    cout << " " << n1 << "  " << n2 << endl;
    n3 = modificarValores(n1, n2); // para mostrar el valor de la funcion, se declara una 3 variable para guardar su valor
    cout << " " << n3 << "  " << n2 << endl; // el valor por referencia 
    return 0;
}

int modificarValores(int num1, int &num2){ //esta funcion realiza operaciones con la variable por referencia y por valor
    int aux = 0;
    aux = num2; 
    num1 = num1 *2;
    num2 = aux + 10;
    return num1;
}