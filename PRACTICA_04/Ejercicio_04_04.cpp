// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 4 
// Problema planteado: celsius a farenjeit


#include <iostream>
using namespace std;

double convertircelsius (int cel);
double mayor (double temp1 , double temp2);

int main (){
    int celsius1;
    int celsius2;
    double far1;
    double far2;

    cout << "ingrese los grados centigrados ";
    cin >> celsius1;
    cout << "ingrese los grados centigrados ";
    cin >> celsius2;

    far1= convertircelsius(celsius1);
    far2= convertircelsius(celsius2);
    cout << "la mayor temperatura es " << mayor(far1, far2);

}

double convertircelsius (int cel){ //esta funcion convierte a farenheit
    double farenheit=0;
    farenheit= (cel * (1.8)) + 32;
    cout << "las temperaturas en farenheit son "<< farenheit<<endl;
    return farenheit;
}

double mayor (double temp1, double temp2){ //esta funcion compara ambos valores (en f) y devuelve el mayor
    double aux;
    //cout << temp1 << endl << temp2;
    if (temp1>temp2)
    {
        aux = temp1;
        
    }
    else {
        aux = temp2;
    }
    return aux;
}