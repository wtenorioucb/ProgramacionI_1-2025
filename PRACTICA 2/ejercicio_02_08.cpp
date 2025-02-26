//Materia. Programacion I, Paralelo 3
//Autor: Camila Valentina Cuba Fernandez 
//Fecha de Creacion: 22/02/2025
//Problema Planteado: Generar secuencia de numeros 

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;

    //requerir n

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (int i = 1;i <= n;i++) {
        for (int j = 1;j <= i;j++) {
            cout << j;
        }

        //repetir la secuencia anterior reduciendo desde el numero que se ingreso (n)
        
        for (int j = i - 1;j >= 1;j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
} 