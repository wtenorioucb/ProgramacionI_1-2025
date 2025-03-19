// Materia: Programación I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creación: 10/03/2025
// Número de ejercicio: 1
/* Problema planteado: Crea una función llamada intercambiarValores que reciba dos parámetros por
referencia y los intercambie entre sí. Imprime los valores antes y después de la
llamada a la función.*/
#include <iostream>
using namespace std;
//funcion para intercambiar valores
void  intercambiar_valores(int &x, int &y){
    swap (x,y) ;
}
int main ()
{
    int a,b;
    cout<< "Introduzca un valor para a: ";
    cin>> a;
    cout << "Introduzca un valor para b: ";
    cin>> b;
    cout<<" Antes del intercambio a="<<a<<" b="<<b<<endl;
    intercambiar_valores(a,b);
    cout<<" Despues del intercambio a="<<a<<" b="<<b;
    return 0;

}
