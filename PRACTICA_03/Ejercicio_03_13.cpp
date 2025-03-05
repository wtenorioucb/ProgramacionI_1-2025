// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 13 
// Problema planteado: cobro de taxi segun kilometro recorrido en funciones 
#include <iostream>
using namespace std;

double calcularcobro (double kmrecorridos){
    int tarifabase = 5;
    double preciokm=1.5;
    double precio = 0;
    if (kmrecorridos >10){
        precio = tarifabase + (preciokm * kmrecorridos);
        //cout << precio <<endl;
        precio = precio - (precio*0.1);
    }
    else {
        precio = tarifabase +(preciokm * kmrecorridos); 
            
    }
       
    return precio;
    }
int main (){
    cout << "ingrese los km recorridos ";
    double n;
    cin >> n;
    cout << "el cobro por el total recorrido es " << calcularcobro(n);   


}    
