// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 7 
// Problema planteado: mcd y mcm

#include <iostream>
using namespace std;

void swap(int&, int&);
int mcd (int, int);
int mcm (int, int);

int main () {
    int n1, n2;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> n1 >> n2;
    if(n2 > n1)
        swap(n1, n2);
    cout << "El mcd es: " << mcd(n1, n2) << endl;
    cout << "El mcm es: " << mcm(n1, n2) << endl;
    return 0;
}

void swap (int &a, int &b) { //esta funcion intercambia los valores de ser el segundo mayor que el primero
    a = a + b;
    b = a - b;
    a = a - b;
}

int mcd (int m, int n) { //esta funcion calcula el mcd 
    int res = 1;
    do {
        res = m % n;
        if(!res == 0) {
            m = n;
            n = res;
        }
    }while(res != 0);

    return n;
}

int mcm (int m, int n){ //esta funcion calcula el mcm
    int aux = m, i = 1;
    while(aux % n != 0) {
        aux = m * i;
        i++;
    }

    return aux;
}