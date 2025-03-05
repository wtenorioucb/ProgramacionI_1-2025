// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 7 
// Problema planteado: contador de digitos en funciones
#include <iostream>
using namespace std;

int num (int n){
    int aux=0;
    int contador=0;
    while (n>0){
        aux = n%10;
        n = n/10;
        if (aux > 0){ // se agrega esta condicion para que no cuente los ceros
            contador++;
        }
    }    
    return contador;
}

int main (){ // esta funcion permite saber cuantos digitos tiene un numero
    cout << "Ingrese un numero: ";
    int n;
    cin >> n;
    cout << "El numero " << n;
     cout <<"tiene ";
     cout << num(n)<< " digitos"; 
    return 0;

}
