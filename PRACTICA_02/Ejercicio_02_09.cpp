//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Generar numeros aleatorios ente 1 y 1000 luego sumar, promediar, mayor valor y menor valor

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n, numero, suma=0, mayor=1, menor=1000;

    cout << "Ingrese la cantidad de numeros a generar" << endl;
    cin >> n;
    //PARA GENERAR NUMEROS ALEATORIOS DEL 1 AL 1000
    for (int i = 0;i < n;i++) {
        numero = 1 + rand() % ((1000) - 1);
        cout << "Numero generado: " << numero << endl;
        suma += numero;

        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
            
    }
    //FORMULA PARA CALULAR EL PROMEDIO
    int promedio = suma / n;
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es:  " << promedio << endl;
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}