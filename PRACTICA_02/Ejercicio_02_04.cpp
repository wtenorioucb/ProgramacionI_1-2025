//Materia. Programacion I, Paralelo 3
//Autor: Isabela Natalia Choque Aliaga
//Fecha de Creacion: 22/02/2025
//Problema Planteado: lanzamiento de moneda

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    float  n, cc=0, cx=0,i;
    int d;
    float pc, px;
    cout << "Ingrese la cantidad de lanzamientos: " << endl;
    cin >> n;
    //generar numeros 
    for (i = 0; i < n; i++) {
        d = 1 + rand() % ((2 + 1) - 1);
        //contar cara
        if (d % 2 == 1) {
            cc++;
        }
        //contar cruz
        else {
            cx++;
        }
        
    }
    pc = (cc / n)*100;
    px = (cx / n)*100;
    cout << "Porcentaje de caras: " << pc << endl;
    cout << "Porcentaje de cruz: " << px << endl;
    return 0;
}
