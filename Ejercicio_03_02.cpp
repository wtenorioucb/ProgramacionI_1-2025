// Materia: Programaci�n I, Paralelo 3

// Autor: Juan Jose Condori Yucra

// Fecha creaci�n: 04/03/2025

// N�mero de ejercicio: 2

// Problema planteado: Realizar una funci�n para convertir grados Celsius a Fahrenheit.
#include <iostream>
using namespace std;
// Funcion para convertir a Fahrenheit
double Cel_a_Fah(double Cel){
    return (Cel *1.8)+32;
}

int main ()
{
    double Cel, Fah;

    cout<<"Introduzca la temperatura en grados Celsius: ";
    cin>>Cel;
    Fah= Cel_a_Fah(Cel);
    cout<<"La temperatura en Fahrenheit es :"<< Fah<<"F"<< endl;
    return 0;
}
