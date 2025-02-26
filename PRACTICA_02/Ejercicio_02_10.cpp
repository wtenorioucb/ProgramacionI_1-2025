//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Generar numeros aleatorios ente 1 y 1000 y mostrar numeros primos

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, numero;
    int contadorPrimos = 0;

    cout << "Ingrese la cantidad de numeros a generar" << endl;
    cin >> n;

    for (int i = 0;i < n;i++) {
        //generar numeros del 1 al 1000
        numero = 1 + rand() % ((1000) - 1);
        cout << "Numero generado: " << numero << endl;
    
        int esPrimo = 1;
        if (numero == 1) {
            esPrimo = 0;
        }
        else {
            int j = 2;
            //contador de primos
            while (j <= numero / 2) {
                if (numero % j == 0) {
                    esPrimo = 0;
                }
                j++;
            }
        }
        //añadir a la lista un numero qeu si es primo
        if (esPrimo == 1) {
            cout << "Primo";
            contadorPrimos = contadorPrimos + 1;
        }
        cout << endl;
    }
    cout << "Cantidad de numeros primos: " << contadorPrimos << endl;
    return 0;
}