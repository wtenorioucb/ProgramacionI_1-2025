// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 2
// Problema planteado: grados en farenheit usando funciones 

#include <iostream>
using namespace std;

int conversor (int n){ // se crea una funcion que convierte de grados centigrados a farenheit mediant una formula
    int farenheit = (n*9/5)+32;
    return farenheit;   
}

int main (){
cout << "Ingrese la temperatura en grados centígrados: ";
int n;
cin >> n;
cout << "La temperatura en grados Farenheit es: " << conversor(n) << endl;
return 0;
}
