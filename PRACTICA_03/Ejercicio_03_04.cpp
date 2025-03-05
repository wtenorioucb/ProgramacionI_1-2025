// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 4 
// Problema planteado: imc en funciones
#include <iostream>
using namespace std;
double operador (int, double);



int main (){
    int peso;
    double altura;
    double imc;
    cout << "ingrese altura en metros ";
    cin >> altura;
    cout << "ingrese peso en kilogramos ";
    cin >> peso;
    cout << "su indice de masa corporal es: " << operador(peso, altura) << endl;
    if (operador (peso, altura) > 25) { // no se uso una funcion para evaluar el imc
        cout << "usted tiene sobrepeso ";
    }
    else {
        cout << "usted no tiene sobrepeso";
    }
    
    return 0;
}

double operador (int peso, double altura){ //esta funcion calcula el indice de masa corporal
    double imc = peso/(altura*altura);
    return imc;
}
