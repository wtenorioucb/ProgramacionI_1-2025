// Materia: Programación I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creación: 04/03/2025

// Número de ejercicio: 3

// Problema planteado: Realizar una función para determinar si un número es capicúa.
#include <iostream>
using namespace std;
//Funcion para determinar si es capicua
bool Escapicua(int num){
    int entrada=num, invertido=0;
    while (num >0){
        int digito = num%10;
        invertido = invertido *10 + digito;
        num/= 10;
    }
    return entrada== invertido;
}
int main ()
{
    int num;
    cout<< "Introduzca un numero :";
    cin>> num;
    if (Escapicua(num)){
        cout<<"El numero "<<num<<" es capicua"<<endl;
    }
    else{
        cout<<"El numero "<<num<<" no es capicua"<<endl;
    }
    return 0;
}
