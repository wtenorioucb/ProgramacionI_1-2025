// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 3 
// Problema planteado: grados en farenheit usando funciones
#include <iostream>
using namespace std;

int invertirNumero(int);
void vefificarCapicua(int);

int main () {
    int numero;
    cout << "Ingrese un numero: " << endl;
    cin >> numero;
    vefificarCapicua(numero);
}

int invertirNumero (int num) { // esta primera funcion invierte el numero ingresado

    int resultado = 0;

    while(num > 0){
        int aux = num % 10;
        resultado += aux;
        resultado *= 10;
        num /= 10;
    }

    resultado /= 10;
    return resultado;
}

void vefificarCapicua (int num) { //esta funcion evalua si el numero es capicua
    int invertido = invertirNumero(num);
    if(num == invertido) cout << "Es un numero capicua" << endl;
    else cout << "No es un numero capicua" << endl;
}