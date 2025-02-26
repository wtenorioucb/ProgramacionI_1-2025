//Materia. Programacion I, Paralelo 3
//Autor: Camila Valentina Cuba Fernandez 
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Suma de serie para n terminos

#include <iostream>
using namespace std;

int main () {
    
    int n;
    cout << "Ingrese el número de términos: ";
    cin >> n;

    int suma = 0;
    int termino_anterior = 3;
    suma = suma + termino_anterior;

    if (n >= 1) {
        suma = 4; // El primer termino es 4
    }

    for (int i = 1; i<= n; ++i) {
        int termino_nuevo = termino_anterior*3/2 ;
        cout << termino_nuevo;
        suma += termino_nuevo;
        termino_anterior = termino_nuevo;
    }

    cout << " La suma de los primeros " << n << " términos de la serie es: " << suma << endl;

    return 0;
} 