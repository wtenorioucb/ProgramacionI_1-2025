// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 10/03/2025
// N�mero de ejercicio: 3
/* Problema planteado:Crea una funci�n llamada modificarValores que reciba dos par�metros: un entero
por valor y un entero por referencia. La funci�n debe multiplicar el valor por 2 (para
el valor pasado por valor) y cambiar el valor por referencia (sumando 10).*/
#include <iostream>
using namespace std;
// Funci�n para modificar valores
void modificarValores(int valor, int &referencia) {
    valor *= 2;        // Multiplica por 2 el valor pasado por valor
    referencia += 10;  // Suma 10 al valor pasado por referencia
}
int main() {
    int numero1, numero2;
    // Pedir al usuario los valores
    cout << "Ingrese un numero (por valor): ";
    cin >> numero1;
    cout << "Ingrese otro numero (por referencia): ";
    cin >> numero2;
    cout << "\nAntes de llamar a la funci�n:" << endl;
    cout << "numero1 (por valor): " << numero1 << endl;
    cout << "numero2 (por referencia): " << numero2 << endl;
    modificarValores(numero1, numero2);
    cout << "\nDespu�s de llamar a la funci�n:" << endl;
    cout << "numero1 (por valor, sin cambios fuera de la funcion): " << numero1 << endl;
    cout << "numero2 (por referencia, modificado dentro de la funcion): " << numero2 << endl;
    return 0;
}
