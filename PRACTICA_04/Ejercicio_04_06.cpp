// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 12/03/25
// Número de ejercicio: 6 
// Problema planteado: suma de digitos primo

#include <iostream>
using namespace std;
int digitos(int n);
void esprimo (int num);

int main () {
    int numero=0;
    cout << "introduzca un numero ";
    cin >>numero;
    esprimo(numero);

}


int digitos(int n) { //esta funcion realiza el conteo por digitos del numero ingresado
    int resultado=0;
        while (n>0)
    {
        int aux=0;
        aux = n%10;
        n = n/10;
        resultado= resultado+aux;
    }
    return resultado;
}

void esprimo (int num){ //esta funcion determina si la suma es primo o no
    int contador=0;
    int n = digitos (num);
    cout << "la suma de digitos es " << n<< endl;
    for (int i = 1; i <=n; i++)
    {
        if (n % i==0){
            contador++;
        }
    }
    if (contador > 2){
        cout << "la suma de los digitos no es primo ";
    }
    else {
        cout << "la suma es primo ";
    }
}