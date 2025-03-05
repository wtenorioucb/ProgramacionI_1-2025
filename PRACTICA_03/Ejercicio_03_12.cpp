// Materia: Programación I, Paralelo 3 
// Autor: Lopez Tejerina Christian R 
// Fecha creación: 05/03/2025 
// Número de ejercicio: 12 
// Problema planteado: minutos trabajados en funciones 
#include <iostream>
using namespace std;

int controlextra(int n){ // se crea la funcion que controla los minutos extra
    int contadorextra=0;
    if (n>480)
    {
        contadorextra=n-480; // esta es la formula para calcular los minutos extra
        cout << "usted trabajo " << contadorextra << " minutos extras";
    }
    return contadorextra;
}     
int controldebe(int n){ //para controlar los minutos que debe
    int contadordebe=0;
    if (n<480)
    {
        contadordebe=480-n; // esta es la formula para calcular los minutos que debe
        cout << "usted debe trabajar " << contadordebe << " minutos mas";
    }
    return contadordebe;
}


int main (){
int n;
cout << "ingrese la cantidad de minutos trabajados: ";
cin >> n;
cout << controlextra(n) << endl;
cout << controldebe(n) << endl;
return 0;
} 