// Materia: Programaci�n I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creaci�n: 04/03/2025

// N�mero de ejercicio: 1

// Problema planteado: Realizar una funci�n para determinar si un n�mero es par o impar.
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
