// Materia: Programaci�n I, Paralelo 3
// Autor: Juan Jose Condori Yucra
// Fecha creaci�n: 10/03/2025
// N�mero de ejercicio: 1
/* Problema planteado: Crea una funci�n llamada intercambiarValores que reciba dos par�metros por
referencia y los intercambie entre s�. Imprime los valores antes y despu�s de la
llamada a la funci�n.*/
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
