//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Suma de serie

#include <iostream>
using namespace std;

int main()
{
    int x = 4, y = 6, suma = 10, z, i, n;
    cout << "Ingrese la cantidad de terminos: " << endl;
    cin >> n;
    int c=-1;
    for (i = 0; i < (n - 2);i++) {
        //FORMULAS PARA CALCULAR
        z = (x + y) + (c);
        x = y;
        y = z;
        suma = suma + z;
        c = c - 1;
    }
    cout << "La suma de los terminos es:  "<<suma<< endl;
    return 0;
}
