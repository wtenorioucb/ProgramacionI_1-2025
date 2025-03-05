// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 27/02/2025 
// Número de ejercicio: 1 
// Problema planteado: par impar usando funciones  
#include <iostream>
using namespace std;
int num (int n);

int main (){
    int n;
    cout << "ingrese un numero" << endl;
    cin >> n;
    if (num (n)==1){
        cout << "el numero es par";
    }
    else {
        cout << "el numero es impar";
    }

}

int num (int n){ //esta funcion permite saber si un numero es par o impar
    int resultado=0;
    if (n %2 == 0){
        resultado =1;
    }
    else {
        resultado = 0;
    }
    return resultado;
}