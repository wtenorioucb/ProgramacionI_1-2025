//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: numero entre 1 y 10 y calcular su factorial

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int r, n, i;
    //generar numeros
    n = 1 + rand() % ((10) - 1);
    //factorial
    for (i = 0;i < (n - 1);i++) {
        r = ((i + 1) * (i + 2));
    }
    cout << "El numero aleatorio es: " << n << endl;
    cout << "El factorial es: " << r << endl;
    return 0;
}