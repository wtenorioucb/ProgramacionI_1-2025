//Materia. Programacion I, Paralelo 3
//Autor: Camila Valentina Cuba Fernández 
//Fecha de Creacion: 22/02/2025
//Problema Planteado: adivinar un numero de forma aleatoria

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int numero, intento, min = 0, max = 50;

    //creacion del numero 

    numero= 1 + rand() % ((50) - 1);

    cout << "Estoy pensando en un numero entre " << min << " y " << max << endl;

    //contas 5 intentos

    for (int i = 1; i <= 5; i++)
    {
        
        cout << "intento " << i << endl;
        cout << "? ";
        cin >> intento;

        if (intento == numero)
        {
            cout << "Felicitaciones adivinaste el numero" << endl;
            return 0;
        }
        if (intento < numero) {
            min = intento;
        }
        else {
            max = intento;

        }
        //si adivino

        cout << "El numero esta entre " << min << " y " << max << endl;
    }

    //no adivino
    
    cout << "No lo adivinaste, el numero era: " << numero << endl;
    return 0;
}
