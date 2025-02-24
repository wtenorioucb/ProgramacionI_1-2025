#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int tercerValor = 10;

int SumarValores(int primerValor, int segundoValor);
void MostrarEnPantalla(int posicion);
int NroRandomico(int limiteInferior, int limiteSuperior);

int main()
{
    int primerValor = 0;
    int segundoValor = 0;
    srand(time(NULL)); // Semilla
    system("cls");
    //MostrarEnPantalla(1);
    //cin >> primerValor;
    //MostrarEnPantalla(2);
    //cin >> segundoValor;
    primerValor = NroRandomico(1,100);
    cout << "Valor 1: " << primerValor;
    segundoValor = NroRandomico(1,100);
    cout << "Valor 2: " << segundoValor << endl;
    cout << "El resultado es: " << SumarValores(primerValor, segundoValor);
    cout << "\nEl tercer valor: " << tercerValor;
    return 0;
}

int SumarValores(int primerValor, int segundoValor)
{
    int resultado = 0;
    tercerValor = 55;
    resultado = primerValor + segundoValor;
    return resultado;
}

void MostrarEnPantalla(int posicion)
{
    cout << "Ingresar ";
    switch (posicion)
    {
        case 1:
            cout << "primer ";
            break;
        case 2:
            cout << "segundo ";
            break;
    }
    cout << "valor:";
}

int NroRandomico(int limiteInferior, int limiteSuperior)
{
    int aleatorio = limiteInferior + rand() % ((limiteSuperior + 1) - limiteInferior);
    return aleatorio;
}