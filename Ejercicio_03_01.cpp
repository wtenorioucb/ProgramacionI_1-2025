// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 1

// Problema planteado: Realizar una función para determinar si un número es par o impar.
#include <iostream>
using namespace std ;
//Funcion para verificar si un numero es par o impar
void Par_o_Impar(int num){
    if (num%2 == 0)   //operador para verificar si un numero es par o impar
        cout<<num<<" el numero es par"<<endl;
    else
        cout<<num<<" el numero es impar"<<endl;
}
int main ()
{
    int num;
    cout <<"Introduzac un numero: ";// introducir valores
    cin>> num;
    Par_o_Impar(num);
    return 0;
}
