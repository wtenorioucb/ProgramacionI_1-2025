//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Simular dado
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, d, i, counta=0;
    cout << "Ingrese la cantidad de tiros del dado:  " << endl;
    cin >> n;
    for (i = 0;i < n;i++) {
        //FORMULA PARA SACAR NUMEROS ALEATORIOS
        d = 1+rand()%((6+1)-1);
        if (d % 2 == 0) {
            counta++;
            }
    }
    cout << "La frecuencia de pares repetidos es: " << counta << endl;
    return 0;
}