//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: numero con base n a base 10

#include <iostream>
using namespace std;
int main()
{
    //INGRESAMIOS DATOS
    int numero,base;
    cout << "Ingresa el numero en la base especificada" << endl;
    cin >> numero;
    cout << "Ingresa la base del numero:" << endl;
    cin >> base;
    //DECLARAR
    int digito;
    int numero_base_10 = 0;
    int exponente = 0;
    int longitud = 0;
    int resultado = 0;

    int numero_auxiliar = numero;
    int numero_impresion = numero;

        while (numero_auxiliar > 0){
           numero_auxiliar = int(numero_auxiliar / 10);
           longitud += 1;
        }

        while (numero > 0) {
            digito = numero % 10;
            //cout << digito << endl;
            resultado += digito * pow(base, exponente);
            exponente += 1;
            numero = int(numero / 10);

        }

        cout << "El numero introducido es: " << numero_impresion << " de la base introducida es: " << base << " el resultado en base 10 es: " << resultado << endl;
}