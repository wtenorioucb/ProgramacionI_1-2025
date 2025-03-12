// Materia: Programación I, Paralelo 3
// Autor: Sofia Valentina Amonzabel Ramos
// Fecha creación: 05/03/2025
// Número de ejercicio: 8
// Problema planteado: a función para generar aleatoriamente las edades (

#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int randomEdad();
int randomEstatura();

int main()
{
    srand(time(NULL));
    SetConsoleOutputCP(65001); 

    int sumaEdades = 0, sumaEstaturas = 0;
    int edad, estatura;
    int contadorEdad = 0, contadorEstatura = 0;

    int cantidadAlumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;

    for (int i = 0; i < cantidadAlumnos; i++) //Bucle que genera una edad y estatura por cada alumno
    {
        edad = randomEdad();
        sumaEdades += edad; //Suma las edades que vayan saliendo
        estatura = randomEstatura();
        sumaEstaturas += estatura; //Suma las estaturas que vayan saliendo
        if (edad > 18)
        {
            contadorEdad++; //Cuenta las edades mayores a 18
        }
        if (estatura > 175)
        {
            contadorEdad++; //Cuenta las estaturas mayores a 175 cm
            contadorEstatura++; 
        }
    }

    cout << "La edad media es de " << sumaEdades/cantidadAlumnos << endl;
    cout << "La estatura media es de " << sumaEstaturas/cantidadAlumnos << " cm" << endl;
    cout << "Hay " << contadorEdad << " alumnos mayores a 18 años" << endl;
    cout << "Hay " << contadorEstatura << " alumnos que miden más de 175 cm" << endl;
}

int randomEdad() //Función que genera un número aleatorio entre 1 y 35
{
    return rand() % 35 + 1;
}

int randomEstatura() //Función que genera un número aleatorio entre 120 y 200
{
    return rand() % 80 + 121;
}