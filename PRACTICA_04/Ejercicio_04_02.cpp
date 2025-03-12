// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 2 
// Problema planteado: calcular volumen 


#include <iostream>
using namespace std;

double calcularvolumen (int radio);
int altura=10;

int main (){ 
    int radio, altura;
    cout << "introduzca un radio ";
    cin >> radio;
    //cout << "introduzca una altura ";
    //cin >> altura;
    //calcularvolumen(radio, altura);
    cout << " el vol es " << calcularvolumen(radio);
    return 0;

}


double calcularvolumen (int radio){
    double volumen = (3.141615) * (radio * radio) * altura;
    return volumen;
}
